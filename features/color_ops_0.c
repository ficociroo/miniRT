/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color_ops_0.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfico-vi <cfico-vi@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 11:50:25 by cfico-vi          #+#    #+#             */
/*   Updated: 2021/05/11 19:04:17 by cfico-vi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/raytracer.h"

t_color	c_color(double r, double g, double b)
{
	t_color		tmp;

	tmp.r = r;
	tmp.g = g;
	tmp.b = b;
	return (tmp);
}

t_color	add_color(t_color a, t_color b)
{
	t_color		tmp;

	tmp.r = a.r + b.r;
	tmp.g = a.g + b.g;
	tmp.b = a.b + b.b;
	return (tmp);
}

t_color	sub_color(t_color a, t_color b)
{
	t_color		tmp;

	tmp.r = a.r - b.r;
	tmp.g = a.g - b.g;
	tmp.b = a.b - b.b;
	return (tmp);
}

t_color	scal_mul_color(t_color a, double scale)
{
	t_color		tmp;

	tmp.r = a.r * scale;
	tmp.g = a.g * scale;
	tmp.b = a.b * scale;
	return (tmp);
}

t_color	mul_color(t_color a, t_color b)
{
	t_color		tmp;

	tmp.r = ((a.r * 100) * (b.r * 100)) / 10000;
	tmp.g = ((a.g * 100) * (b.g * 100)) / 10000;
	tmp.b = ((a.b * 100) * (b.b * 100)) / 10000;
//	tmp.g = a.g * b.g;
//	tmp.b = a.b * b.b;
	return (tmp);
}