#include "yashi.h"
#include <stdio.h>
#include<string.h>

//program to check a no. is armstrong no. or not.
//int main(){
//	int n1,res=0,rem,org,dig;
//	scanf("%d",&n1);
//	org=n1;
//	dig=dig_check(n1);
//	while(n1!=0){
//		rem=n1%10;
//		res+=power(rem,dig);
//		n1=n1/10;	
//	}
//	if(res==org)
//	 printf("Armstrong no.");
//	else
//	 printf("Not Armstrong no.");
//}
	
//program to convert binary no. to decimal number.
//int main(){
//	int n2;
//	scanf("%d",&n2);
//if(isBinary(n2))
//	printf("%d",dec(&n2));
//else
//  printf("you entered non binary no.");
//	return 0;
//}
// program to print an elements of an array.
/*int main() {
    int n,i;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
    }
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    display(arr, n);
    free(arr);
    return 0;
}*/
//program to reverse a string,
int main() {
	int n,len;
	scanf("%d",&n);
    char str[n];
    printf("Enter a string: ");
    scanf("%s", str);
    len=strlen(str);
    reverse(str,len);
    printf("%s", str);

    return 0;
}
