/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   playground.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjulienn <cjulienn@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 14:55:13 by cjulienn          #+#    #+#             */
/*   Updated: 2021/07/15 16:04:58 by cjulienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

// playground to test real printf behaviour

int main(void)
{
	
	void	*ptn;

	ptn = "stuff";

	printf("This is : %p", ptn);
	
	return (0);
}