#include <stdio.h>

int main () {
	int op ;
	float x;
	printf ("converter\n");
    printf ("(1) Unidades metricas\n");
    printf ("(2) Unidades volumetricas\n");
    printf ("qualquer coisa");

    scanf ("%d",& op );
    switch( op ){
        case 1:
            printf ("(1) m->km\n") ;
            printf ("(2) km- >m\n") ;
            printf ("(3) m->mm\n");
            printf ("(4) mm->m\n");
            scanf ("%d",& op );
            if( op == 1) {
            printf ("m=?");
            scanf ("%f",&x) ;
            printf ("Km=%.3f", x / 1000.);
            }
            if( op == 3) {
            printf ("m=?");
            scanf ("%f",&x) ;
            printf ("mm=%.3f", x * 1000.);
            }
            if( op == 4) {
            printf ("mm=?");
            scanf ("%f",&x) ;
            printf ("m=%.3f", x / 1000.) ;
            }
            if( op == 2){
            printf ("km=?");
            scanf ("%f",&x) ;
            printf ("m=%.3f", x * 1000) ;
            }
            break;
        case 2:
            printf ("Por implementar");
        default:
            printf ("Opcao incorreta");
        }
}
