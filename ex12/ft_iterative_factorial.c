int	ft_iterative_factorial(int nb)
{
	int res;

	if (nb < 0)
		nb *= -1;
	if (nb == 0)
		return (1);
	res = nb;
	nb--;	
	while (nb > 0)
	{
		res *= nb;
		nb--;
	}
	return (res);	
}
