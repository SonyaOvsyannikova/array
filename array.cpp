
#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "ru");
	const int m = 5;
	int* arr = new int[m];
	cout << "заполните массив" << endl;
	for (int i = 0; i < m; i++) {
		cout << " Элемент № "<< i+1 << endl;
		cin >> arr[i];
		
	}

	for (int i = 0; i < m; i++)
	{
		cout << arr[i] << " ";
	}


	cout << endl;
	int sum = arr[0];
	cout << "[";
	for (int i = 0; i < m; i++)
	{ 
		cout << "  " << sum;
		sum += arr[i];
        
	}
	cout << "]";
}

