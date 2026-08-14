#include<stdio.h>
int main(){
    int a=10;
    float b=10.3f;
    void *p;
    p=&a;
    printf("the int value:%d\n",*(int*)p);
    p=&b;
    printf("the float value:%f\n",*(float*)p);
    return 0;
}