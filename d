[1mdiff --git a/Matrix_Multiplier/Matrix_Multiplier.cpp b/Matrix_Multiplier/Matrix_Multiplier.cpp[m
[1mindex cf69cf7..732732b 100644[m
[1m--- a/Matrix_Multiplier/Matrix_Multiplier.cpp[m
[1m+++ b/Matrix_Multiplier/Matrix_Multiplier.cpp[m
[36m@@ -70,6 +70,7 @@[m [mint main()[m
 [m
 				std::cout << "\n";[m
 [m
[32m+[m[41m				[m
 				// the resulting matrix will have the amount of rows from matrix 1 and the amount of columns from matrix 2[m
 				int rowResult = row1;[m
 				int columnResult = column2;[m
[36m@@ -80,8 +81,8 @@[m [mint main()[m
 [m
 				// fills vector with resulting matrix data[m
 				int sum = 0;[m
[31m-				for (int x = 0; x < columnResult; x++) {[m
[31m-					for (int y = 0; y < rowResult; y++) {[m
[32m+[m				[32mfor (int x = 0; x < row1; x++) {[m
[32m+[m					[32mfor (int y = 0; y < column2; y++) {[m
 						for (int j = 0; j < column1; j++) {[m
 							sum += matrix1[x][j] * matrix2[j][y];[m
 						}[m
[36m@@ -94,9 +95,10 @@[m [mint main()[m
 [m
 				// transposes resultant matrix[m
 [m
[32m+[m
 				std::cout << "Result Matrix:" << std::endl;[m
[31m-				for (int x = 0; x < columnResult; x++) {[m
[31m-					for (int y = 0; y < columnResult; y++) {[m
[32m+[m				[32mfor (int x = 0; x < row1; x++) {[m
[32m+[m					[32mfor (int y = 0; y < column2; y++) {[m
 						std::cout << resultMatrix[x][y] << " ";[m
 					}[m
 					std::cout << std::endl;[m
