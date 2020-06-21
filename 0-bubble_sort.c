#include "sort.h"
/**
 *bubble_sort - FONCTION DE TRI
 *@array: array of int
 *@size: size_t
 */
void bubble_sort(int *array, size_t size)
{
	size_t   tmp = 0, j, i, zab = size;

while (zab > 0)
{
for (j = 0; j <= size; j++)
{
for (i = 0; i < j; i++)
{
if (array[i] > array[i + 1])
{
tmp = array[i];
array[i] = array[i + 1];
array[i + 1] = tmp;
}
}
}
zab =  zab - 1;
}
}