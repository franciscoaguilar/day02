/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faguilar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 16:10:57 by faguilar          #+#    #+#             */
/*   Updated: 2018/09/20 17:33:16 by faguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

void	ft_putchar(char c)
{
	write(1,&c,1);
}

void ft_print_comb2(void)
{
	char	a;
	char	b;
   a = '0';
	 while(a <= '9')
	 {
		b = a + 1;
	   		while(b <='9') 
			{
			ft_putchar(a);
			ft_putchar(b);
			ft_putchar(',');
			b++; 
			} 	
		a++; 
	 }
	
}
int main(void)
{
	ft_print_comb2();
}

