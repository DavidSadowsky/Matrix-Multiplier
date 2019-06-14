// Matrix_Multiplier.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>

int main()
{
	bool running = true;

	while (running) {
		// initial menu, takes in the rows/columns of each matrix and validates that the matrices are multipliable

		std::cout << "1. Matrix multiplier\n2. Exit\n" << std::endl;
		int menuChoice;
		std::cin >> menuChoice;

		if (menuChoice > 2) {
			std::cout << "Please enter a valid option.\n" << std::endl;
			continue;
		}

		else if (menuChoice == 2) {
			return 0;
		}
		std::cout << "=============================================================" << std::endl;
		std::cout << "Please enter the number of rows/columns in your first matrix." << std::endl;
		int row1;
		int column1;
		std::cin >> row1 >> column1;
		std::cout << "Please enter the number of rows/columns in your second matrix." << std::endl;
		int row2;
		int column2;
		std::cin >> row2 >> column2;

		if (column1 != row2) {
			std::cout << "Error, the inputted matrices are not multipliable." << std::endl;
		}
		// fills arrays with matrix elements
		else {
			// create vectors of vectors to hold matrix data
			std::vector<int> matrix1Rows;
			std::vector<int> matrix2Rows;
			std::vector<std::vector<int>> matrix1;
			std::vector<std::vector<int>> matrix2;

			// assigns inputted data to 2D vector
			std::cout << "Enter values for matrix 1. The values will fill the matrix left to right." << std::endl;
				for(int x = 0; x < row1; x++) {
					for (int y = 0; y < column1; y++) {
						int val;
						std::cin >> val;
						matrix1Rows.push_back(val);
					}
					matrix1.push_back(matrix1Rows);
					matrix1Rows.clear();
				}

				std::cout << "Enter values for matrix 2. The values will fill the matrix left to right." << std::endl;
				for (int x = 0; x < row2; x++) {
					for (int y = 0; y < column2; y++) {
						int val;
						std::cin >> val;
						matrix2Rows.push_back(val);
					}
					matrix2.push_back(matrix2Rows);
					matrix2Rows.clear();
				}

				std::cout << "\n";

				
				// the resulting matrix will have the amount of rows from matrix 1 and the amount of columns from matrix 2
				int rowResult = row1;
				int columnResult = column2;

				// holds multiplied matrices data
				std::vector<int> resultMatrixData;
				std::vector<std::vector<int>> resultMatrix;

				// fills vector with resulting matrix data
				int sum = 0;
				for (int x = 0; x < row1; x++) {
					for (int y = 0; y < column2; y++) {
						for (int j = 0; j < column1; j++) {
							sum += matrix1[x][j] * matrix2[j][y];
						}
						resultMatrixData.push_back(sum);
						sum = 0;
					}
					resultMatrix.push_back(resultMatrixData);
					resultMatrixData.clear();
				}

				// transposes resultant matrix


				std::cout << "Result Matrix:" << std::endl;
				for (int x = 0; x < row1; x++) {
					for (int y = 0; y < column2; y++) {
						std::cout << resultMatrix[x][y] << " ";
					}
					std::cout << std::endl;
				}
				std::cout << std::endl;
		}

	}




}
