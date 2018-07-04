/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imorimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 23:07:08 by imorimot          #+#    #+#             */
/*   Updated: 2018/07/04 23:41:02 by imorimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_comb2(void)
{
	int i;
	int j;
	int k;
	int l;

	i = '0';
	while (i <= '9')
	{
		j = '0';
		while (j <= '8')
		{
			k = '0';
			while (k <= '9')
			{
				l = '0';
				while (l <= '9')
				{
					ft_putchar(i);
					ft_putchar(j);
					ft_putchar(' ');
					ft_putchar(k);
					ft_putchar(l);
					ft_putchar(',');
					ft_putchar(' ');
					l++;
				}
				k++;
			}
			j++;
		}
		i++;
	}
}
