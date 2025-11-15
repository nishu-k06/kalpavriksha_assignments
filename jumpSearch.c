//jumpSearch using pointers 
#include<stdio.h>
#include<math.h>

int jumpSearch(int *ptr, int n,int key){
    int prev = 0;
    int step=sqrt(n);

    if (key > *(ptr+(n-1))) return -1;

    while(*(ptr+step) < key){
        prev = step;
        step += sqrt(n);
        if (step > n-1) step = n;
    }

    for(int i=prev ; i < n && i <= step ; i++){

        if (*(ptr+i) == key){

            return i;
        }
        
    }

    return -1;

}

int main(){
    int n , i , key;

    printf("Enter no. of elements : ");
    scanf("%d",&n);

    int arr[n];

    int *ptr = arr;

    printf("Enetr the array elements (in sorted order) : "); 
    for(i=0;i<n;i++){

        scanf("%d",&*(ptr+i));

    }
    printf("the element to be searched : ");
    scanf("%d",&key);
    
    int index = jumpSearch(ptr,n,key);

    if (index != -1){
            printf("the element %d is found at position %d",key,index);
    }
    else printf("element not found !");

}