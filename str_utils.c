/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chduong <chduong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 15:14:58 by chduong           #+#    #+#             */
/*   Updated: 2021/09/09 17:37:00 by chduong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_substrlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != '%')
		i++;
	return (i);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	ft_putchar(char c, t_format *fmt)
{
	fmt->len += write(1, &c, 1);
}

void	ft_putstr(char *s, t_format *fmt)
{
	if (!s)
		s = "(null)";
	fmt->len += write(1, s, ft_strlen(s));
}
