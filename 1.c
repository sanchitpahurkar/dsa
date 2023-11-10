// program to print and reverse an array.
#include<stdio.h>
int main() {
	int a[10];
	int n, i;
	printf("Enter size of array : ");
	scanf("%d", &n);
	printf("Enter the elements : \n");
	for(i=0 ; i<n ; i++) {
		scanf("%d", &a[i]);
		//printf("\n");
	}
	
	// displaying the array
	printf("Entered array : ");
	for(i=0 ; i<n ; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
	
	// reverse array
	int start=0, end=n-1, temp;
	while(start<end) {
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}
	printf("Reversed array : ");
	for(i=0 ; i<n ; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}