/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlagrabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 09:50:45 by mlagrabe          #+#    #+#             */
/*   Updated: 2021/02/24 09:50:53 by mlagrabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_header.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putchar_err(char c)
{
	write(2, &c, 1);
}

void	error(char *err)
{
	int i;

	i = 0;
	while (err[i])
	{
		ft_putchar_err(err[i]);
		i++;
	}
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_atoi(char *str)
{
	int		nbr;
	int		n;

	nbr = 0;
	n = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			n *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		nbr *= 10;
		nbr += *str - '0';
		str++;
	}
	return (nbr * n);
}
