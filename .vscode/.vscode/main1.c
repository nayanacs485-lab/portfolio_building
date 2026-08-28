#include<stdio.h>

//function
void readArray(int*, int);
void printfArray(int*, int);
void reverseArray(int*, int);
int *findMax(int*, int);
void swapElements(int*, int, int);

int main()
{
    int arr[10], a, b, *max;
    printf("Enter 10 elements:\n");
    readArray(arr, 10);

    printf("\nArray:\n");
    printfArray(arr, 10);

    reverseArray(arr, 10);

    printf("\nReversed Array:\n");
    printfArray(arr, 10);

    max = findMax(arr, 10);
    printf("\nMaximum elements = %d\n",*max);
    printf("\nAddress = %p\n",(void*)max);

    printf("Enter two positon to swap two elements:\n");
    scanf("%d %d",&a , &b);

    if(a>=0 && a<10 && b>=0 && b<10){
        swapElements(arr, a, b);
        printf("\nAfter swapping:\n");
        printfArray(arr, 10);
    }
    else{
        printf("Invalid Position:");
    }
    return 0;
}
void readArray(int *arr, int size){
    for(int i=0; i<size; i++){
        scanf("%d",arr + i);
    }
}

void printfArray(int *arr, int size){
    for(int i=0; i<size; i++){
        printf("value = %d, address = %p\n", *(arr + i), (void*)(arr + i));
    }
}

void reverseArray(int *arr, int size){
    int *start = arr;
    int *end = arr + size - 1;
    int temp;

    while(start < end){
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int *findMax(int *arr, int size){
    int *max = arr;
    for(int *p = arr + 1; p < arr + size; p++){
        if(*p > *max)
            max = p;
    }
    return max;
}

void swapElements(int *arr, int a, int b){
    int temp = *(arr + a);
    *(arr + a) = *(arr + b);
    *(arr + b) = temp;
}