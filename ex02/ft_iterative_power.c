/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: burapoo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 10:50:55 by burapoo           #+#    #+#             */
/*   Updated: 2020/06/26 17:15:29 by burapoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_iterative_power(int nb, int power)
{
	int	i;
	power = nb;

	if(power < 0 || nb == 0)
	return(0);

	if(power == 0 || nb == 1)
	return(1);
	i = 1;
	
	while(power > 0)
{
	i = i *nb;
	power --;
}
	return(i);
}
int	main()
{
	int i;
	int power;
	i = 2 ;
	power = 2;
	printf("%d", i);
	return(0);
}
