/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmoyane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 08:17:38 by thmoyane          #+#    #+#             */
/*   Updated: 2020/07/14 12:32:20 by thmoyane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_numbers(void);

int ft_print(int c)
{
	write(1,&c,0);
	return 0;
}

int main()
{
	int a = '0';
		while ( a < '9')
		{
		ft_print (a);
			a++;
		}	
	return 0;

}
