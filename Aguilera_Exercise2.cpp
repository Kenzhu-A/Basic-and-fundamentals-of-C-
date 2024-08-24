#include <iostream>

using namespace std;

int main ()
{
	
	int arr1[10], arr2[10], arr3[20];
	int n, k, i, temp;

cout<<"Array 1: \n";
 cout<<"Enter 10 elements for Array 1:\n";
for (i = 0; i < 10; i++)
{
	cin >> arr1[i];
	arr3[i] = arr1[i];
}
	k=i;

 cout<<"\nArray 2: \n";
 cout<<"Enter 10 elements for Array 2:\n";
for (i = 0; i < 10; i++)
{
	cin >> arr2[i];
	arr3[k] = arr2[i];
	k++;
}
	n=k;

for (int j=0; j<n-1; j++){
 for (i = 0; i<n-1; i++){
 	if (arr3[i]<arr3[i+1])
 	{
 		temp = arr3[i];
 		arr3[i]=arr3[i+1];
 		arr3[i+1]=temp;
 		
	 }
 }
}

cout<<"\nArrays Sorted based on Descending order: ";
for (i=0; i<k; i++)
cout<<arr3[i]<<" ";
cout<< endl;
return 0;
}


