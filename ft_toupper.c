/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatheis <jmatheis@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 20:34:42 by jmatheis          #+#    #+#             */
/*   Updated: 2023/08/06 12:27:10 by jmatheis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

/*
#include <ctype.h>
#include <stdio.h>
int main()
{
    int c;
    
    c = '2';
    printf("ft_toupper: %c\n", ft_toupper (c));
    printf("toupper: %c\n", toupper (c));
}
*/