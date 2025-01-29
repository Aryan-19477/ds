#include <stdio.h>

int main() {
    int n, index, i, j, element, temp;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\nThe elements in the array are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nEnter the index of the element to delete (0 to %d): ", n - 1);
    scanf("%d", &index);
    if (index < 0 || index >= n) {
        printf("Invalid index! No element deleted.\n");
    } else {
        for (i = index; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;
        printf("\nThe array after deletion is:\n");
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
    }
    printf("\nEnter the index to insert an element (0 to %d): ", n);
    scanf("%d", &index);
    
    if (index < 0 || index > n) {
        printf("Invalid index! No element inserted.\n");
    } else {
        printf("Enter the element to insert: ");
        scanf("%d", &element);
        for (i = n; i > index; i--) {
            arr[i] = arr[i - 1];
        }
        arr[index] = element;
        n++;
        printf("\nThe array after insertion is:\n");
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
    }
    printf("\nPerforming a left shift on the array...\n");
    for (i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = 0;
    printf("\nThe array after left shift is:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nPerforming a right shift on the array...\n");
    for (i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = 0;

    printf("\nThe array after right shift is:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nSorting the array in increasing order...\n");
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("\nThe array after sorting in increasing order is:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
 printf("\nSorting the elements at odd indices...\n");
    for (i = 1; i < n; i += 2) { 
        for (j = i + 2; j < n; j += 2) {  
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("\nThe array after sorting the elements at odd indices is:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
printf("\nSorting the elements at even indices...\n");

    
    for (i = 0; i < n; i += 2) {  
        for (j = i + 2; j < n; j += 2) {  
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("\nThe array after sorting the elements at even indices is:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}



