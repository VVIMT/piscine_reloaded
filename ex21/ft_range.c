/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinvimo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 19:20:55 by vinvimo           #+#    #+#             */
/*   Updated: 2016/11/03 20:05:48 by vinvimo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	unsigned int	i;
	int				nb;
	int				*tab;

	nb = min;
	i = 0;
	if (min >= max)
		return (NULL);
	while (nb <= max)
	{
		nb++;
		i++;
	}
	if (!(tab = malloc(sizeof(int) * i)))
		return (NULL);
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}
