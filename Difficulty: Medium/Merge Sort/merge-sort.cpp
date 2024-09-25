//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


// } Driver Code Ends
class Solution
{
    public:
    void merge(int arr[], int l, int mid, int r)
    {
        int left=l;
        int right=mid+1;
        int size=r-l+1;
        int *temp=new int [size];
        int i=0;
        
        // Your code here
         while(left<=mid&&right<=r)
         {
             if(arr[left]<=arr[right])
             {
                 temp[i]=arr[left];
                 i++;
                 left++;
             }
             else
             {
                 temp[i]=arr[right];
                 i++;
                 right++;
             }
         }
         
         while(left<=mid)
         {
             temp[i]=arr[left];
             left++;
             i++;
         }
         
         while(right<=r)
         {
             temp[i]=arr[right];
             right++;
             i++;
         }
         
         for(int j=0;j<size;j++)
         {
             arr[l+j]=temp[j];
         }
         
         delete[] temp;
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        //code here
        if(l<r){
        int mid=(l+r)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        merge(arr,l,mid,r);
        }
    }
};

//{ Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends
