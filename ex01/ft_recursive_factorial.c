/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: burapoo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 09:19:54 by burapoo           #+#    #+#             */
/*   Updated: 2020/06/26 16:58:44 by burapoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int sum(int n);

int main()
{
	int number , result;
	printf("4: ");
	scanf("%d" , &number);

	result = sum(number);

	printf("sum = %d" , result);
	return (0);
}

int	sum(int n)
{
	if (n != 0)
		return n + sum(n - 1);
	else 
		return n;
}
