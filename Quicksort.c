#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int generate_ab (int a, int b){
    return rand ()% (b-a+1)+a;
    }

int quick_sort (int array [], int p, int q){
    int x = array [p];
    int i = p;
    int temp = 0;
    for (int j = p + 1; j <= q; j++){
        if (array [j] <= x){
            i++;
            temp = array [i];
            array [i] = array [j];
            array [j] = temp;
        }
    temp = array [p];
    array [p] = array [j];
    array [j] = temp;
    }
    return i;
}
int main() {
    // n = 10
    clock_t begin1 = clock();
    int n1 = 10;
    int p1 = 0;
    int q1 = n1 - 1;
    int array1 [n1];
    for (int i = 0; i < n1; i++){
        array1 [i] = generate_ab  (0,1000);
        printf ("%d  ", array1 [i]);
    }
    printf ("\n");
    int i1 = quick_sort (array1, p1, q1);
    printf ("i = %d\n", i1);
    clock_t end1 = clock();
    double time_spent1 = (double)(end1 - begin1) / CLOCKS_PER_SEC;
    printf ("Execution time: %f\n\n", time_spent1);
    
    // n = 50
    clock_t begin2 = clock();
    int n2 = 50;
    int p2 = 0;
    int q2 = n2 - 1;
    int array2 [n2];
    for (int i = 0; i < n2; i++){
        array2 [i] = generate_ab  (0,1000);
        printf ("%d  ", array2 [i]);
    }
    printf ("\n");
    int i2 = quick_sort (array2, p2, q2);
    printf ("i = %d\n", i2);
    clock_t end2 = clock();
    double time_spent2 = (double)(end2 - begin2) / CLOCKS_PER_SEC;
    printf ("Execution time: %f\n\n", time_spent2);
    
    // n = 100
    clock_t begin3 = clock();
    int n3 = 100;
    int p3 = 0;
    int q3 = n3 - 1;
    int array3 [n3];
    for (int i = 0; i < n3; i++){
        array3 [i] = generate_ab  (0,1000);
        printf ("%d  ", array3 [i]);
    }
    printf ("\n");
    int i3 = quick_sort (array3, p3, q3);
    printf ("i = %d\n", i3);
    clock_t end3 = clock();
    double time_spent3 = (double)(end3 - begin3) / CLOCKS_PER_SEC;
    printf ("Execution time: %f\n\n", time_spent3);
    
    // n = 200
    clock_t begin4 = clock();
    int n4 = 200;
    int p4 = 0;
    int q4 = n4 - 1;
    int array4 [n4];
    for (int i = 0; i < n4; i++){
        array4 [i] = generate_ab  (0,1000);
        printf ("%d  ", array4 [i]);
    }
    printf ("\n");
    int i4 = quick_sort (array4, p4, q4);
    printf ("i = %d\n", i4);
    clock_t end4 = clock();
    double time_spent4 = (double)(end4 - begin4) / CLOCKS_PER_SEC;
    printf ("Execution time: %f\n\n", time_spent4);
    
    // n = 500
    clock_t begin5 = clock();
    int n5 = 500;
    int p5 = 0;
    int q5 = n5 - 1;
    int array5 [n5];
    for (int i = 0; i < n5; i++){
        array5 [i] = generate_ab  (0,1000);
        printf ("%d  ", array5 [i]);
    }
    printf ("\n");
    int i5 = quick_sort (array5, p5, q5);
    printf ("i = %d\n", i5);
    clock_t end5 = clock();
    double time_spent5 = (double)(end5 - begin5) / CLOCKS_PER_SEC;
    printf ("Execution time: %f\n\n", time_spent5);
    
    // n = 1000
    clock_t begin6 = clock();
    int n6 = 1000;
    int p6 = 0;
    int q6 = n6 - 1;
    int array6 [n6];
    for (int i = 0; i < n6; i++){
        array6 [i] = generate_ab  (0,1000);
        printf ("%d  ", array6 [i]);
    }
    printf ("\n");
    int i6 = quick_sort (array6, p6, q6);
    printf ("i = %d\n", i6);
    clock_t end6 = clock();
    double time_spent6 = (double)(end6 - begin6) / CLOCKS_PER_SEC;
    printf ("Execution time: %f\n\n", time_spent6);
    return 0;
}
