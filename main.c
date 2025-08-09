#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#include "include/bubble_sort.h"
#include "include/selection_sort.h"
#include "include/print_array.h"
#include "include/arrays_equal.h"

int main() {
    int arr[] = {20, 30, 50, 200, 90, 10, 18, 9, 2, 44};
    int size = sizeof(arr) / sizeof(arr[0]);
    int expected[] = {2, 9, 10, 18, 20, 30, 44, 50, 90, 200};

    printf("Original array:\n");
    print_array(arr, size);

    int arr_copy[size];
    for (int i = 0; i < size; i++) {
        arr_copy[i] = arr[i];
    }

    clock_t start_bubble = clock();
    bubble_sort(arr, size);
    clock_t end_bubble = clock();

    double time_bubble = (double)(end_bubble - start_bubble) / CLOCKS_PER_SEC;

    printf("\nSorted array using Bubble Sort:\n");
    print_array(arr, size);
    printf("Bubble Sort took %.6f seconds\n", time_bubble);
    printf("Bubble Sort test %s\n", arrays_equal(arr, expected, size) ? "PASSED" : "FAILED");

    clock_t start_selection = clock();
    selection_sort(arr_copy, size);
    clock_t end_selection = clock();

    double time_selection = (double)(end_selection - start_selection) / CLOCKS_PER_SEC;

    printf("\nSorted array using Selection Sort:\n");
    print_array(arr_copy, size);
    printf("Selection Sort took %.6f seconds\n", time_selection);
    printf("Selection Sort test %s\n", arrays_equal(arr_copy, expected, size) ? "PASSED" : "FAILED");

    return 0;
}
