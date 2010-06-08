#include <stdio.h>
#include <stdlib.h>

int main ( void )
{
size_t siz = 100 * 1024 * 1024 ;
size_t idx = 1 ;
void *ptr ;

for (;;)
{
ptr = malloc ( siz * idx );
if ( ! ptr )
break ;
free ( ptr );
idx ++ ;
}
printf ( "Max malloc %d * 100 MB \n", idx - 1 );
return ( 0 );
}
