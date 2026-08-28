#include <stdio.h>
int main()
{
    int a[5],i,choice,index;
    float b[5];
    int *p=a;
    float *q=b;
    void *ptr = NULL;

    printf("enter 5 integer values:\n");
    for( i=0; i<5; i++){
        scanf("%d", p + i);
    }
    printf("enter 5 Float values:\n");
    for( i=0; i<5; i++){
        scanf("%f",q + i);
    }
    printf("Integer array:\n");
    for( i=0; i<5; i++){
        printf("%d\n",*(p + i));
    }
    printf("Float array:\n");
    for( i=0; i<5; i++){
        printf("%f\n",*(q+i));
    }

    printf("\n\n1.integer array:\n");
    printf("\n2.Float array:\n");

    printf("Enter choice:\n");
    scanf("%d", &choice);

    printf("enter index(0-4):\n");
    scanf("%d",&index);
    
    if(index < 0 || index >= 5){
        printf("Invalid Index!");
        return 0;
    }
    if(choice == 1){
        ptr = p + index;
        if(ptr != NULL)
            printf("value = %d:",*(int*)ptr);
        
    }
    else if(choice == 2){
        ptr = q + index;
        if(ptr != NULL)
            printf("value = %.2f:",*(float*)ptr);
    }
    else{
        printf("Invalid choice!");
    }
    return 0;
}