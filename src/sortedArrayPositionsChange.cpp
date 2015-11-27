/*
OVERVIEW: In a given ascending sorted array, two numbers are changed their position, please fix those two numbers.
E.g.: In [10, 40, 30, 20, 50] 20 and 40 are swapped, so final output will be [10, 20, 30, 40, 50]

INPUTS: Ascending sorted array with two positions swapped, length of the array.

OUTPUT: Update sorted array by fixing swapped numbers.

ERROR CASES: Return NULL for invalid Inputs.

NOTES:
*/

#include <stdio.h>

void * sortedArrayPositionsChange(int *Arr, int len)
{
	int i,temp;
	if (Arr == NULL || len < 0)
	{
		return NULL;
	}


	// Travers the given array from rightmost side
		for (int i = len - 1; i > 0; i--)
		{
			// Check if arr[i] is not in order
			if (Arr[i] < Arr[i - 1])
			{
				// Find the other element to be
				// swapped with arr[i]
				int j = i - 1;
				while (j >= 0 && Arr[i] < Arr[j])
				{
					j--;
				}
				
				temp = Arr[i];
				Arr[i] = Arr[j+1];
				Arr[j+1] = temp;
				break;
			}
		}

}