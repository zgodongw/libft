/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addlink.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgodongw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/22 11:42:08 by zgodongw          #+#    #+#             */
/*   Updated: 2017/09/22 11:44:15 by zgodongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_addlink(t_list **head, char *str)
{
	t_list *newNode;
	t_list *temp;

	newNode = (t_list *)malloc(sizeof(t_list));
	newNode->content = str;
	newNode->next = NULL;
	temp = *head;
	if (*head == NULL)
		*head = newNode;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newNode;
	}
}
