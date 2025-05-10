#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
void showMenu() {
    printf("\n=== Mini OS Simulation ===\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");
    printf("Choose an operation: ");
}

void runOperation(const char *command) {
    clock_t start = clock();
    system(command);
    clock_t end = clock();

    double elapsed = (double)(end - start) / CLOCKS_PER_SEC;
    printf("runtime: %.2f seconds\n", elapsed);
}

int main() {
    int choice;
    while (1) {
        showMenu();
        scanf("%d", &choice);
        switch (choice) {
            case 1: runOperation("addition.exe"); break;
            case 2: runOperation("subtraction.exe"); break;
            case 3: runOperation("multiplication.exe"); break;
            case 4: runOperation("division.exe"); break;
            case 5: printf("Exiting...\n"); exit(0);
            default: printf("Invalid choice.\n");
        }
    }
    return 0;
}