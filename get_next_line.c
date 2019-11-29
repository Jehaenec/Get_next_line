/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehaenec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 16:01:15 by jehaenec          #+#    #+#             */
/*   Updated: 2019/11/26 16:01:17 by jehaenec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_gnl(char **line, static char *rest, int fd)
{
	int     i;
	char    *p;

	i = 0;
	p = rest;
	while(*rest && *rest != '\n')
	{
		i++;
		rest++;
	}
	*line = ft_strndup(p, i);
	rest = ft_strdupn(rest,i);
	return (1);
}

int     ft_outline(char **line, static char *rest, int fd)
{
	if (i < 0)
		return (-1);
	else if (rest == NULL && i = 0)
		return (0);
	else
		return (ft_gnl(line, rest, fd))
}

int		get_next_line(int fd, char **line)
{
	char        *buff[BUFF_SIZE];
	int         i;
	static char *rest;

	if (fd < 0 || fd > OPEN_MAX)
		return (-1);
	while (i = read(fd, tmp, BUFF_SIZE) > 0)
	{
		tmp[BUFF_SIZE] = '\0';
		if (!rest)
			rest = ft_strndup(buff, BUFF_SIZE);
		else
			rest = ft_strjoin(rest, buff);
		if (ft_strchr(rest, '\n'))
			break ;
	}
	return(ft_outline(line, rest, fd, i))
}