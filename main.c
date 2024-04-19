/******************************************************************************

Faça um programa em C que: 
– Uma equação do segundo grau possui o seguinte formato: 
• ax2 + bx + c = 0 – Para resolver esta equação, devemos encontrar as duas raízes, x’ e x’’. 
Usamos, então, a fórmula de Báskara: 
– Assim sendo, crie um programa em C que recebe os valores inteiros a, b e c 
e retorna as duas raízes da equação de segundo grau correspondente. 
• x’ é a raiz positiva 
• x’’ é a raiz negativa 
Exemplos: • x² - 4x - 12 = 0                           • x² + 8x – 9 = 0
       ▪ a=1, b=-4, c=-12                        ▪ a=1, b=8, c=-9
        ▪ x’ = 6.0; x’’ = -2.0                       ▪ x’ = 1; x’’=-9

*******************************************************************************/
#include <math.h>
#include <stdio.h>

int
main ()
{
  int a, b, c;
  printf ("Digite o valor de a: ");
  scanf ("%d", &a);

  printf ("Digite o valor de b: ");
  scanf ("%d", &b);

  printf ("Digite o valor de c: ");
  scanf ("%d", &c);

  double delta = pow (b, 2) - (4 * a * c);

  double xLinha = (-b + sqrt (delta)) / (2 * a);
  double xDuasLinhas = (-b - sqrt (delta)) / (2 * a);

  printf ("- Raiz positiva: %f\n- Raiz negativa: %f\n", xLinha, xDuasLinhas);

  return 0;
}
