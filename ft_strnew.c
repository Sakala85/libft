/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbengtss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 05:22:18 by mbengtss          #+#    #+#             */
/*   Updated: 2017/11/19 21:24:43 by mbengtss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;
	char	*p;

	str = malloc(size + 1);
	if (!str)
		return (NULL);
	p = str;
	while (size)
	{
		*p++ = '\0';
		size--;
	}
	*p = '\0';
	return (str);
}
