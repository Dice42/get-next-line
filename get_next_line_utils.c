/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammoh <mohammoh@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 14:19:00 by mohammoh          #+#    #+#             */
/*   Updated: 2023/07/28 23:11:59 by mohammoh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (!str || !str[i])
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size;
	char	*res;

	if (!s1 && !s2)
		return (NULL);
	size = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	res = (char *)malloc(sizeof(char) * (size + 1));
	if (!res)
		return (NULL);
	if (s1 && s2)
	{
		ft_strcat(ft_strcpy(res, (char *)s1), (char *)s2);
		return (free((char *)s1), res);
	}
	else if (s1 != NULL && s2 == NULL)
	{
		return (free((char *)s2), ft_strcpy(res, (char *)s1));
	}
	else if (s1 == NULL && s2 != NULL)
		return (free((char *)s1), ft_strcpy(res, (char *)s2));
	else
		return (free((char *)s1), NULL);
}

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	int		i;

	i = 0;
	if (!s)
		return (0);
	str = (char *)s;
	while (str[i] != '\0')
	{
		if (str[i] == (unsigned char)c)
			return (str + i);
		i++;
	}
	if (str[i] == (unsigned char)c)
		return (str + i);
	return (0);
}
