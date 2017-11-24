/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strcpy.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: clcreuso <clcreuso@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/24 22:06:12 by clcreuso     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/24 22:06:12 by clcreuso    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *d, const char *s)
{
	char *ret;

	ret = d;
	while (*s)
		*d++ = *s++;
	*d = '\0';
	return (ret);
}
