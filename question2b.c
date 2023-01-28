// Memoization implementation:
#include <stdio.h>

int memo[1000] = {0};
int F(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (n == 2) return 2;
    if (memo[n] != 0) return memo[n];
    memo[n] = F(n-3) + F(n-2);
    return memo[n];
}

int main() {
    int n = 10;
    printf("F(%d) = %d\n", n, F(n));
    return 0;
}

/*
Memoization Implementation:

Advantages:
It can solve problems that have overlapping sub-problems more efficiently.
It can reduce the time complexity of the algorithm.
It can save memory compared to dynamic programming implementation.


Disadvantages:
It can be difficult to understand and implement.
It can use more memory than recursive implementation if implemented improperly.
*/