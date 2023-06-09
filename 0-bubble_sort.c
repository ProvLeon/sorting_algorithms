#include "sort.h"

/**
 * bubble_sort - sorts an array of integers
 * in ascending order
 * @array: array to hold integers
 * @size: of the array
 */
void bubble_sort(int *array, size_t size)
{
	int swapped, i, j;

	for (i = 0; i < (int)size - 1; i++)
	{
		swapped = 0;

		for (j = 0; j < (int)size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				int temp = array[j];

				array[j] = array[j + 1];
				array[j + 1] = temp;
				swapped = 1;
				/* Print the current state of the array after each pass */
				print_array(array, size);
			}
		}
		/* If no two elements were swapped by inner loop, then break */
		if (swapped == 0)
			break;
	}
}

