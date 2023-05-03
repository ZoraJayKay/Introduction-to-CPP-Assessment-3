
#include <iostream>




int main(int argc, char** argv)
{
	const int ROWS = 3;
	const int COLS = 5;

	const char* grid2D[ROWS][COLS] =
	{
		{ "a0", "a1", "a2", "a3", "a4" },
		{ "b0", "b1", "b2", "b3", "b4" },
		{ "c0", "c1", "c2", "c3", "c4" },
	};


	// Task 1:
	// Print all values in the grid using nested loops to iterate over rows and columns.
	// Expected output:
	//		a0, a1, a2, a3, a4, 
	//		b0, b1, b2, b3, b4,
	//		c0, c1, c2, c3, c4,
	// ------------------------------------------------------------------------

	for (int r = 0; r < ROWS; r++)			// column loop (3 times)
	{
		for (int c = 0; c < COLS; c++)		// row loop (5 times)
		{
			std::cout << grid2D[r][c] << ", ";
		}
		std::cout << "\n";
	}
	std::cout << "\n\n";				// just to make it visually clear between task 1 and 2


	// ------------------------------------------------------------------------







	// Task 2:
	// Print all values in the grid using a single loop
	// Expected output:
	//		a0, a1, a2, a3, a4, b0, b1, b2, b3, b4, c0, c1, c2, c3, c4,
	// ------------------------------------------------------------------------

	for (int index = 0; index < ROWS * COLS; index++)
	{
		// TODO: convert "index" to a "rowIndex" and "colIndex" value
		int rowIndex = 0;
		int colIndex = 0;


		if (index == COLS * ROWS) 
		{
			rowIndex = ROWS;
			colIndex = COLS;
		}

		if (index > (COLS * (ROWS - 1))) 
		{
			rowIndex = (ROWS - 1);
			colIndex = index - (COLS * (ROWS - 1));
		}

		if (index > (COLS * (ROWS - 2)))
		{
			rowIndex = (ROWS - 2);
			colIndex = index - (COLS * (ROWS - 2));
		}

		else {
			rowIndex = 0;
			colIndex = index;
		}

		// use the resulting row and column index to print the value
		std::cout << grid2D[rowIndex][colIndex] << ", ";
	}
	std::cout << "\n\n";				// just to make it visually clear between task 2 and 3


	// ------------------------------------------------------------------------


	const char* grid1D[ROWS*COLS] =
	{
		"a0", "a1", "a2", "a3", "a4",
		"b0", "b1", "b2", "b3", "b4",
		"c0", "c1", "c2", "c3", "c4"
	};

	// Task 3:
	// using a nested loop to iterate over rows/columns
	// convert the row and column index to a single index value to print the values
	// of grid1D
	// Expected output:
	//		a0, a1, a2, a3, a4, 
	//		b0, b1, b2, b3, b4,
	//		c0, c1, c2, c3, c4,
	// ------------------------------------------------------------------------

	for (int rowIndex = 0; rowIndex < ROWS; rowIndex++)
	{
		for (int colIndex = 0; colIndex < COLS; colIndex++)
		{
			// TODO: calculate "index" based on rowIndex/colIndex value
			int index = (rowIndex * COLS) + colIndex;

			// use the resulting index to print the value
			std::cout << grid1D[index] << ", ";
		}
		std::cout << std::endl;
	}

	// ------------------------------------------------------------------------

}

