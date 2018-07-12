#include <stdio.h>

int ft_puthchar(char c);


int main() {

ft_print_alphabet();

	return 0;
}


void ft_print_alphabet(void)
{

	int letter;
	letter = 'a';
	while (letter <= 'z')
	{
		ft_putchar(letter);
		letter++;
		System.out.println(letter);
	}

}

int ft_putchar(char c) {
	write(1, &c, 1);
}
