#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int arr[n];
    float neg,pos,nor;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>0)
        pos++;
        else if(arr[i]<0)
        neg++;
        else if(arr[i]==0)
        nor++;
    }
   neg=neg/n;
   pos=pos/n;
   nor=nor/n;
   printf("%.6f\n %.6f\n %.6f",pos,neg,nor);
   return 0;
}
