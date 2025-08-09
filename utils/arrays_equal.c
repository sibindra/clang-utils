#include <stdbool.h>
#include "arrays_equal.h"

bool arrays_equal(int a[], int b[], int size) {
    for (int i = 0; i < size; i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}