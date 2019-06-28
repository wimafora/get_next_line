/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimafora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 12:34:18 by wimafora          #+#    #+#             */
/*   Updated: 2019/06/03 12:34:20 by wimafora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	unsigned int position;
	unsigned int index;

	if (!*needle)
		return ((char*)haystack);
	else
	{
		position = 0;
	}
	while (haystack[position] != '\0')
	{
		if (haystack[position] == needle[0])
		{
			index = 1;
			while (needle[index] != '\0' && haystack[position + index] \
					== needle[index])
				++index;
			if (needle[index] == '\0')
				return ((char*)&haystack[position]);
		}
		++position;
	}
	return (0);
}
