#include <iostream>
#include <string>
using namespace std;
 
template<class T>
void sort(T array[], int elements)				//declaring sort Funct.
{
	T temp;
	for (int j = 0; j < elements; j++)			//sorting
	{
		for (int i = 0; i < elements - 1; i++)
		{
			if (array[i] < array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
			}
		}
	}
}

template<class T>						
void print(T Arr[], int elements)		//declaring the fuction to call the "sort" Funct and print the sorted Array elements 
{
	sort(Arr, elements);
	for (int i = 0; i < elements; i++)	//printing out elements of an Array
	{
		cout << Arr[i] << "   ";
	}
	cout << endl<<endl<<endl;
}

int main()
{
	//declaring the first Array
	int arr[] = { 1,4,11,9,12,77,11 };
	int elm=1;	
	elm = sizeof(arr) / sizeof(int);
	print(arr, elm);						//Funct. "print" calls "sort" then print the sorted array
	
	//declaring the second Array
	float arr1[] = { 1.2,1.5,1.9,2.7,10,20.1,0.11,5.7 };
	elm = sizeof(arr1)/sizeof(float);
	print(arr1, elm);

	//declaring the last Array
	string arr2[] = { "straight","joiner","zombie","jomo","Jomo","Nkosie" };
	elm = sizeof(arr2) / sizeof(string);
	print(arr2, elm);
	return 0;
}