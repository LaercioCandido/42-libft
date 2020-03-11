/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcandido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 16:48:21 by lcandido          #+#    #+#             */
/*   Updated: 2020/02/08 02:15:24 by lcandido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int caracter)
{
	size_t	i;
	char	c;
	char	*str;

	i = ft_strlen(s);
	c = (char)caracter;
	str = (char *)s;
	while (i >= 0)
	{
		if (str[i] == c)
			return (&str[i]);
		if (i == 0)
			return (0);
		i--;
	}
	return (0);
}
