/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 22:37:01 by shaas             #+#    #+#             */
/*   Updated: 2022/07/06 14:59:03 by shaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook	phoneBook;
	std::string	input;

	while (true)
	{
		getline(std::cin, input);
		if (input == "ADD")
			PhoneBook.addContact();
		
	}
}