/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imorimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 17:23:54 by imorimot          #+#    #+#             */
/*   Updated: 2018/07/04 23:03:56 by imorimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_three(char c, char d, char e)
{
	ft_putchar(c);
	ft_putchar(d);
	ft_putchar(e);
}

void	ft_print_comb(void)
{
	char i;
	char j;
	char k;

	i = '0';
	while (i <= '7')
	{
		j = i + 1;
		while (j <= '8')
		{
			k = j + 1;
			while (k <= '9')
			{
				if (k != '2')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				ft_print_three(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
}
