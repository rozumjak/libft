/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrozumek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:00:34 by jrozumek          #+#    #+#             */
/*   Updated: 2023/11/09 17:44:26 by jrozumek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ft_lstadd_back() adds the node "new" at the end of the linked list "lst".

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*anvil;

	if (!new)
		return ;
	anvil = *lst;
	if (!anvil)
	{
		*lst = new;
		return ;
	}
	while ((*anvil).next)
		anvil = (*anvil).next;
	(*anvil).next = new;
}
