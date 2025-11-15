//palindrome of a string using recursion
#include<stdio.h>
#include<string.h>

int ispalin(char str[100], int left , int right){

    while(left<right){
        if(*(str+left) != *(str+right) ){
            return 0;
        }
        else{
            return ispalin(str,left+1,right-1);
        }
    }
    return 1;
}

int main(){
    char str[100];

    printf("Enter the String to be checked : ");
    scanf("%[^\n]s",str);

    

    if(ispalin(str,0,strlen(str)-1)){
        printf("The given string is a palindrome .");
    }
    else printf("It is not a palindrome");
}

