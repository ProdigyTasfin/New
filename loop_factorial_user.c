#include <stdio.h>

// write a program to calculate the factorial of a given number using a for loop. 

int main() {
    int n;
    int fact = 1;  // Move this outside the loop

    printf("Enter your number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }

    printf("Factorial of your given number (%d) is: %d\n", n, fact);

    return 0;
}
