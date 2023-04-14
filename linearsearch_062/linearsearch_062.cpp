#include <iostream>
using namespace std;

int arr[20]; //array to be searched
int n; //number of elements in the array
int i; //index of array element

void input() {
	while (true) {
		cout << "enter the number of elements in the array : ";
		cin >> n;
		if ((n > 0) && (n <= 20))
			break;
		else
			cout << "\narray should have minimum 1 and maximum 20 elements.\n\n";
	}

	//accept array elements
	cout << "\n----------------------\n";
	cout << " enter array elements \n";
	cout << "------------------------";
	for (i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> arr[i];
	}
}


void linearsearch() {
	char ch;
	int comparisons; //number of comparisons
