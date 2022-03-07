#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void createArr(int arr[],int size,int a,int b)
{
    srand(time(NULL));
    for (int i=0;i<size;i++)
    {
        arr[i]=rand()%(b-a+1)+a;
    }
}

void printArr(int arr[],int size)
{
    for(int i=0;i<size;i++)
    printf("%d ",arr[i]);
}

void insSort(int arr[],int size)
{
    int key,i,j;
    for(j=1;j<size;j++)
        {
            key=arr[j];
            i=j-1;
            while(i>=0 && arr[i]>key)
            {
                arr[i+1]=arr[i];
                i=i-1;
            }
            arr[i+1]=key;
        }

}

int main()
{


    int size=10;
    int arr[size];
    createArr(arr,size,1,1000);

    clock_t begin=clock();
    insSort(arr,size);
    clock_t end=clock();
    double time_spent=(double)(end-begin)/CLOCKS_PER_SEC*1000;
    
    printArr(arr,size);
    printf("\n\nTime spent: %.0fms",time_spent);

}
