/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_count_len.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: clcreuso <clcreuso@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/24 22:01:42 by clcreuso     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/24 22:01:42 by clcreuso    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_len(const char *s, char c)
{
	int a;

	a = 0;
	while (s[a] != c && s[a] != '\0')
		a++;
	return (a);
}
