#include <stdio.h>

int main() {
    int num1, num2;
    char operator;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Consume leftover newline
    getchar();

    printf("Enter operator (s=Sum, x=Subtraction, m=Multiplication, d=Division): ");
    scanf("%c", &operator);

    if (operator == 's') {
        printf("Sum = %d\n", num1 + num2);
    }
    else if (operator == 'x') {
        printf("Difference = %d\n", num1 - num2);
    }
    else if (operator == 'm') {
        printf("Multiplication = %d\n", num1 * num2);
    }
    else if (operator == 'd') {
        if (num2 != 0)
            printf("Division = %.2f\n", (float)num1 / num2);
        else
            printf("Error: Division by zero\n");
    }
    else {
        printf("Invalid operator\n");
    }

    return 0;
}
