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

// Scalar::Scalar(const std::string Name, int Grade) : name(Name)
// {
//     // std::cout << "Scalar parameterized constructor called" << std::endl;
//     if (Grade < 1)
//         throw GradeTooHighException();
//     else if (Grade > 150)
//         throw GradeTooLowException();
//     grade = Grade;
// }

// Scalar::Scalar(Scalar const &original) : name(original.name)
// {
//     // std::cout << "Scalar copy constructor called" << std::endl;
//     *this = original;
// }

// Scalar  &Scalar::operator=(Scalar const &original)
// {
//     if (this != &original)
//     {
//         this->grade = original.grade;
//     }
//     return (*this);
// }

// std::ostream    &operator<<(std::ostream &out, Scalar &Scalar)
// {
//     out << Scalar.getName() << ", Scalar grade " << Scalar.getGrade();
//     return (out);
// }

// std::string Scalar::getName()
// {
//     return (name);
// }

// int Scalar::getGrade()
// {
//     return (grade);
// }
