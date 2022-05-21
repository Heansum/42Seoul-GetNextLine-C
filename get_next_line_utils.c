/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlim <hlim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 15:25:53 by hlim              #+#    #+#             */
/*   Updated: 2022/05/21 15:53:04 by hlim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(const char *str, int c)
{
	size_t	i;

	i = 0;
	if (str == 0)
		return (0);
	while (str[i] != 0)
	{
		if (str[i] == c)
			return ((char *)&str[i]);
		i++;
	}
	if (str[i] == c)
		return ((char *)&str[i]);
	return (0);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;
	size_t	cnt;

	i = 0;
	cnt = 0;
	while (str[i] != 0)
	{
		i++;
		cnt++;
	}
	return (cnt);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*str;
	int	i;
	int	j;

	if (s1 == 0)
	{
		s1 = (char *)malloc(sizeof(char) * 1);
		s1[0] = '\0';
	}
	if (s1 == 0 || s2 == 0)
		return (0);
	i = -1;
	j = 0;
	str = (char *)malloc(sizeof(char) * ((int)ft_strlen(s1) + (int)ft_strlen(s2) + 1));
	if (str == 0)
		return (0);
	while (s1[++i] != 0)
		str[i] = s1[i];
	while (s2[j] != 0)
		str[i++] = s2[j++];
	str[i] = '\0';
	free(s1);
	s1 = 0;
	return (str);
}
