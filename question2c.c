// Dynamic Programming implementation
#include <stdio.h>

int F(int n) 
{
    int values[100] = {0};
    values[0] = 0;
    values[1] = 1;
    values[2] = 2;

    if (n == 0) return 0;
    if (n == 1) return 1;
    if (n == 2) return 2;

    for (int i = 3; i <= n; i++) {
        values[i] = values[i-3] + values[i-2];
    }

    return values[n];
}

int main() {
    int n = 10;
    printf("F(%d) = %d\n", n, F(n));
    return 0;
}

 /* 
Dynamic Programming Implementation:

Advantages:
It can solve problems that have overlapping sub-problems more efficiently.
It can reduce the time complexity of the algorithm.


Disadvantages:
It can be difficult to understand and implement.
It can consume more memory than recursive or memoization implementations.

 */