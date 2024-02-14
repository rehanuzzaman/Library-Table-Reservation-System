# Library-Table-Reservation-System

This C program implements a simple library table reservation system for Daffodil International University. It allows users to reserve, cancel reservations, and display the status of tables in different sections of the library.

Key Components:

Constants: Defined constants for different sections of the library and the maximum number of tables.

Global Variables:

reservedTables[MAX_TABLES]: An array to store the reservation status of each table.
availableTables[4]: An array to store the number of available tables in each section.
Functions:

reserveTable(): Allows the user to reserve a table by selecting a section and table number.
cancelReservation(): Allows the user to cancel a table reservation by specifying the section and table number.
displayTableStatus(): Displays the current status of all tables, marking reserved tables with 'X' and available tables with 'O'.
Main Function:

The main function contains a menu-driven loop where the user can choose to reserve a table, cancel a reservation, display the table status, or exit the program.
User Manual:

Reserve a Table (Option 1):

Choose option 1 from the menu.
The program will display the available sections with the number of tables in each section.
Enter the section number where you want to reserve a table.
Enter the table number you wish to reserve.
The program will confirm the reservation and update the table status.
Cancel Reservation (Option 2):

Choose option 2 from the menu.
Enter the section number of the reserved table.
Enter the table number to release the reservation.
The program will check if the table is reserved, cancel the reservation, and update the table status.
Display Table Status (Option 3):

Choose option 3 from the menu.
The program will display the current status of all tables in a graphical format (X for reserved, O for available).
Additionally, it shows the number of available tables in each section.
Exit (Option 4):

Choose option 4 from the menu to exit the program.
Note:

Invalid inputs are handled gracefully, and appropriate messages are displayed.
The program uses a continuous loop, allowing users to perform multiple actions without restarting the program.
This program is designed to provide a user-friendly interface for managing table reservations in a library setting. Users can easily interact with the system through the menu options, and the program ensures proper validation of inputs to maintain data integrity.




