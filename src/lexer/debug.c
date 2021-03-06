/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuokka <vkuokka@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 17:10:44 by vkuokka           #+#    #+#             */
/*   Updated: 2021/05/06 13:10:51 by vkuokka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "shell.h"

void	lexer_debug(t_lexer lexer)
{
	ft_putstr("\n--LEXER DEBUG--\n");
	ft_printf("%s: [%d]\n", "token count", lexer.count);
	ft_printf("flags: ");
	ft_print_bits(lexer.flags, 24);
	ft_putchar('\n');
	while (lexer.head)
	{
		ft_printf("%s: [%s] type: [%d]\n", "token", \
					lexer.head->data, lexer.head->type);
		if (lexer.head == lexer.last)
			break ;
		lexer.head = lexer.head->next;
	}
}
