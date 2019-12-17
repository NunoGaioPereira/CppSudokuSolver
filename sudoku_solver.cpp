#include <iostream>

// Function to print the Sudoku grid
void printGrid(int (*grid)[9][9]) {
	for(int row = 0; row < 9; row++) {
		for(int col = 0; col < 9; col++) {
			std::cout << (*grid)[row][col] << " ";
		}
		std::cout << std::endl;
	}
}

void printGrid(int (&grid)[9][9]) {
	for(int row = 0; row < 9; row++) {
		for(int col = 0; col < 9; col++) {
			std::cout << grid[row][col] << " ";
		}
		std::cout << std::endl;
	}
}

void pot(int *a) {
	a[0] = 5;
}


bool solveSudoku(int grid[N][N]) {
	int row, col;

	if(!)

	for(int i = 1; i <=9; i++) {

	}
}

int main() {

	int grid[9][9] = {{3, 0, 6, 5, 0, 8, 4, 0, 0},
                      {5, 2, 0, 0, 0, 0, 0, 0, 0},
                      {0, 8, 7, 0, 0, 0, 0, 3, 1},
                      {0, 0, 3, 0, 1, 0, 0, 8, 0},
                      {9, 0, 0, 8, 6, 3, 0, 0, 5},
                      {0, 5, 0, 0, 9, 0, 6, 0, 0},
                      {1, 3, 0, 0, 0, 0, 2, 5, 0},
                      {0, 0, 0, 0, 0, 0, 0, 7, 4},
                      {0, 0, 5, 2, 0, 6, 3, 0, 0}};

    printGrid(&grid);
	printGrid(grid);

	return 0;
}