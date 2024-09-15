/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkerobya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 19:43:42 by rkerobya          #+#    #+#             */
/*   Updated: 2024/09/15 20:10:04 by rkerobya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	main(int argc, char *argv[])
{
	int	n;
	struct s_walls	walls;

	if (argc != 2)
		return (0);
	n = 4;
	walls.matrix = allocate_matrix(n);
	malloc_walls(&walls, n);
	fill_nums(&walls, argv, n);
	solve(&walls, 0, 0, n);
	print_matrix(walls.matrix, n);
	free_walls(&walls);
	free_matrix(walls.matrix, n);
}
