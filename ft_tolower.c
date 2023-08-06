/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmatheis <jmatheis@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 20:50:23 by jmatheis          #+#    #+#             */
/*   Updated: 2023/08/06 12:27:02 by jmatheis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

/*
#include <ctype.h>
#include <stdio.h>
int main()
{
    int c;
    
    c = '2';
    printf("ft_tolower: %c\n", ft_tolower (c));
    printf("tolower: %c\n", tolower (c));
}
*/