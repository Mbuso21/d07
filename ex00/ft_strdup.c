/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmehloma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 16:39:19 by mmehloma          #+#    #+#             */
/*   Updated: 2020/06/26 17:06:09 by mmehloma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*str;

	len = 0;
	while (src[len])
	{
		len++;
		str = (char*)malloc(sizeof(*str) * (len + 1));
		i = 0;
	}
	while (i < len)
	{
		str[i] = src[i];
		i++;
	}
	return (str);
}

