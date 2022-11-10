#include<stdio.h>
void reversedarray(int *array, int *arr, int size);

int main()
{
	

    
	
	printf("Enter the number of elements: ");
	int n;
	scanf("%d", &n);
	int array[n];
	int arr2[n];
	for(int i=0; i<n; i++)
	{
		printf("Enter element %d: ", i+1);
		scanf("%d", &array[i]);
	}
	reversedarray(array, arr2, n);
	for(int i=0; i<n; i++)
	{
		printf("%d", arr2[i]);
	}
	
}


void reversedarray(int *array, int *arr2, int size)
{
	int i=0;
	array=&array[size-1];
	while(i<size)
	{
		*arr2=*array;
		array--;
		arr2++;
		i++;
	}
	
}
