/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntomika <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 00:42:02 by ntomika           #+#    #+#             */
/*   Updated: 2021/01/06 00:42:03 by ntomika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

int			get_next_line(int fd, char **line);
size_t		ft_strlen(const char *str);
char		*ft_strdup(const char *src);
char		*ft_new(size_t n);
char		*ft_strjoin(char const *s1, char const *s2);

#endif
