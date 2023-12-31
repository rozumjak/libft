/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrozumek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:08:18 by jrozumek          #+#    #+#             */
/*   Updated: 2023/11/09 17:07:30 by jrozumek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
#include <stdio.h>

char    *ft_strrchr(const char *s, int c);

int     main(void)
{
        char s[] = "tripouille";

        printf("res: %s", ft_strrchr(s, 'l'));
        return (0);
}*/

/* strrchr() function returns a pointer to the last occurrence 
 * of the character 'c' in the string 's'.
 */

char	*ft_strrchr(const char *s, int c)
{
	size_t	strlen;
	char	*last_occur;

	strlen = 0;
	last_occur = NULL;
	while (s[strlen])
	{
		if (s[strlen] == (char)c)
			last_occur = ((char *)&s[strlen]);
		strlen++;
	}
	if (c == '\0')
		return ((char *)&s[strlen]);
	return (last_occur);
}
