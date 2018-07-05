/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imorimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 23:07:08 by imorimot          #+#    #+#             */
/*   Updated: 2018/07/05 13:34:10 by imorimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_four(char i, char j, char k, char l)
{
	ft_putchar(i);
	ft_putchar(j);
	ft_putchar(' ');
	ft_putchar(k);
	ft_putchar(l);
	if (i != '9' || j != '8')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_second_number(char i, char j, char k, char l)
{
	while (k <= '9')
	{
		while (l <= '9')
		{
			ft_print_four(i, j, k, l);
			l++;
		}
		l = '0';
		k++;
	}
}

void	ft_print_comb2(void)
{
	char i;
	char j;
	char k;
	char l;

	i = '0';
	while (i <= '9')
	{
		j = '0';
		while (j <= '9')
		{
			k = i;
			l = j + 1;
			ft_second_number(i, j, k, l);
			j++;
		}
		i++;
	}
}
