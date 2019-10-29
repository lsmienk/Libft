/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsmienk <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/24 11:40:23 by lsmienk       #+#    #+#                 */
/*   Updated: 2019/03/24 13:41:59 by lsmienk       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *bb;

	bb = (unsigned char *)b;
	if (len == 0)
		return (b);
	while (len > 0)
	{
		*bb = (unsigned char)c;
		len--;
		bb++;
	}
	return (b);
}
