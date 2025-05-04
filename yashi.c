#include <stdio.h>
#include "yashi.h"
//defination for factorial function which returns factorial of a number.
long long factorial(int *n) { 
    int i; 
    long long fact = 1;
    for (i = *n; i >= 1; i--) {
        fact *= i;
    }
    return fact;
}
// function to check no.of digits in an no.
int dig_check(int n){
	int dig=0;
	while(n!=0){
		n=n/10;
		dig++;
	}return dig;
}
//decleration of dec function which take binary no.and convert it into decimal no. 
int dec(int *n) {  
    int c = 0, res = 0, rem = 0, l;
    while (*n > 0) {  
        l = power(2, c);
        rem = *n % 10;
        rem *= l;
        res += rem;
        *n = *n / 10;  
        c++;
    }
    return res;
}
//function to check a no. is binary or not
int isBinary(int n) {
    while (n > 0) {
        int digit = n % 10;
        if (digit != 0 && digit != 1) {
            return 0; 
        }
        n /= 10; 
    }
    return 1; 
}
//function to display all the elements of an array.
void display(int *arr, int size) {
	int i;
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n"); 
}
//function to find power of a number.
double power(double number, int exp) {
	int i;
    double res = 1;
    for (i = 0; i < exp; i++) {
        res *= number;
    }
    return res;
}
//function to reverse a string.
void reverse(char str[],int size){
	int i, j;
    char temp;
    for (i = 0, j = size- 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
	
}


