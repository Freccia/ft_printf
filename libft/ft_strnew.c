/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfabbro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 15:57:06 by lfabbro           #+#    #+#             */
/*   Updated: 2016/09/21 12:21:45 by lfabbro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** DESCRIPTION:
**     Allocates (with malloc(3)) and returns a “fresh” string ending
**     with ’\0’. Each character of the string is initialized at
**     ’\0’. If the allocation fails the function returns NULL.
*/

char	*ft_strnew(size_t size)
{
	char	*space;
	int		i;

	i = 0;
	if ((space = malloc(sizeof(char) * size)) == NULL)
		return (NULL);
	while ((size_t)i < size)
	{
		space[i] = '\0';
		++i;
	}
	space[i] = '\0';
	return (space);
}
