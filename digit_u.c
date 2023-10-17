#include main.h
/**
 * function big_print - to check whether a character is printable
 * @c: character we are evaluating
 *
 * return 1 after successful compilation i.e if the character gets printed else return 0
 */
int big_print (char c)

{
	if (c >= 32 && c < 127 )
		return (1);
	return (0);

}
