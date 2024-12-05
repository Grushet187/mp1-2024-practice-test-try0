// Задача 2. Найти произведение натуральных чисел a и b
// Если a * b >= UINT_MAX, возвращать UINT_MAX
#define UINT 4294967295
unsigned int product_of_two_numbers(unsigned int a, unsigned int b)
{
	long int c = a * b;
	if (b > UINT/a)
	{
		return UINT;
	}
	if (b < UINT/a)
	{
		return c;
	}
}
