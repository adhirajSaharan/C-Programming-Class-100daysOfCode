/*Q56: Read and print elements of a one-dimensional array.

/*
Sample Test Cases:
Input 1:
3
10 20 30
Output 1:
10 20 30

Input 2:
5
1 2 3 4 5
Output 2:
1 2 3 4 5

*/
#include <stdio.h>

int main() {
    int n, i;

    // Read the size of the array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n]; // Declare array with size n

    // Read n elements from the user
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Print the array elements
    printf("The elements are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n"); // New line after output

    return 0;
}


