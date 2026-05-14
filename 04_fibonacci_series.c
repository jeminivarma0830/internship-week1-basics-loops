#include <stdio.h>

int main() {
    int n, i;
    long long first = 0, second = 1, next;

    printf("=== Fibonacci Series ===\n");
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive number.\n");
        return 1;
    }

    printf("\nFibonacci Series up to %d terms:\n", n);

    for (i = 1; i <= n; i++) {
        if (i == 1) {
            printf("%lld", first);
        } else if (i == 2) {
            printf(", %lld", second);
        } else {
            next = first + second;
            first = second;
            second = next;
            printf(", %lld", second);
        }
    }

    printf("\n");
    return 0;
}