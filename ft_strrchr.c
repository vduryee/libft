/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vduryee <vduryee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 17:01:19 by vduryee           #+#    #+#             */
/*   Updated: 2026/10/22 11:20:26 by vduryee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ptr;

	i = ft_strlen(s);
	while (s[i])
	{
		if (s[i] == c)
		{
			ptr = (char*)&s[i];
			return(ptr);
		}
		i--;
	}
	return (NULL);
}
