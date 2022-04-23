/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: admarque <admarque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 01:40:28 by admarque          #+#    #+#             */
/*   Updated: 2022/04/23 02:18:16 by admarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{	
		if (str[i] < 32 || str[i] > 126)
			return (0);
		i++;
	}
	return (1);
}
#include<stdio.h>
int main(void){
	char n[]="";
	printf("%d\n",ft_str_is_printable(n));
	
}
