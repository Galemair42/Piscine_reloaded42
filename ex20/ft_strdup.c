#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char *str;
	int i;

	i = 0;
	while (src[i])
		i++;
	str = malloc(sizeof(str) * (i + 1));
	i = 0;
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	return (str);
}
