/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaguiler <aaguiler@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 11:10:33 by aaguiler          #+#    #+#             */
/*   Updated: 2022/11/12 12:03:26 by aaguiler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class Animal
{
	public:
		Animal(void);
		Animal(Animal const &src);
		~Animal(void);

		Animal	&operator=(Animal const &rhs);

		void	makeSound(void) const;
		std::string		getType(void) const;

	protected:
		std::string		_type;
		Brain*			_brain;
};

#endif
