#include "sort.h"

/**
 * quick_sort_recursive - Sorts a partition of an array of integers
 *                        in ascending order using the Quick sort algorithm.
 * @array: The array of integers to be sorted
 * @size: The size of the array
 * @low: The starting index of the partition to be sorted
 * @high: The ending index of the partition to be sorted
 */
void quick_sort_recursive(int *array, size_t size, int low, int high)
{
	if (low < high)
	{
		int pivot = array[high];
		int i = low - 1;
		int j;

		for (j = low; j <= high - 1; j++)
		{
			if (array[j] <= pivot)
			{
				i++;
				if (i != j)
				{
					int temp = array[i];

					array[i] = array[j];
					array[j] = temp;
					print_array(array, size);
				}
			}
		}
		if (i + 1 != high)
		{
			int temp = array[i + 1];

			array[i + 1] = array[high];
			array[high] = temp;
			print_array(array, size);
		}

		quick_sort_recursive(array, size, low, i);
		quick_sort_recursive(array, size, i + 2, high);
	}
}

/**
 * quick_sort - Sorts an array of integers in ascending order
 *              using the Quick sort algorithm.
 * @array: The array of integers to be sorted
 * @size: The size of the array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	quick_sort_recursive(array, size, 0, size - 1);
}