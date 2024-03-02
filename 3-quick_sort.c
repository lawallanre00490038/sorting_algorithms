#include "sort.h"

/**
 * quick_sort - Sorts an array of integers in ascending order
 *
 * @array: The array to be sorted
 * @size: Number of elements in @array
 */

void quick_sort(int *array, size_t size)
{
  if (array == NULL || size < 2)
    return;
  quick_sort_recursive(array, 0, size - 1, size);
}