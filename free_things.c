/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_things.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araveala <araveala@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 11:56:36 by araveala          #+#    #+#             */
/*   Updated: 2024/07/25 07:59:36 by araveala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	free_mutex(t_data *data)
{
	int i;

	i = 0;
	pthread_mutex_destroy(data->main_fork_lock);
//	pthread_mutex_destroy(data->philo->right_fork);
	pthread_mutex_destroy(&data->ultima);
	pthread_mutex_destroy(&data->death_lock);
}

void	free_all(t_data *data)//, t_philosopher *philo)
{
	free_mutex(data);
	free(data->main_fork_lock);
	free(data->philo);
	free(data);

}


