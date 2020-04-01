#include<stdio.h>
#include<math.h>
float distance(int *x1, int *y1, int *x2, int *y2)
{
     float s;
     s=sqrt(pow(*x2-*x1,2)+pow(*y2-*y1,2));
    return s;
}
int main()
{
    int a,b,c,d;
    float s;
    printf("Enter x1\n");
    scanf("%d",&a);
    printf("Enter y1\n");
    scanf("%d",&b);
    printf("Enter x2\n");
    scanf("%d",&c);
    printf("Enter y2\n");
    scanf("%d",&d);
    s=distance(&a,&b,&c,&d);
    printf("Distance between 2 points is %0.2f",s);
    return 0;
}
