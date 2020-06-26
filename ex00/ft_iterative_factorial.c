/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: burapoo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 15:38:54 by burapoo           #+#    #+#             */
/*   Updated: 2020/06/26 17:15:36 by burapoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_iterative_factorial(int nb)
{
int i;
int f;

if(nb < 0)
	return(-1);
if (nb == 0)
	return(1);
i = 1;
f = nb;
	while(i < nb)
{
	f=f*i;
	i++;
}
return(f);
}
int main()
{
	int n,b;
	n = 5;
	b = ft_iterative_factorial(n);
	printf("%d",b);
	return(0);
}
	
