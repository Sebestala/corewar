/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_name.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 17:16:20 by mbelalou          #+#    #+#             */
/*   Updated: 2018/07/04 17:17:22 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/op.h"

char	*ft_get_name(t_op *op_tab)
{
	return (op_tab->name);
}