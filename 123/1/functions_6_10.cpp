#include "easy.h"

bool itc_iseven(int num){
    if (num % 2 == 0)
        return 1;
    return 0;
}

int itc_max(int num1, int num2){
    if (num1 < num2)
        return num2;
    return num1;
}

int itc_min(int num1, int num2){
    if (num1 > num2)
        return num2;
    return num1;
}

double itc_fmax(double num1, double num2){
    if (num1 < num2)
        return num2;
    return num1;
}

double itc_fmin(double num1, double num2){
    if (num1 > num2)
        return num2;
    return num1;
}
