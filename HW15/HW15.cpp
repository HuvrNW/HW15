#include <iostream>
#include <ctime>
#include <cstdlib>
#include <algorithm>





int main() {
	setlocale(LC_ALL, "Russian");
	// Matrix 10x10 0 < x < 100 
	const int  x = 10, y = 10;
	int arr[y][x], a = 1, b = 99;
	srand(time(NULL));

	std::cout << " Matrix 10x10 0 < x < 100: \n";
	for (int i = 0; i < y; i++) { 
		for (int j = 0; j < x; j++) { // row
			arr[i][j] = rand() % (b + 1 - a) + a;
			std::cout << arr[i][j] << " ";
		}
		std::cout << "\n";
	}
	// Task 1. Sum of each row
	std::cout << "\n\t\t Task 1.\n Sum of each row.\n";
	int sum = 0;
	for (int i = 0; i < y; i++) {
		for (int j = 0; j < x; j++)
			sum += arr[i][j];
		std::cout << i + 1 << " row\'s sum = " << sum << "\n";
	}
	
	// Task 2. Row sorting.
	int n;
	std::cout << "\n\t\t Task 2.\n Row sorting.\n Enter the number from 0 to 9 --> ";
	std::cin >> n;
	while (n > 9 || n < 0) {
			std::cout << " A number is out of range.\n Try again --> ";
			std::cin >> n;
		}
	std::cout << " Unsorted row:\n";
	for (int i = n;;) {
		for (int j = 0; j < x; j++)
			std::cout << arr[i][j] << " ";
		break;
	}

		// Bubble sort
		for(int i = n;;) {
			for (int z = x - 1; z > 0; z--)
				for (int j = 0; j < z; j++)
					if (arr[i][j] > arr[i][j + 1])
						std::swap(arr[i][j], arr[i][j + 1]);
			break;
		}
		
		std::cout << "\n Sorted row: \n";
		for (int i = n;;) {
			for (int j = 0; j < x; j++)
				std::cout << arr[i][j] << " ";
			break;
		}

	

	return 0;
}