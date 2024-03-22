/* ************************************************************************************** */
/*																						  */
/*                                                						d8b		888       */
/*                                                  					Y8P		888       */
/*                                                      						888       */
/*		888  888	  .d88b.   	8888b.  	88888b.d88b.	88888888	888 	888       */
/*		888  888 	d88""88b     	"88b 	888 "888 "88b    	d88P 	888 	888       */
/*		888  888 	888  888 	.d888888 	888  888  888		d88P   	888 	888       */
/*		Y88b 888 	Y88..88P 	888  888 	888  888  888	  d88P    	888 	888       */
/*		"Y88888  	"Y88P"  	"Y888888 	888  888  888	88888888 	888 	888       */
/*	  		 888																          */
/*		Y8b d88P																          */
/*		"Y88P"									By: yoamzil <yoamzil@student.1337.ma>     */
/*																						  */
/* ************************************************************************************** */

#include "Scalar.hpp"

Scalar::Scalar()
{
    std::cout << "Scalar constructor called" << std::endl;
}

Scalar::~Scalar()
{
    std::cout << "Scalar destructor called" << std::endl;
}

Scalar::Scalar(Scalar const &original)
{
    // std::cout << "Scalar copy constructor called" << std::endl;
    *this = original;
}

Scalar  &Scalar::operator=(Scalar const &original)
{
    if (this != &original)
    {
        *this = original;
    }
    return (*this);
}

void		Scalar::convert(std::string str)
{
	try
	{
		int		i = std::stoi(str);
		char	c = static_cast<char>(i);
		float	f = static_cast<float>(i);
		double	d = static_cast<double>(i);

		std::cout << "char: ";
		if (i < 32 || i > 126)
			std::cout << "Non displayable" << std::endl;
		else
			std::cout << "'" << c << "'" << std::endl;

		std::cout << "int: " << i << std::endl;

		std::cout << "float: ";
		if (f - i == 0)
			std::cout << f << ".0f" << std::endl;
		else
			std::cout << f << "f" << std::endl;

		std::cout << "double: ";
		if (d - i == 0)
			std::cout << d << ".0" << std::endl;
		else
			std::cout << d << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

// std::ostream    &operator<<(std::ostream &out, Scalar &Scalar)
// {
//     out << Scalar.getName() << ", Scalar grade " << Scalar.getGrade();
//     return (out);
// }

