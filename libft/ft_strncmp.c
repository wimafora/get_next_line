/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimafora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 12:33:28 by wimafora          #+#    #+#             */
/*   Updated: 2019/06/03 12:33:30 by wimafora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *p1, const char *p2, size_t n)
{
	while ((unsigned char)*p1 == (unsigned char)*p2 && n--)
	{
		if (*p1 == '\0' || *p2 == '\0')
		{
			return (0);
		}
		p1++;
		p2++;
	}
	if (!n)
	{
		return ((unsigned char)*--p1 - (unsigned char)*--p2);
	}
	else
	{
		return ((unsigned char)*p1 - (unsigned char)*p2);
	}
}
