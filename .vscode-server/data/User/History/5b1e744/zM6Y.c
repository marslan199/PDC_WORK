#include <stdio.h>
#include <time.h>

long long fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n = 40;  // Adjust 'n' for desired Fibonacci number
    clock_t start, end;

    start = clock();
    long long result = fibonacci(n);
    end = clock();

    double time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("Fibonacci(%d) = %lld\n", n, result);
    printf("Execution Time: %f seconds\n", time_taken);

    return 0;
}