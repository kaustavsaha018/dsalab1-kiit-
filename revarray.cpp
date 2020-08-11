#include <stdio.h>
void arrayrev(int *arr,int n);
int main (){
	int n;
	printf("Enter the size of the Array: ");
	scanf("%d", &n);
	int arr[n];
	printf("Enter the array elements:\n");
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("the reversed array is:");
	arrayrev(&arr[0],n);
	
	return 0;
}

void arrayrev(int *arr,int n){
	int i,j,temp;
	for(i=n-1;i>=0;i--){
		printf(" %d ", *(arr+i));
	}
		
}
