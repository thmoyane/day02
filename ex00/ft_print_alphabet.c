#include <unistd.h>

void ft_patchar(char q)
{
	write (1,&q, 1);
}

void ft_print_alphabet(void)
{
	char alpha;

	alpha ='a' ;
	while (alpha <= 'z')
	{
		write(1, &alpha,1);
		++alpha;
	}
}

int main(void)
{

	ft_print_alphabet();
	ft_putchar('\n');

	return (0);
}
