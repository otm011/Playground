#include "helpfunc.h"

int add(int a, int b) {
    return a + b;
}

int pot(int n, int m) {
    int c = 1;
    for (int i = 0; i < m; ++i) {
        c = n * c;
    }
    return c;
}

int factorial_rec(int n) {
    if (n == 0 || n == 1)
        return 1;
    else {
        int result = factorial_rec(n - 1);
        return n * result;
    }
}

int factorial_it(int n) {
    if (n == 0 || n == 1)
        return 1;
    else {
        int c = n;
        for (int i = 0; i < n - 1; ++i) {
            c = c * (n - i - 1);
        }
        return c;
    }
}