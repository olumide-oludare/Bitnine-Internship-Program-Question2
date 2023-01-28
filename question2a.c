// Recursive implementation
#include <stdio.h>

int F(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else if (n == 2) {
        return 2;
    } else {
        return F(n-3) + F(n-2);
    }
}

int main() {
    int n = 10;
    printf("F(%d) = %d\n", n, F(n)); 
    return 0;
}


/* 
Recursive Implementation:

Advantages:
It is easy to understand and implement.
The code is usually more readable and less complex.


Disadvantages:
It can lead to infinite loops and stack overflow errors if not implemented properly.
It can be slow due to repetitive calculations of the same sub-problems.
It also has the disadvantage of having a high time complexity due to the large
number of recursive calls being made.

*/