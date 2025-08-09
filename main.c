#include <stdio.h>
#include "include/bubble_sort.h"
#include "include/print_array.h"

int main() {
    int arr[] = {20, 30, 50, 200, 90, 10, 18, 9, 2, 44};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array:\n");
    print_array(arr, size);

    bubble_sort(arr, size);

    printf("Sorted array using Bubble Sort:\n");
    print_array(arr, size);

    return 0;
}
