#include<stdio.h>
int BinarySearch(int arr[], int n,int search)
{
    int l=0, r=n-1,mid;
    while(l<r)
    {
        mid=l+(r-1)/2;
        if(arr[mid]==search)
        {
            return mid;

        }
        else if(arr[mid]<search)
        {
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
    }
    return -1;

}

void BubbleSort(int arr[],int n)
{
    int i,j,temp;
    for (i=0; i<n-1; i++)
    {
        int  flag=1; //for better
        for( j=0; j<n-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }

        }
        if(flag==0)
        {
            break;
        }


    }
    printf("\nAfter sort:\n");

    for( i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
}


int main()
{
    int arr[100],n,i,search,result ;
    printf("Enter the array size: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("Enter the element: ");
        scanf("%d",&arr[i]);
    }
    BubbleSort(arr,n);
    printf("\nEnter the element for search: ");
    scanf("%d",&search);

    result= BinarySearch(arr, n, search);


    if (result != -1)
    {
        printf("Element found at index %d\n", result);
    }
    else
    {
        printf("Element not found\n");
    }

}




