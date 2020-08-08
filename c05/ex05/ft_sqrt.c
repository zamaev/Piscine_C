/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hirelia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 20:39:19 by hirelia           #+#    #+#             */
/*   Updated: 2020/07/21 21:14:52 by hirelia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int num;

	num = 0;
	if (nb < 0)
		return (0);
	while (num * num <= nb)
	{
		if (num * num == nb)
			return (num);
		num++;
	}
	return (0);
}
