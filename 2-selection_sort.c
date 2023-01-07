#include "sort.h"

/**
 * selection_sort - Function that sorts an array of integers
 * in ascending order using the Selection sort algorithm.
 * @array: array pointer
 * @size: array lenght
 * Return: nothing
 */
void selection_sort(int *array, size_t size)
{
	unsigned int i, j, jMin, swap;

	if (!array)
		return;

	for (i = 0; i < size - 1; i++)
	{
		jMin = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[jMin])
			{
				jMin = j;
			}
		}
		if (jMin != i)
		{
			swap = array[jMin];
			array[jMin] = array[i];
			array[i] = swap;
			print_array(array, size);
		}
	}
}
