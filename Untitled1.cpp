
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int main()
{
	srand((int)time(0));
	int i = 0;
	int arr[10];
	
	while (i < 10) {
		arr[i] = rand() % 100;
		i++;
	}
	
	for (int j = 0; j < 10; j++)
	{
		//Displaying Array
		cout << "\t\t\tValue at " << j << " Index: " << arr[j] << endl;
	}
	cout << endl;


	// Bubble Sort Starts Here
	int temp;
	for (int i2 = 0; i2 < 9; i2++)
	{
		for (int j = 0; j < 9; j++)
		{
			//Swapping element in if statement
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	// Displaying Sorted array
	cout << "  Sorted Array is: " << endl;
	for (int i3 = 0; i3 < 10; i3++)
	{
		cout << "\t\t\tValue at " << i3 << " Index: " << arr[i3] << endl;
	}







	return 0;
}
