/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   set_pixel_color.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: scristia <scristia@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/17 18:05:10 by scristia      #+#    #+#                 */
/*   Updated: 2023/02/20 19:15:18 by scristia      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"
#include <stdio.h>

uint32_t	set_pixel_color(t_vars *vars, mlx_image_t *img, t_fvect2 *coords)
{
	uint32_t	pix;
	uint32_t	clr;
	double		intensity;
	double		shortest;

	if (vars->dst.x < vars->dst.y)
		shortest = vars->dst.x;
	else
		shortest = vars->dst.y;
	intensity = 0.5 / shortest * 2;
	intensity = 1;
	pix = (img->height * (int)coords[IMG_POS].y + (int)coords[IMG_POS].x) * 4;
	clr = get_rgba (img->pixels[pix], \
	img->pixels[pix + 1], img->pixels[pix + 2], \
	img->pixels[pix + 3]);
	return (clr);
}
