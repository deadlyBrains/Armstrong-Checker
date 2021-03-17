#include <stdio.h>
#include <stdlib.h>

int main () {

    int num;
    int rem;
    int sum = 0;
    int temp;

    printf("Please enter your number: ");
    scanf("%d", &num);

    temp = num;

    while ( num > 0) {

        rem = num % 10;
        sum = sum + rem * rem * rem; 
        num = num/10; 
    }

    if (temp == sum) {
        printf("The number that has been entered is an armstrong number.");
    }
    else {
        printf("The number cannot be said to be an armstrong number.");
    }
    
    return 0;

}