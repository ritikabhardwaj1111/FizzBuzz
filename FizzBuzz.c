#include<stdio.h>
#include<conio.h>
void main(){
    int i;
    for(i = 1 ; i<=100 ; i++){
        if(i % 15 == 0){
            printf("FizzBuzz\t");
        }
        else if(i % 5 == 0){
            printf("Buzz\t");
        }
        else if(i % 3 == 0){
            printf("Fizz\t");
        }
        else{
            printf("%d\t",i);
        }
    }
}
