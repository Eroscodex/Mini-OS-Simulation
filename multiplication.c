#include <stdio.h>

int main() {
    int a, b, choice;
    do {
        printf("\n[Multiplication] Enter two numbers:\n");
        scanf("%d%d", &a, &b);
        printf("Result: %d * %d = %d\n", a, b, a * b);
        printf("1. Multiply again\n2. Return to menu\nChoose: ");
        scanf("%d", &choice);
    } while (choice == 1);
    return 0;
}