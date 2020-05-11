#include<stdio.h>
void swap(int *a,int *b);
int main()
{
    int a,b;
    printf("Enter the value of a\n");
    scanf("%d",&a);
    printf("Enter the value of b\n");
    scanf("%d",&b);
    printf("Before swapping\n");
    printf("a = %d b = %d\n",a,b);
    swap(&a,&b);
    printf("After swapping\n");
    printf("a = %d b = %d\n",a,b);
    return 0;
}
    void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
