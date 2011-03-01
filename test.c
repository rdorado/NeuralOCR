#include "cv.h"

#include <stdio.h>
char name0[]="lena.jpg"; // se define el fichero a carga
 int main()
{
IplImage* imagen=NULL;//inicializo imagen
imagen=cvLoadImage(name0,1);// cargamos la imagen,
// se carga en tres colores
cvNamedWindow( "test", 1); // creamos la ventana de nombre "test"
//indicÃ¡ndole con el 1 que ajuste

//su tamaÃ±o al de la imagen
cvShowImage( "test", imagen ); // representamos la imagen en la ventana
cvSaveImage("saliendo.jpg",imagen); // guardamos la imagen
cvWaitKey(0); // se pulsa tecla para terminar
cvDestroyAllWindows(); // destruimos todas las ventanas
cvReleaseImage(&imagen);
return 0; 
}
