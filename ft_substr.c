/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bemmanue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 18:40:58 by bemmanue          #+#    #+#             */
/*   Updated: 2021/04/28 19:02:38 by bemmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	int				i;
	unsigned int	l;

	i = 0;
	l = ft_strlen(s);
	sub = malloc(sizeof(*sub) * len + 1);
	if (sub == NULL)
		return (NULL);
	while (s[start] && len > 0 && start < l)
	{
		sub[i++] = s[start++];
		len--;
	}
	sub[i] = '\0';
	return (sub);
}
