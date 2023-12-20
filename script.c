#include <stdio.h>
#include <stdlib.h>

int main() {
    int choice;

    // Display menu
    printf("Select the region:\n");
    printf("1. US\n");
    printf("2. EU\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    // Process user's choice
    switch (choice) {
        case 1:
            printf("Running US band...\n");
            system("./run_US-lora-pkt-fwd.sh");
            break;

        case 2:
            printf("Running EU band...\n");
            system("./run_EU-lora-pkt-fwd.sh");
            break;

        default:
            printf("Invalid option!\n");
            break;
    }

    return 0;
}

