//binary search using pointers
#include <stdio.h>

int binarySearch(int *ptr,int n,int key);

int main(){
    int n,i,key;
    
    printf("Enter the no. of elements: ");
    scanf("%d",&n);

    int arr[n];
    int *ptr = arr;
    printf("Enter the array elements (in sorted order):\n");

    for(i=0 ; i<n ; i++){
        scanf("%d",&*(ptr+i));        
    }

    printf("enter the element to be searched : ");
    scanf("%d",&key);

    int index = binarySearch(ptr,n,key);

    if (index != -1){
        printf("The element %d is found at index %d\n",key,index);
        printf("memory address of key %p",arr+index);
    }
    else {
        printf("The element is not found.");
    }
}

int binarySearch(int *ptr,int n,int key){

    int low , high ,mid;
    low = 0;
    high = n-1;
    
    while(low <= high){
        mid = (low+high)/2;
        
        if(*(ptr+mid) == key){
            return mid;
        }

        else if (*(ptr+mid)<key){
            low = mid+1;
        }

        else high = mid - 1; 
        
    }
    return -1;
}