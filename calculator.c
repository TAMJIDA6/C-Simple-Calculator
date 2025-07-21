# C-Simple-Calculator
A beginner-friendly simple calculator using C language — performs addition, subtraction, and multiplication.

#include <stdio.h>

int main() {
    float num1, num2, sum, sub, mult;

    printf("Enter your two numbers: ");
    scanf("%f %f", &num1, &num2);

    sum = num1 + num2;
    printf("Your summation result is = %.2f\n", sum);

    sub = num1 - num2;
    printf("Your subtraction result is = %.2f\n", sub);

    mult = num1 * num2;
    printf("Your multiplication result is = %.2f\n", mult);

    return 0;
}
