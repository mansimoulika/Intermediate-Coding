#include <stdio.h>
int removeDuplicates(int arr[], int size) {
    if (size == 0 || size == 1) {
        return size;
    }
    int index = 1;
    for (int i = 1; i < size; i++) {
        if (arr[i] != arr[i - 1]) {
            arr[index++] = arr[i];
        }
    }
    return index;
}
int main() {
    int arr[] = {1, 1, 2, 2, 3, 4, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int newSize = removeDuplicates(arr, size);
    printf("Array after removing duplicates:\n");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
