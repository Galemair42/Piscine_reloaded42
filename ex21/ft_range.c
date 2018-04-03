#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *tab;
	int i;

	i = 0;
	tab = malloc(sizeof(tab) * (max - min));
	while (min < max)
	{
		tab[i] = min;
		min++;
	}
	return (tab);
}
