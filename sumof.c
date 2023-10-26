#include <stdio.h>
int main()
{
    int arr[10]={2,3,4,6,5,11,1,23,12,9};
    for(int i=0;i<10;i++)
    {
        printf("%d\t",arr[i]);
    }
    int sum=0;
    for(int j=0;j<10;j++)
    {
        sum += arr[j];
    }
    printf("\nSum of all the element of array is:%d",sum);
}
