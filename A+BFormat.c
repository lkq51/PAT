#include <stdio.h>

//
// Created by lkq on 2017/6/14.
//
int AplusB(){
    int A,B;
    while (scanf("%d%d", &A, &B) != EOF)
    {
        int sum = A + B;
        if (sum < 0){
            printf("-");
            sum = -sum;
        }
        if (sum >= 1000000){
            printf("%d,%03d,%03d\n", sum / 1000000, (sum / 1000) % 1000, sum % 1000);
        } else if (sum >= 1000){
            printf("%d,%03d\n", sum / 1000, sum % 1000);
        } else {
            printf("%d\n", sum);
        }
        return 0;
    }
}
