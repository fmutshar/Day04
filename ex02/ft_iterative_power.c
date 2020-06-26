/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmutshar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 16:27:57 by fmutshar          #+#    #+#             */
/*   Updated: 2020/06/26 16:28:32 by fmutshar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int result;
	int a;

	a = power;
	result = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	while (a-- != 1)
		result = result * nb;
	return (result);
}
/*
int main()
{
	ft_iterative_power(0,0);
		return 0;
}
*/
