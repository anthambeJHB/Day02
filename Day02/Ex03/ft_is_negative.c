#include <unistd.h>

void	ft_putchar (char a)
{
	write(1, &a, 1);
}

void ft_is_negative (int n)
{
		if	(n > 0 || n == '\0')
		{
			ft_putchar('P');
		}
		else if (n < 0)
		{
			ft_putchar('N');
		}
}
