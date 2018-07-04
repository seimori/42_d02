/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imorimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 11:12:16 by imorimot          #+#    #+#             */
/*   Updated: 2018/07/04 14:01:54 by imorimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_print_alphabet(void)
{
	char c = 'a';
	while(c <= 'z')
	{
		ft_putchar(c);
		c++;
	}
}

int		main()
{
	ft_print_alphabet();
	ft_putchar('\n');
	return (0);
}
