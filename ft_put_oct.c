/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_oct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 12:18:58 by mbelalou          #+#    #+#             */
/*   Updated: 2018/09/16 12:19:42 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../inc/vm.h"

void	ft_put_oct(unsigned char r[4])
{
	ft_printf("[%c,	 %c, %c, %c]", r[0], r[1], r[2], r[3]);
	ft_printf("[%.3d, %.3d, %.3d, %.3d]", r[0], r[1], r[2], r[3]);
}
