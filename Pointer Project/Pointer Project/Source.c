#include <stdio.h> // Include the standard input-output library

int main() { // Our main function where the program execution starts
    int number; // Declare an integer variable
    int* ptr; // Declare an integer pointer

    printf("Enter an integer: "); // Ask the user to enter an integer
    scanf_s("%d", &number); // Read the integer from the user

    ptr = &number; // Assign the address of 'number' to the pointer 'ptr'

    // Display the value and address of 'number' using the variable and the pointer
    printf("Value of number: %d\n", number);
    printf("Address of number: %p\n", int*);

    return 0; // Exit the program successfully
}
