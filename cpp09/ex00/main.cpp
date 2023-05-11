/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaas <shaas@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 20:45:53 by shaas             #+#    #+#             */
/*   Updated: 2023/05/11 21:55:23 by shaas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "BitcoinExchange.hpp"

int	main(int argc, char* argv[]) {
	if (argc != 2) {
		std::cout << "Error: Please provide one input file" << std::endl;
		return (1);
	}

	try {
		BitcoinExchange(std::string(argv[1]));
	} catch (std::exception& e) {
		std::cout << e.what() << '\n';
	}
	return 0;
}
