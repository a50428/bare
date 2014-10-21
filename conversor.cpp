# include < stdio .h >
int main () {
	int op ;
	float x;
	printf ("converter");
printf ("(1) Unidades metricas");
printf ("(2) Unidades volumetricas");
scanf ("%d",& op );
switch( op ){
case 1:
printf ("(1) m->km") ;
printf ("(2) km- >m") ;
scanf ("%d",& op );
if( op == 1) {
printf ("m=?");
scanf ("%f",&x) ;
printf ("km=%f", x / 1000.) ;
}else{
printf ("km=?");
scanf ("%f",&x) ;
printf ("m=%f", x * 1000) ;
}
break;
case 2:
printf ("Por implementar");
default:
printf ("Opcao incorreta");
}
}
