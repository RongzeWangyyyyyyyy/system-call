#include <stdio.h>

int g[10];

void add(int a, int b) {
    g[b]=a+g[b];
}

void main() {
    int L1 = 1;
    int L2 = 2;

    add(3,4);
    add(L1,L2);
    for (int i =0; i<10; i++) {
        printf("%d\n", g[i]);
    }
}