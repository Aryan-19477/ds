#include <stdio.h>

void findFrequency(int arr[], int size) {
    int frequency[100] = {0};  
    for (int i = 0; i < size; i++) {
        frequency[arr[i]]++;
    }

    printf("Number\tFrequency\n");
    for (int i = 0; i < size; i++) {
        if (frequency[arr[i]] > 0) {
            printf("%d\t%d\n", arr[i], frequency[arr[i]]);
            frequency[arr[i]] = 0;  
        }
    }
}

int main() {
    int arr[] = {1, 2, 1, 2, 2, 3, 3, 4, 5, 6, 6};  
    int size = sizeof(arr) / sizeof(arr[0]);

    findFrequency(arr, size);

    return 0;
}
