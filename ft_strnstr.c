/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oltkache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 20:03:13 by oltkache          #+#    #+#             */
/*   Updated: 2017/10/30 20:03:13 by oltkache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[i] == '\0')
		return ((char*)big);
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (little[j] == big[i] && i < len)
		{
			if (little[j + 1] == '\0')
				return ((char*)(big + i - j));
			++i;
			++j;
			if (little[j] != big[i] && little[j] != '\0')
			{
				i -= j;
				break ;
			}
		}
		++i;
	}
	return (0);
}
