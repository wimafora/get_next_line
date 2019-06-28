/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimafora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 14:18:24 by wimafora          #+#    #+#             */
/*   Updated: 2019/06/11 15:17:25 by wimafora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*ft_s;
	size_t	len;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	ft_s = (char *)malloc(sizeof(ft_s) * len);
	if (!ft_s)
		return (NULL);
	if (ft_s)
	{
		ft_strcpy(ft_s, s1);
		ft_strcat(ft_s, s2);
		ft_s[len++] = '\0';
		return (ft_s);
	}
	return (ft_s);
}
