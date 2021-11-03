/* Implemente um sistema que o usuario
digite um valor em metros(m) e converta 
para centimetros (cm)
-- Digite o Valor em (m)
-- O valor convetido de X(m) é Y(cm)
*/
#include <stdio.h>
int main()
{
	float metro, centimetro ;
	
	/// Entrada - Start
	printf("Digite o valor em (m):\n"); 
    scanf("%f",&metro);
	/// Entrada - End
	
	/// Processamento - Start	
	centimetro = (metro * 100);	
	/// Processamento - End
	
	// Saida - Start
	printf("O valor convetido de %f(m) é %f(cm)",metro, centimetro);
	// Saida - End	
	
   return 0;
}

