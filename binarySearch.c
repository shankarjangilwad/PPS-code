#include <stdio.h>

int binarySearch(int arr[], int n, int key) {
    int l = 0, r = n - 1;
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (arr[m] == key) return m;
        if (arr[m] < key) l = m + 1;
        else r = m - 1;
    }
    return -1;
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;
    printf("Array: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\nEnter key to search: ");
    scanf("%d", &key);
    int res = binarySearch(arr, n, key);
    if (res == -1) printf("Not found\n");
    else printf("Found at index %d\n", res);
    return 0;
}