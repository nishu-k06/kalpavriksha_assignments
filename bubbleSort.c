//Bubble sort
#include<stdio.h>

int bubbleSort(int arr[],int n){
    int temp;
    for(int i=0;i<n;i++){
        
        for(int j=0;j<n-1;j++){
            if(*(arr+j) > *(arr+j+1)){
                temp = *arr+j;
                *(arr+j)=*(arr+j+1);
                *(arr+j+1)=temp;
            }
        }
    }
}

int main(){
    int n,i;
    
    printf("enter the size of the array: ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter the array elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&*(arr+i));
    }
     bubbleSort(arr,n);
     
     printf("The sorted array is : ");

     for(i=0;i<n;i++){
        printf("%d ",*arr+i);
     }

}