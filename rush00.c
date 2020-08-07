void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rush00(int a, int b)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while(i != a && j != b && a > 0 && b > 0)
	{
		if(j == 0 || j == b)
		{
			while(i < a)
			{
				if(i == 0 || i == a)
					ft_putchar('o');
				else
					ft_putchar('-');
				i++;
			}
		}
		i = 0;
		if(j > 0 || j < a)
		{
			while(i < a)
			{
				if(i == 0 || i == a)
					ft_putchar('|');
				else
					ft_putchar(' ');
				i++;
			}
		}
		j++;
	}
}	
