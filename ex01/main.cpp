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

#include "Serializer.hpp"

int main()
{
    t_data s;

    s.n = 5;
    s.s1 = "Hello";
    s.s2 = "world!";

    uintptr_t	str		= Serializer::serialize(&s);
    Data		*data	= Serializer::deserialize(str);

    std::cout << "n : " << data->n << std::endl;
    std::cout << "s1 : " << data->s1 << std::endl;
    std::cout << "s2 : " << data->s2 << std::endl;

	return (0);
}
