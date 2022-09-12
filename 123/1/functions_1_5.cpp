#include "easy.h"

void itc_name() {
    cout << "Alexandr";
}

void itc_fio() {
    itc_name();
    cout << " " << "Starkov Andreevich";
}

int itc_abs(int num){
    if (num < 0)
        return num * (-1);
    return num;
}

double itc_fabs(double num){
    if (num < 0)
        return num * (-1);
    return num;
}

int itc_revnbr(int num){
    return num % 10 * 100 + num / 10 % 10 * 10 + num / 100;
}
