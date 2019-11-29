/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehaenec <jehaenec@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 14:59:40 by jehaenec          #+#    #+#             */
/*   Updated: 2019/10/27 18:00:45 by jehaenec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(char *string)
{
	while (*string)
	{
		if (*string == '\n')
			return (string);
		string++;
	}
	return (NULL);
}

char	*ft_strdup(const char *s1)
{
	char	*dup;
	int		n;

	n = ft_strlen(s1);
	if (!(dup = (char*)malloc(sizeof(char) * (n + 1))))
		return (0);
	ft_strcpy(dup, s1);
	return (dup);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dst;
	char	*p;

	while (*s1++)
	{
		while (*s2++)
			n++;
		n++;
	}
	if (!s2 || !(dst = (char *)malloc(sizeof(char) * n)
		return (NULL);
	p = dst;
	while (*s1)
	{
		*dst = *(char *) s1++;
		dst++;
	}
	while (*s2)
	{
			*dst = *(char *)s2++;
			dst++;
	}
	*dst = 0;
	return (p);
}

char	*ft_strbef(char *str)
{
	char	*tmpret
	int		i;
	char	*tmp;
	char	*ret

	tmp = str;
	i = 0;
	while (*tmp)
	{
		if (*tmp == '\n')
			continue ;
		tmp++;
		i++;
	}
	if (!(ret = (char*)malloc(sizeof(char) * i + 1))
		return (NULL);
	tmpret = ret;
	while (i-- > 0)
		*tmpret++ = *str++;
	return (ret);
}