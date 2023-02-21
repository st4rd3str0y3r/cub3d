/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_pixel.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: scristia <scristia@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/20 18:59:13 by scristia      #+#    #+#                 */
/*   Updated: 2023/02/20 18:59:36 by scristia      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

uint32_t	get_pixel(mlx_image_t *img, t_vect2 i)
{
	return (get_rgba(img->pixels[(i.x + i.y * img->width) * sizeof(uint32_t)], \
				img->pixels[(i.x + i.y * img->width) * sizeof(uint32_t) + 1], \
				img->pixels[(i.x + i.y * img->width) * sizeof(uint32_t) + 2], \
				img->pixels[(i.x + i.y * img->width) * sizeof(uint32_t) + 3]));
}