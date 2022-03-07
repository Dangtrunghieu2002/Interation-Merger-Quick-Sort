#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generate_ab (int a, int b){
    return rand ()% (b-a+1)+a;
    }

// Merges two subarrays of arr[].
// First subarray is arr[l..m]
// Second subarray is arr[m+1..r]
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    /* create temp arrays */
    int L[n1], R[n2];

    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    /* Copy the remaining elements of L[], if there are any */
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there are any */
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

/* l: left index and r: right index of the sub-array of arr to be sorted */
void mergeSort(int arr[], int l, int r)
{
    if (l < r) {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l + (r - l) / 2;

        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}

void printArray(int A[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}

int main() {

    // array size = 10
    clock_t begin1 = clock();
    int arr_size1 = 10;
    int arr [arr_size1];
    for (int i = 0; i < arr_size1; i++){
        arr [i] = generate_ab  (0,1000);
    }

    printf("Given array 1 is \n");
    printArray(arr, arr_size1);

    mergeSort(arr, 0, arr_size1 - 1);

    printf("\nSorted array 1 is \n");
    printArray(arr, arr_size1);

    clock_t end1 = clock();
    double time_spent1 = (double)(end1 - begin1) / CLOCKS_PER_SEC;
    printf ("\nExecution time: %f\n\n", time_spent1);

    // array size = 50
    clock_t begin2 = clock();
    int arr_size2 = 50;
    int arr2 [arr_size2];
    for (int i = 0; i < arr_size2; i++){
        arr2 [i] = generate_ab  (0,1000);
    }

    printf("Given array 2 is \n");
    printArray(arr2, arr_size2);

    mergeSort(arr2, 0, arr_size2 - 1);

    printf("\nSorted array 2 is \n");
    printArray(arr2, arr_size2);

    clock_t end2 = clock();
    double time_spent2 = (double)(end2 - begin2) / CLOCKS_PER_SEC;
    printf ("\nExecution time: %f\n\n", time_spent2);

    // array size = 100
    clock_t begin3 = clock();
    int arr_size3 = 100;
    int arr3 [arr_size3];
    for (int i = 0; i < arr_size3; i++){
        arr3 [i] = generate_ab  (0,1000);
    }

    printf("Given array 3 is \n");
    printArray(arr3, arr_size3);

    mergeSort(arr3, 0, arr_size3 - 1);

    printf("\nSorted array 3 is \n");
    printArray(arr3, arr_size3);

    clock_t end3 = clock();
    double time_spent3 = (double)(end3 - begin3) / CLOCKS_PER_SEC;
    printf ("\nExecution time: %f\n\n", time_spent3);

    // array size = 200
    clock_t begin4 = clock();
    int arr_size4 = 200;
    int arr4 [arr_size4];
    for (int i = 0; i < arr_size4; i++){
        arr4 [i] = generate_ab  (0,1000);
    }

    printf("Given array 4 is \n");
    printArray(arr4, arr_size4);

    mergeSort(arr4, 0, arr_size4 - 1);

    printf("\nSorted array 4 is \n");
    printArray(arr4, arr_size4);

    clock_t end4 = clock();
    double time_spent4 = (double)(end4 - begin4) / CLOCKS_PER_SEC;
    printf ("\nExecution time: %f\n\n", time_spent4);

    // array size = 500
    clock_t begin5 = clock();
    int arr_size5 = 500;
    int arr5 [arr_size5];
    for (int i = 0; i < arr_size5; i++){
        arr5 [i] = generate_ab  (0,1000);
    }

    printf("Given array 5 is \n");
    printArray(arr5, arr_size5);

    mergeSort(arr5, 0, arr_size5 - 1);

    printf("\nSorted array 5 is \n");
    printArray(arr5, arr_size5);

    clock_t end5 = clock();
    double time_spent5 = (double)(end5 - begin5) / CLOCKS_PER_SEC;
    printf ("\nExecution time: %f\n\n", time_spent5);

    // array size = 1000
    clock_t begin6 = clock();
    int arr_size6 = 1000;
    int arr6 [arr_size6];
    for (int i = 0; i < arr_size6; i++){
        arr6 [i] = generate_ab  (0,1000);
    }

    printf("Given array 6 is \n");
    printArray(arr6, arr_size6);

    mergeSort(arr6, 0, arr_size6 - 1);

    printf("\nSorted array 6 is \n");
    printArray(arr6, arr_size6);

    clock_t end6 = clock();
    double time_spent6 = (double)(end6 - begin6) / CLOCKS_PER_SEC;
    printf ("\nExecution time: %f\n\n", time_spent6);

    return 0;
}
