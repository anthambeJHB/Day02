#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}
void ft_print_numbers(void)
{
	int a;
	a = '0';
	while (a <= '8')
	{
		ft_putchar(a);
		a = a + 1;
	}
}  


