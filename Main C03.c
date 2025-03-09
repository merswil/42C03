

#include<stdio.h>
int	main(void)
{
	char A[] = "Hello";
	char B[] = "Helloo";
	char C[] = "Bello";
	printf("%d\n", ft_strcmp(A, A));
	printf("%d\n", ft_strcmp(B, A));
	printf("%d", ft_strcmp(C, A));
	
}




#include <string.h>
int	main(void)
{
	char A[] = "Hello";
	char B[] = "Helloo";
	char C[] = "Bello";
	printf("%d\n", ft_strncmp(A, A, 3));
	printf("%d\n", ft_strncmp(B, A, 4));
	printf("%d\n", ft_strncmp(B, A, 6));
	printf("%d\n\n", ft_strncmp(C, A, 5));
	
	printf("%d\n", strncmp(A, A, 3));
	printf("%d\n", strncmp(B, A, 4));
	printf("%d\n", strncmp(B, A, 6));
	printf("%d", strncmp(C, A, 5));
}







#include<stdio.h>
int	main(void)
{
	char A[15] = "Hello";
	//:wchar B[] = "Helloo";
	char C[] = "Bello";
	//printf("%s\n", A);
	printf("%s\n", ft_strcat(A, C));
//	printf("%s", A);
	
	return (0);
}






#include<stdio.h>
int	main(void)
{
	char A[100] = "Hello";
	char B[] = "Helloo";
	char C[] = "Bello";
//	printf("%s\n", A);
	printf("%s\n", ft_strncat(A, C, 5));
//	
printf("%s", A);
	
	return (0);
}







