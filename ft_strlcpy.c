/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jna <jna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 16:26:40 by jna               #+#    #+#             */
/*   Updated: 2020/11/21 04:10:42 by jna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	count;

	count = 0;
	if (dst == '\0' && src == '\0')
		return (0);
	if (dstsize == 0)
		return (ft_strlen(src));
	while (src[count] && count < dstsize - 1)
	{
		dst[count] = src[count];
		count++;
	}
	if (dstsize != 0)
		dst[count] = '\0';
	return (ft_strlen(src));
}
