#include<stdio.h>
int main(){
int *p=NULL;
if(p!=NULL)
{
    printf("%d",*p);
}
else{
    printf("pointer is null");
    
}
return 0;
}