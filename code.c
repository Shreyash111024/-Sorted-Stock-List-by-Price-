#include <stdio.h>

struct stock {
    // Name of the item/product
    char name[50];
    // Unique ID or code for the item
    int id;
    // Quantity in stock
    int quan;
    // Unit price or cost per item
    int price;
};

int main() {
    int n;
    printf("Enter number of stock items you want to list: ");
    scanf("%d", &n);

    struct stock S1[n];

    // Input stock details
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for item %d\n", i + 1);
        printf("Enter name of item: ");
        scanf("%s", S1[i].name);

        printf("Enter ID of item: ");
        scanf("%d", &S1[i].id);

        printf("Enter quantity of stock: ");
        scanf("%d", &S1[i].quan);

        printf("Enter price: ");
        scanf("%d", &S1[i].price);

        printf("-----------------------------------------------------\n");
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (S1[j].quan > S1[j + 1].quan) {
                struct stock temp = S1[j];
                S1[j] = S1[j + 1];
                S1[j + 1] = temp;
            }
        }
    }

    // Print sorted stock list
    printf("\n========== Sorted Stock List (by Price) ==========\n");
    for (int i = 0; i < n; i++) {
        printf("Item %d:\n", i + 1);
        printf("Name: %s\n", S1[i].name);
        printf("ID: %d\n", S1[i].id);
        printf("Quantity: %d\n", S1[i].quan);
        printf("Price: %d\n", S1[i].price);
        printf("-----------------------------------------------------\n");
    }

    return 0;
}


