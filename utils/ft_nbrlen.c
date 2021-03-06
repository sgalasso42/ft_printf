/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgalasso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/09 21:50:39 by sgalasso          #+#    #+#             */
/*   Updated: 2018/05/09 21:50:41 by sgalasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		ft_nbrlen(int n)
{
	int c;

	c = 0;
	while (n > 9)
	{
		n = n / 10;
		c++;
	}
	return (c + 1);
}
