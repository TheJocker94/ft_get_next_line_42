#include "get_next_line.h"

size_t	ft_strlen(const char *c)
{
	size_t	i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str || !s1 || !s2)
		return (NULL);
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_strchr(const char *str, int c)
{
	char	*string;

	string = (char *)str;
	while (*string != c && *string != 0)
		string++;
	if (*string == c)
		return (string);
	else
		return (NULL);
}

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*c;

	c = (char *)s;
	i = 0;
	while (i < n)
	{
		c[i] = 0;
		i++;
	}
}

void	*ft_calloc(size_t nitems, size_t size)
{
	char	*res;

	res = malloc(size * nitems);
	if (!res)
		return (NULL);
	ft_bzero(res, size * nitems);
	return (res);
}
