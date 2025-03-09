#include <stdio.h>

int main() {
    // Print a greeting message
    printf("Hello, World!\n");

    // A simple sum of two numbers
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int sum = a + b;
    printf("The sum of %d and %d is %d\n", a, b, sum);

    return 0;
}
