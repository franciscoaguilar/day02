/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faguilar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 00:41:27 by faguilar          #+#    #+#             */
/*   Updated: 2018/09/20 18:02:37 by faguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1,&c,1);
}

void ft_putnbr(int nb)
{ 
   char t;
   char a; 
   a  = nb + '0'; 
	ft_putchar(a); 
}	

int main()
{
	ft_putnbr(5);
}
