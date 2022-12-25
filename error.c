/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjadalla <sjadalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 15:56:54 by mkhan             #+#    #+#             */
/*   Updated: 2022/12/25 18:27:41 by sjadalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	ft_exit(void)
{
	exit (1);
	return (0);
}

void	ft_error(void)
{
	write(1, "Wrong/Invalid arguments\n", 25);
	write(1, "For Mandelbrot set: Run -> ./fractol 1\n", 39);
	write(1, "For Julia set: Run -> ./fractol -0.70176 -0.3842\n", 49);
	write(1, "For Extra Fractol/ Burning Ship set: Run -> ./fractol 2\n", 57);
	exit(1);
}
