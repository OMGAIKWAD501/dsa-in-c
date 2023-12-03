
#include <stdio.h>

int main () {
    int num,i,sum=0,rem;
    printf("enter a number :");
    scanf("%d",&num);
    for(i=1;i<num;i++){
    rem=num%i;
    if(rem==0){
        sum=sum+i;
    }
    }
    if(sum==num)
        printf("%d is the perfect number",num);
    

    else
        printf("%d is not perfect number",num);

    
return 0;
}
