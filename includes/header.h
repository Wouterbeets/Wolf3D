/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/13 17:19:43 by gpetrov           #+#    #+#             */
/*   Updated: 2014/01/13 21:35:52 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <math.h>
# include "libft.h"

typedef struct		s_conf
{
	int				x;
	int				y;
	char			*name;
	int				wall;
	int				empty;
	int				start;
}					t_conf;

typedef struct		s_data
{
	int				i;
}					t_data;

int		***ft_get_data(char **av, t_conf *conf);
void	print_char_tab(char **tab);
void	ft_set_conf(t_conf *conf, int fd);
void	print_config(t_conf *conf);
int		**ft_fill_tab(char *line, t_conf *conf);
void	ft_print_map(int ***map);

#endif
