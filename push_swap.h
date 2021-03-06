/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizza <aaizza@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 16:39:17 by aaizza            #+#    #+#             */
/*   Updated: 2022/02/18 00:36:22 by aaizza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	int				content;
	int				index;
	struct s_list	*next;
}	t_list;

typedef struct norm
{
	int	min;
	int	max;
	int	med;
}	t_norm;

void		ft_index(t_list **a);
int			ft_find_position(t_list **a, int min, int max);
void		ft_push_to_b(t_list **a, t_list **b, t_norm g, int p);
void		ft_push_back_to_a(t_list **a, t_list **b, int k);
void		ft_convert_last(t_list **a);
void		ft_make(t_list **a, t_list **b, int count, t_norm g);
int			ft_chunk(t_list **a);
int			*ft_sort_array(int *s, int size);
int			*ft_sorted_array(t_list *l);
int			ft_strlen(char *str);
void		ft_putstr(char *s);
int			ft_strcmp(char *s1, char *s2);
char		*ft_strjoin(char *s1, char *s2);
int			ft_checkline(char *s);
char		*get_next_line(int fd);
char		*ft_substr(char *s, int start, int len);
void		ft_lstadd_back(t_list **lst, t_list *new);
t_list		*ft_lstnew(int content);
int			ft_lstsize(t_list *lst);
int			ft_lst_sortcheck(t_list *head);
int			ft_lst_rev_sortcheck(t_list *head);
t_list		*ft_lstlast(t_list *lst);
int			ft_isdigit(char c);
long int	ft_atoi(char *s);
int			ft_strlen(char *s);
int			ft_find_x(t_list *l, int x);
int			ft_find_min(t_list *l);
int			ft_find_min_index(t_list *l);
int			ft_find_by_index(int *s, int index);
int			ft_digit_check(char *s);
int			ft_error_check(char **s);
int			ft_dup_check(char **s);
int			ft_find_biggest(t_list *l);
t_list		*ft_make_list(int a, char **s);
void		ft_lstadd_front(t_list **lst, t_list *new);
void		ft_swap(t_list **head, char c);
void		ft_push(t_list **i, t_list **j, char c);
void		ft_rotate(t_list **a, char c);
void		ft_rev_rotate(t_list **a, char c);
void		ft_sort_2(t_list **a);
void		ft_sort_3(t_list **a);
void		ft_sort_5(t_list **a, t_list **b);
void		ft_sort_100(t_list **a, t_list **b);
void		ft_sort_500(t_list **a, t_list **b);
void		ft_sort1(t_list **a, t_list **b, int p);
void		ft_sort2(t_list **a, t_list **b);
void		ft_sort3(t_list **a, t_list **b);
void		ft_nor1(t_list **a, t_list **b, int z);
void		ft_nor2(t_list **a, t_list **b, int k);
int			ft_there_is_smaller(t_list *l, int x);
#endif