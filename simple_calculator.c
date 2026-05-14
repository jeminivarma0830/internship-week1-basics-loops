#include <stdio.h>

void printMenu() {
    printf("\n==============================\n");
    printf("     SIMPLE CALCULATOR        \n");
    printf("==============================\n");
    printf("  1. Addition       (+)\n");
    printf("  2. Subtraction    (-)\n");
    printf("  3. Multiplication (*)\n");
    printf("  4. Division       (/)\n");
    printf("  5. Modulus        (%%)\n");
    printf("  6. Exit\n");
    printf("==============================\n");
    printf("Enter your choice: ");
}

int main() {
    int choice;
    double num1, num2, result;
    int intNum1, intNum2;

    do {
        printMenu();
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 5) {
            printf("Enter first number:  ");
            scanf("%lf", &num1);
            printf("Enter second number: ");
            scanf("%lf", &num2);
        }

        switch (choice) {
            case 1:
                result = num1 + num2;
                printf("\nResult: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
                break;

            case 2:
                result = num1 - num2;
                printf("\nResult: %.2lf - %.2lf = %.2lf\n", num1, num2, result);
                break;

            case 3:
                result = num1 * num2;
                printf("\nResult: %.2lf * %.2lf = %.2lf\n", num1, num2, result);
                break;

            case 4:
                if (num2 == 0) {
                    printf("\nError: Division by zero is not allowed!\n");
                } else {
                    result = num1 / num2;
                    printf("\nResult: %.2lf / %.2lf = %.2lf\n", num1, num2, result);
                }
                break;

            case 5:
                intNum1 = (int)num1;
                intNum2 = (int)num2;
                if (intNum2 == 0) {
                    printf("\nError: Modulus by zero is not allowed!\n");
                } else {
                    printf("\nResult: %d %% %d = %d\n", intNum1, intNum2, intNum1 % intNum2);
                }
                break;

            case 6:
                printf("\nThank you for using Simple Calculator. Goodbye!\n");
                break;

            default:
                printf("\nInvalid choice! Please select between 1 and 6.\n");
        }

    } while (choice != 6);

    return 0;
}