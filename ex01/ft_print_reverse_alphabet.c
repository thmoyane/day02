/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmoyane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 10:46:31 by thmoyane          #+#    #+#             */
/*   Updated: 2020/07/09 10:50:24 by thmoyane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void ft_putchar(char q)
{
	write (1, &q, 1);
}

void ft_print_reverse(void)
{
	char alpha;
	
	alpha = 'z' ;
	while (alpha >= 'a')
	{
			write(1, &alpha,1);
			--alpha;
	}
}
