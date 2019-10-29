/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isaplha.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsmienk <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/22 11:52:24 by lsmienk       #+#    #+#                 */
/*   Updated: 2019/03/24 13:35:20 by lsmienk       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalpha(int c)
{
	return (ft_tolower(c) != c || ft_toupper(c) != c);
}
