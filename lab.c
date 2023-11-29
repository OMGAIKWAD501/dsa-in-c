#include<stdio.h>

void main (){
    int n,n1,reversed = 0,reminder;
    printf("Enter a number : \n");
    scanf("%d",&n);
     n1=n;
    while(n > 0){
        reminder = n %10;
        reversed = reversed * 10 + reminder;
        n = n /10;
    }
    
    if(n1==reversed){
        printf("is a palindrome number \n");
    }
    else{
        printf("is not a plindrome number \n");
    }
    
}
