/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jna <jna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 16:24:20 by jna               #+#    #+#             */
/*   Updated: 2020/10/16 16:25:45 by jna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>

size_t		ft_strlen(const char *s)
{
	unsigned int	count;

	count = 0;
	while (s[count] != '\0')
		count++;
	return (count);
}