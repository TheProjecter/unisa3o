#include <stdio.h>
#include <stdlib.h>

void main()
{
char ch;
    float c1, p1, m1, a1, ir1, ir2, ir3, ir4;
    float total_liquido, total_bruto, total_ir;
    // c1 = Carla, p1 = Pedro, m1 = Marcos, a1 = alice
    c1 = 35.60 * 168;
    p1 = 45.30 * 132;
    m1 = 56.90 * 170;
    a1 = 35.60 * 170;
    //IR = 25%
    ir1 = c1 * 25/100;
    ir2 = p1 * 25/100;
    ir3 = m1 * 25/100;
    ir4 = a1 * 25/100;
    
    total_ir = (ir1 + ir2 + ir3 + ir4);
    total_bruto = (c1 + p1 + m1 + a1);
    total_liquido = ((c1 + p1 + m1 + a1) - (ir1 + ir2 + ir3 + ir4));
         
    printf(" ....... EXERCICIO 6 ...........................\n");
    printf(" ....... Rodrigo Pelosini - RA 2126753 .........\n");
    printf(" ...............................................\n");
    printf(" *** CARLA ***\n");
    printf(" Salario Bruto................     R$ %.2f\n",c1);
    printf(" Desconto IR..................     R$ %.2f\n",ir1);
    printf(" Salario Liquido..............     R$ %.2f\n", (c1 - ir1));
    printf(" ...............................................\n");
    
    printf(" *** PEDRO ***\n");
    printf(" Salario Bruto................     R$ %.2f\n",p1);
    printf(" Desconto IR..................     R$ %.2f\n",ir2);
    printf(" Salario Liquido..............     R$ %.2f\n", (p1 - ir2));
    printf(" ...............................................\n");
    
    printf(" *** MARCOS ***\n");
    printf(" Salario Bruto................     R$ %.2f\n",m1);
    printf(" Desconto IR..................     R$ %.2f\n",ir3);
    printf(" Salario Liquido..............     R$ %.2f\n", (m1 - ir3));
    printf(" ...............................................\n");
    
    printf(" *** ALICE ***\n");
    printf(" Salario Bruto................     R$ %.2f\n",a1);
    printf(" Desconto IR..................     R$ %.2f\n",ir4);
    printf(" Salario Liquido..............     R$ %.2f\n", (a1 - ir4));
    printf(" ...............................................\n\n");
    
    printf(" ...............................................\n");
    printf(" Total Salarios (Bruto).......     R$ %.2f\n", total_bruto);
    printf(" Total de Descontos de IR.....     R$  %.2f\n", total_ir);
    printf(" Total Salarios (Liquido).....     R$ %.2f\n", total_liquido);
    printf(" ...............................................\n");
    
    getch(); 

  //system("PAUSE");	
  //return 0;
}
