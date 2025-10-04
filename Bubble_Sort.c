// Bubble sort algorithm O(n²)

// Step-by-Step Process
// - Start from the first element.
// - Compare it with the next one.
// - If the first is greater than the second, swap them.
// -  Move to the next pair and repeat.
// - After one full pass, the largest element is at the end.
// - Repeat the process for the remaining unsorted elements.

#include <stdio.h>

int main() {
    int arr[] = {10, 20, 50, 29, 30};
    int len = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < len; i++) {
        for (int j = i + 1; j < len; j++) {
            if (arr[i] > arr[j]) {
                // swapping method
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int k = 0; k < len;) {
        printf("%d ", arr[k++]);
    }

    return 0;
}