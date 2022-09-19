#include "easy.h"

int itc_skv(int num){
    if (num * num > 0)
        return num * num;
    return -1;
}

int itc_spr(int a, int b){
    if (a * b > 0)
        return a * b;
    return -1;
}

int itc_sqrt(int num){
    int n;
    n=1
    while (n * n < num)
        n++;
    if (n * n == num)
        return n;
    return -1;
}


