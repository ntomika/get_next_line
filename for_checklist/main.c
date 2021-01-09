/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntomika <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 15:04:30 by ntomika           #+#    #+#             */
/*   Updated: 2021/01/09 18:44:43 by ntomika          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int main()
{
	int	fd;
	char	*line;
	int	rez;

//	fd = 42;
//	fd = 0;
//	fd = open("norm.txt",O_RDONLY);
//	fd = open("empty.txt",O_RDONLY);
//	fd = open("short.txt",O_RDONLY);
//	fd = open("line3k.txt",O_RDONLY);
//	fd = open("without-n.txt",O_RDONLY);

	while ((rez = get_next_line(fd, &line)) == 1)
	{
		printf("%d : ", rez);
		printf("%s\n", line);
	}
	printf("%d : ", rez);
	printf("%s\n", line);

	while (1)
		;
	return (0);
}

//	FOR CHECK DIFFERENT [BUFFER_SIZE]
/*
	gcc -Wall -Wextra -Werror -D BUFFER_SIZE=10000 get_next_line.c get_next_line_utils.c main.c
	gcc -Wall -Wextra -Werror -D BUFFER_SIZE=1 get_next_line.c get_next_line_utils.c main.c
	gcc -Wall -Wextra -Werror -D BUFFER_SIZE=5 get_next_line.c get_next_line_utils.c main.c
	gcc -Wall -Wextra -Werror -D BUFFER_SIZE=0 get_next_line.c get_next_line_utils.c main.c
	gcc -Wall -Wextra -Werror -D BUFFER_SIZE=-10 get_next_line.c get_next_line_utils.c main.c

 */
