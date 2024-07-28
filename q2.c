#include <stdio.h>

int x[8];
int y[8];

int f(int a) {
    int L1 = 0;
    while (a != 0) {
        if (a & 0x80000000 != 0) {
            L1++;
        }
        a=a*2;
    }
    return L1;
}

void main() {
    for (int L1=8; L1 != 0; L1--) {
        y[L1] = f(x[L1]);
        printf("%d \n", x[L1]);
        printf("%d \n", y[L1]);
    }
}