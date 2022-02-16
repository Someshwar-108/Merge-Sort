#include<stdio.h>

void mergesort(); //for dividing elements until single element is found
void merge();   //merge and sort the elements

int main(){
    int a[50],n,i;
    printf("Enter size of array:");
    scanf("%d",&n);
    printf("Enter Elements:");
    for(i=0;i<n;i++)
      scanf("%d",&a[i]);
      mergesort(a,0,n-1);
      printf("Sorted Elements are:");
      for(i=0;i<n;i++)
        printf("%d",a[i]);
}
void mergesort(int a[],int First,int Last)
{
    int mid;
    if(First<Last)
    {
        mid=(First+Last)/2;
        mergesort(a,First,Last);
        mergesort(a,mid+1,Last);
        merge(a,First,mid,Last);
    }
}
void merge(int a[],int First,int mid,int Last)
{
    int b[50];
    int i,j,k;
    i=First;
    j=mid+1;
    k=First;
    
    while(i<=mid&&j<=Last)
    {
        if(a[i]<=a[j])
        b[k++]=a[i++];
        else
        b[k++]=a[j++];
    }
    if(i>mid)
    {
        while(j<=Last)
        b[k++]=a[j++];
}
else
    {
     while(j>=Last)
     b[j++]=a[k++];
}
  
{  
    while(j<=Last)
        b[k++]=a[j++];
    
   for(i=First;i<=Last;i++)
   a[i]=b[i];
}
}
