#include <stdio.h>
#include <stdlib.h>

// Function Prototype Declarations
int* fillArray(int *arr, int size);
void freeMemory(int *arr);

int main() {
    // Step 1: Allocate memory for the array
    int size = 5; // Example size, can be changed based on requirement
    int *array = (int*) malloc(size * sizeof(int));
    
    if(array == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Step 2: Fill the array with values
    array = fillArray(array, size);

    // Display the filled array
    printf("Filled Array: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Step 3: Free the allocated memory
    freeMemory(array);

    return 0;
}

// Function Definitions

// Fills the array with values starting from 1 up to 'size'
int* fillArray(int *arr, int size) {
    for(int i = 0; i < size; i++) {
        arr[i] = i + 1; // Example filling logic, can be modified
    }
    return arr;
}

// Frees the dynamically allocated memory
void freeMemory(int *arr) {
    free(arr); // Safely frees the memory pointed by 'arr'
}
