#include <stdio.h>  // Include standard input and output header for printf
#include <stdbool.h> // Include standard boolean library for using 'bool' type

// Function to perform bubble sort on a hard-coded array
void bubble_sort(void)
{
    // Initialize array with unsorted elements
    int arr[] = {64, 34, 25, 12, 22};
    // Calculate the length of the array by dividing the total size of the array by the size of an integer
    int length_of_array = sizeof(arr) / sizeof(int);
    int temp; // Temporary variable for swapping elements
    bool swapped; // Boolean flag to check if a swap occurred

    do
    {
        swapped = false; // Initially set swapped to false on each iteration
        // Loop through the array, stopping one element before the last since we compare arr[i] with arr[i+1]
        for (int i = 1; i < length_of_array; i++)
        {
            // If the current element is greater than the next element, swap them
            if (arr[i - 1] > arr[i])
            {
                temp = arr[i - 1]; // Store the current element in temp
                arr[i - 1] = arr[i]; // Swap elements
                arr[i] = temp; // Complete the swap
                swapped = true; // Set swapped to true to indicate a swap occurred
            }
        }

        // After each outer loop iteration, one less comparison is needed
        length_of_array--;
    } while (swapped); // Continue looping until no swaps occur

    // Once sorting is complete, print the sorted array
    printf("Sorted array: \n");
    for (int i = 0; i < length_of_array; i++)
        printf("%d ", arr[i]);
}

int main()
{
    // Call the bubble_sort function
    bubble_sort();
    
    printf("\n"); // Print a newline for clean output
    return 0; // Return 0 to indicate successful completion
}
