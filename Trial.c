#include <stdio.h>

int main(void) {
    int n = 5;
    int fact = 1;

    for (int i = 1; i <= n; i++) {
        fact *= i;
        printf("The factorial of %d is %d\n", i, fact);
    }

    return 0;
}
