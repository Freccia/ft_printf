/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfabbro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 15:36:47 by lfabbro           #+#    #+#             */
/*   Updated: 2016/04/10 17:39:29 by lfabbro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	int		i;
	void	*space;

	i = 0;
	space = NULL;
	if (!size || (space = malloc(size)) == NULL)
		return (NULL);
//	ft_memset(space, 0, size);
	return (space);
}
