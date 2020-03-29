#include<stdio.h>
int main()
{
    int N,j,i;
    scanf("%d",&N);
    int arr[N],brr[N];
    for(i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
 for(i=N-1,j=0;i>=0;i--,j++)
 {
     brr[j]=arr[i];
 }
 for(i=0;i<N;i++)
 {
     arr[i]=brr[i];
     printf("%d ",arr[i]);
 }
 return 0;
}
