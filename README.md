




Research ~ 

 ⧫ What is a database ?
A database is an organized collection of structured information, or data, typically stored and accessed electronically from a computer system. Databases are used to efficiently store, manage, retrieve, and update data for various purposes, from personal contact lists to complex enterprise-level systems. They are often controlled by a database management system (DBMS), which is a software that helps with these functions.  

⧫ Key aspects of a database
Organization: Databases structure data so that it can be easily managed and accessed, unlike a simple file or spreadsheet. For example, a student database might organize information into tables with columns for ID, name, and major. 
Data storage: They can store a wide variety of data, including text, numbers, images, and other types of information. 
Management: A database management system (DBMS) is a software application used to create, maintain, and interact with a database. 
Efficiency: Databases are designed for efficient retrieval, insertion, and deletion of data. This is crucial for applications that need to access information quickly, such as a social media platform recommending content or a healthcare provider retrieving patient data. 
Security: Databases provide a secure way to store sensitive information, such as personal health records. 
Types: There are various types of databases, including relational databases (which use SQL) and NoSQL databases, each suited for different needs. In-memory databases are another type, which store data in a computer's main memory for faster access. 



Analysis ~ 

To create a database Inventory / Stock Management System we should have the information about them.


Name of the item/product


Unique ID or code for the item


Quantity in stock


Unit price or cost per item





Ideate ~


ALGORITHM :
Step 1: Define Data Structure and Constants
Define a structure named Item (or inventoryItem) to hold the data for each stock item. This structure must contain at least three fields:


item_name: A character array (string) to store the item’s name (e.g., 50 characters).


item_code: A character array (string) to store the item’s unique code or ID (e.g., 20 characters).


quantity: An integer to store the number of units in stock.


Define a constant TOTAL_ITEMS (e.g., 5) to specify how many items will be processed.


Step 2: Input Item Data
Initialize an array of Item structures (e.g., size 10) and a temporary Item structure named temp for use during sorting.


Start a loop that iterates from i = 0 up to, but not including, TOTAL_ITEMS.
 Inside the loop, for the i‑th item:


Prompt the user to enter the item’s name. Read the name using scanf("%s", ...) and store it in items[i].item_name.


Prompt the user to enter the item’s code/ID. Read the code using scanf("%s", ...) and store it in items[i].item_code.


Prompt the user to enter the quantity in stock. Read the integer quantity using scanf("%d", ...) and store it in items[i].quantity.


Step 3: Sort Data (Bubble Sort)
Start the outer loop (for passes): iterate from i = 0 up to TOTAL_ITEMS - 2.


Start the inner loop (for comparisons/swaps): iterate from j = 0 up to TOTAL_ITEMS - 2 - i.


Compare the quantities of the current item and the next item:


IF items[j].quantity > items[j + 1].quantity THEN


Swap the entire item structures:


Store items[j] into temp.


Copy items[j + 1] into items[j].


Copy temp into items[j + 1].


End the inner loop.


End the outer loop.


(After this, the array items is sorted in ascending order by quantity.)


Step 4: Display Results
Print a formatted header for the inventory results (for example: “Item Name | Item Code | Quantity”).


Start a loop that iterates from i = 0 up to, but not including, TOTAL_ITEMS.


Inside the loop, for the i‑th item:


Print the item’s name (items[i].item_name).


Print the item’s code (items[i].item_code).


Print the item’s quantity (items[i].quantity).


End the loop.


Return 0 to indicate successful program execution.


Build ~ 
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




Test Cases~ 

Enter number of stock items you want to list: 2

Enter details for item 1
Enter name of item: Shre
Enter ID of item: 43
Enter quantity of stock: 22200
Enter price: 23
-----------------------------------------------------

Enter details for item 2
Enter name of item: dasda
Enter ID of item: 23
Enter quantity of stock: 352
Enter price: 22200
-----------------------------------------------------

========== Sorted Stock List (by Price) ==========
Item 1:
Name: dasda
ID: 23
Quantity: 352
Price: 22200
-----------------------------------------------------
Item 2:
Name: Shre
ID: 43
Quantity: 22200
Price: 23
-----------------------------------------------------

=== Code Execution Successful ===


Implementation~

https://github.com/Shreyash111024/-Sorted-Stock-List-by-Price-.git


