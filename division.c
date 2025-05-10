#include <stdio.h>

int main() {
    float a, b;
    int choice;
    do {
        printf("\n[Division] Enter two numbers:\n");
        scanf("%f%f", &a, &b);
        if (b == 0) {
            printf("Error: Division by zero is not allowed.\n");
        } else {
            printf("Result: %.2f / %.2f = %.2f\n", a, b, a / b);
        }
        printf("1. Divide again\n2. Return to menu\nChoose: ");
        scanf("%d", &choice);
    } while (choice == 1);
    return 0;
}