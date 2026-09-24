#include "dw.h"

int find_minimum(const int values[], int size) {
    int smallest = values[0];
    int i = 1;
    while (i < size) {
        if (values[i] < smallest) {
            smallest = values[i];
        }
        i++;
    }
    return smallest;
}
