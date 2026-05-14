#include <stdio.h>

int main() {
    int number;

    printf("=== Even or Odd Checker ===\n");
    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("\n%d is an EVEN number.\n", number);
    } else {
        printf("\n%d is an ODD number.\n", number);
    }

    if (number == 0) {
        printf("(Note: Zero is considered even.)\n");
    }

    return 0;
}