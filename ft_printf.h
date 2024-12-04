/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btuncer <btuncer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 03:06:22 by btuncer           #+#    #+#             */
/*   Updated: 2024/12/04 05:02:11 by btuncer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_UTILS
# define FT_UTILS
# define VALID_FORMATS "cspdiuxX"
# define BASE_TEMPLATE "0123456789abcdef"
# include <stdbool.h>
# include <stdlib.h>
# include <stdarg.h>
# include "ft_printf.h"

bool not(bool condition);
int len(char *str);
int intlen_base(long long n, int base);
char uppercase(char c);
int printchar(char c);
int printstr(char *str);
int format_is_valid(char c);
int baseator(long long n, int base, bool upper);
int format_pointer(void *p);
int format_hub (char format, va_list valist);
int format_string(const char **str, va_list valist);
int ft_printf(const char *str, ...);

#endif