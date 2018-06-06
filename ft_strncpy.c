/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-kwaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 11:15:31 by rde-kwaa          #+#    #+#             */
/*   Updated: 2018/06/01 13:45:46 by rde-kwaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *des, char const *src, unsigned int n)
{
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strlen((char*)src);
	while (i < n)
	{
		if (i > len)
			des[i] = '\0';
		else
			des[i] = src[i];
		i++;
	}
	return (des);
}
