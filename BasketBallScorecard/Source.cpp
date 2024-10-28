#include <stdio.h>

#define CONSTANT_VALUE 2
#define PLAYED_GAMES 28


int main(void) {

	// Define results 
	// square bracket - array bracket	
	// 1 - win 
	// 0 - loss 
	int result[PLAYED_GAMES] = { 0,1,0,0,1,1,1,0,0,1,
	                              0,1,0,1,1,1,1,1,0,0,
	                              1,0,0,0,1,1,0,1};

	// New array hold the results of win and Loss
	int tempArray[CONSTANT_VALUE] = { NULL };

	// use a for loop to iterate over the array and calculate  
	for (int i = 0; i < PLAYED_GAMES; i++)
	{
		// array inside array
		tempArray[result[i]]++;
	}

	// display results
	printf("%s%12s\n", "LossandWin", "Counting");

	// output the frequencies in a tabular format
	for (int i = 0; i < CONSTANT_VALUE; i++) {
		printf("%6d%12d\n", i, tempArray[i]);
	}
	return 0;
