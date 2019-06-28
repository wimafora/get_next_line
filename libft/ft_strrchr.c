/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimafora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 12:33:56 by wimafora          #+#    #+#             */
/*   Updated: 2019/06/03 12:33:57 by wimafora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last_position;

	last_position = (0);
	while (*s)
	{
		if (*s == c)
			last_position = (char*)s;
		++s;
	}
	if (last_position)
		return (last_position);
	if (c == '\0')
		return ((char*)s);
	return (0);
}
