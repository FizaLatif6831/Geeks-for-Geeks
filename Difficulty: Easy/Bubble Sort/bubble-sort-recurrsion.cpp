//{ Driver Code Starts
// Initial Template for C++

// C program for implementation of Bubble sort
#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

// swapping the elements
void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}


// } Driver Code Ends
// User function Template for C++

void bubbleSort(int arr[], int n) {
    if (n == 1) {
        return;  // Base case: if the array size is 1, it is already sorted
    }

    // One pass of bubble sort: move the largest element to the end
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            // Swap elements
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }

    // Recursive call to bubbleSort with the next smaller array size
    bubbleSort(arr, n - 1);
}


//{ Driver Code Starts.

/* Function to print an array */
void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Driver program to test above functions
int main() {
    int arr[1000], n, T, i;

    scanf("%d", &T);

    while (T--) {

        scanf("%d", &n);

        for (i = 0; i < n; i++)
            scanf("%d", &arr[i]);

        Solution ob;

        ob.bubbleSort(arr, n);
        printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends

