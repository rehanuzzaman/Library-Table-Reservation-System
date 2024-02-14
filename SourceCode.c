#include <stdio.h>

// Constants
#define NEWSPAPER_SECTION 1
#define GENERAL_RESEARCH_SECTION 2
#define STUDY_ZONE 3
#define BANGABANDHU_SECTION 4
#define MAX_TABLES 115

// Global variables
int reservedTables[MAX_TABLES] = {0};
int availableTables[4] = {55, 30, 20, 10};

// Function to reserve a table
void reserveTable() {
    int section, tableNumber;

    // Display available zones with tables
    printf("Zones with available tables:\n");
    if (availableTables[NEWSPAPER_SECTION-1] > 0) printf("%d. Newspaper and Periodical Section (%d tables available)\n", NEWSPAPER_SECTION, availableTables[NEWSPAPER_SECTION-1]);
    if (availableTables[GENERAL_RESEARCH_SECTION-1] > 0) printf("%d. General and Research Section (%d tables available)\n", GENERAL_RESEARCH_SECTION, availableTables[GENERAL_RESEARCH_SECTION-1]);
    if (availableTables[STUDY_ZONE-1] > 0) printf("%d. Study Zone (%d tables available)\n", STUDY_ZONE, availableTables[STUDY_ZONE-1]);
    if (availableTables[BANGABANDHU_SECTION-1] > 0) printf("%d. Bangabandhu Section (%d tables available)\n", BANGABANDHU_SECTION, availableTables[BANGABANDHU_SECTION-1]);

    // Ask for the section and table number to reserve
    printf("Enter the section number to reserve a table: ");
    scanf("%d", &section);
    if (section < 1 || section > 4 || availableTables[section-1] == 0) {
        printf("Invalid section or no tables available in that section.\n");
        return;
    }
    printf("Enter the table number to reserve: ");
    scanf("%d", &tableNumber);
    if (tableNumber < 1 || tableNumber > availableTables[section-1]) {
        printf("Invalid table number.\n");
        return;
    }

    // Reserve the table
    int tableIndex = 0;
    for (int i = 0; i < section-1; i++) {
        tableIndex += availableTables[i];
    }
    tableIndex += tableNumber-1;
    reservedTables[tableIndex] = 1;
    availableTables[section-1]--;
    printf("Table %d in section %d has been reserved.\n", tableNumber, section);
}

// Function to cancel a table reservation
void cancelReservation() {
    int section, tableNumber;

    // Ask for the section and table number to cancel reservation
    printf("Enter the section number of the table to release reservation: ");
    scanf("%d", &section);
    if (section < 1 || section > 4) {
        printf("Invalid section.\n");
        return;
    }
    printf("Enter the table number to release reservation: ");
    scanf("%d", &tableNumber);
    if (tableNumber < 1 || tableNumber > availableTables[section-1]) {
        printf("Invalid table number.\n");
        return;
    }

    // Cancel the reservation
    int tableIndex = 0;
    for (int i = 0; i < section-1; i++) {
        tableIndex += availableTables[i];
    }
    tableIndex += tableNumber-1;
    if (reservedTables[tableIndex] == 0) {
        printf("Table is not reserved.\n");
return;
}
reservedTables[tableIndex] = 0;
availableTables[section-1]++;
printf("Table %d in section %d has been canceled.\n", tableNumber, section);
}

// Function to display the table status
void displayTableStatus() {
printf("Table status:\n");
for (int i = 0; i < MAX_TABLES; i++) {
if (i == 0 || i == 55 || i == 85 || i == 105) printf("\n");
if (reservedTables[i] == 1) printf("X ");
else printf("O ");
}
printf("\n\nAvailable tables:\n");
printf("Newspaper and Periodical Section: %d tables\n", availableTables[NEWSPAPER_SECTION-1]);
printf("General and Research Section: %d tables\n", availableTables[GENERAL_RESEARCH_SECTION-1]);
printf("Study Zone: %d tables\n", availableTables[STUDY_ZONE-1]);
printf("Bangabandhu Section: %d tables\n", availableTables[BANGABANDHU_SECTION-1]);
}

// Main function
int main() {
int choice;
while (1) {
printf("\n\n\n\t  Daffodil International University");
printf("\n\tDIU Library Table Reservation System\n\n\n");
printf("Reserve a Table------------------------------------- 01\n");
printf("Release a Table Reservation------------------------- 02\n");
printf("Display Table Status-------------------------------- 03\n");
printf("Exit------------------------------------------------ 04\n");
printf("\nEnter your choice: ");
scanf("%d", &choice);
switch (choice) {
case 1:
reserveTable();
break;
case 2:
cancelReservation();
break;
case 3:
displayTableStatus();
break;
case 4:
printf("Goodbye!\n");
return 0;
default:
printf("Invalid choice. Try again.\n");
}
}
return 0;
}

