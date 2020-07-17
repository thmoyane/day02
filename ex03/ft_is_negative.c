/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmoyane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 15:54:07 by thmoyane          #+#    #+#             */
/*   Updated: 2020/07/16 16:50:14 by thmoyane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(int k)
{
	write(1, &k, 1);
}	

void ft_is_negative(int n)
{
	if (n<0)
	{
		ft_putchar('N');
	}
	else
	{
		ft_putchar('P');
	}
}

int main()
{
	ft_is_negative(-4);

	return 0;
}
