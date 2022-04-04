/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imaman-s < imaman-s@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 12:19:52 by imaman-s          #+#    #+#             */
/*   Updated: 2022/03/08 05:31:54 by imaman-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	LIBRARY
*	#include <ctype.h>
*	DESCRIPTION
*	The isdigit() function tests for a decimal digit character.
*	PARAMETERS
*	#1. The character to test.
*	RETURN VALUES
*	The isdigit() function returns zero if the character tests false and 
*	returns non-zero if the character tests true.
*/

#include "libft.h"

int	ft_isdigit(int c)
{
	if ((c < '0') || (c > '9'))
		return (0);
	return (1);
}
