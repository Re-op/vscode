#include <stdio.h>

int main(){
    int x;
    int cnt = 0;

    for ( x=1; x<=100; x++) {
        int i;
        int isPrime = 1;//x是素数
        for ( i=2; i<x; i++ ) {
            if ( x % i == 0 ) {
                isPrime = 0;
                break;
            }
        }
        if ( isPrime == 1 ) {
            cnt++;
            printf( "%d\t ", x);
            if(cnt%5==0)
                printf("\n");
        }
    }
    return 0;
}