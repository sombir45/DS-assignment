#include <stdio.h>
#include<stdlib.h>
void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
void Insertion(int A[],int n)
{
    int i,j,x;
    for(i=1;i<n;i++)
    {
        j=i-1;
        x=A[i];
        while(j>-1 && A[j]>x)
        {
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=x;
    }
}
int main()
{
    int A[]={81,51,17,32,6,19,4,12,1,30},n=10,i;
    Insertion(A,n);
    for(i=0;i<10;i++)
    printf("%d ",A[i]);
    printf("\n");
    return 0;
}
