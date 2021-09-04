#include <stdio.h>

int main()
{
    unsigned int a,b,c,d, max;
    printf("\nMoi nhap vao gia tri a:");
        scanf("%d",&a);
    printf("\nMoi nhap vao gia tri b:");
        scanf("%d",&b);
    printf("\nMoi nhap vao gia tri c:");
        scanf("%d",&c);
    printf("\nMoi nhap vao gia tri d:");
        scanf("%d",&d);
    if(a>b && a>c && a>d)
    {
        max=a;
    }
    else if(b>a && b>c && b>d)
    {
        max=b;
    }
    else if(c>a && c>b && c>d)
    {
        max=c;
    }
    else
    {
        max=d;
    }
    printf("\nGia tri lon nhat vua nhap la: %d", max);
    return 0;
}