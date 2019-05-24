//#include <windows.h>  //Solo para Windows
//#include <GL/gl.h>     // The GL Header File
//#include <stdio.h>

//#include <math.h>
#include "Main.h"


class CFiguras
{
	public:
    
    float var = 0.0f;
	float text_der;
	float text_izq;
	void prismacama(GLuint enfrente, GLuint izquierda, GLuint derecha, GLuint arriba, GLuint atras);
	void prismacuarto(float altura, float largo, float profundidad, GLuint text, GLuint text2);//Funcíon creacion prisma prismacuarto
    void prisma4c (float altura, float largo, float profundidad, GLuint text, GLuint text2);  //Funcion creacion prisma
    void balcon (float altura, float largo, float profundidad, GLuint text, GLuint text2); //Funcion creacion prisma
    void prisma_alberca(GLuint text, GLuint text2);
    void balcon1 (float altura, float largo, float profundidad, GLuint text, GLuint text2); //Funcioncreacion prisma
    void balcon2 (float altura, float largo, float profundidad, GLuint text, GLuint text2); //Funcion creacion prisma
    void prisma3c (float altura, float largo, float profundidad, GLuint text, GLuint text2);
	void esfera(GLfloat radio, int meridianos, int paralelos, GLuint text); //Funcíon creacion esfera
	void cilindro(float radio, float altura, int resolucion, GLuint text);	//Funcíon creacion cilindro
    void cilindro2(float radio, float altura, int resolucion, GLuint text);	//Funcíon creacion cilindro2
	void cono(float altura, float radio, int resolucion, GLuint text);		//Funcíon creacion cono
	void prisma_anun (GLuint text, GLuint text2);							//Funcíon creacion movimiento
	void prisma (float altura, float largo, float profundidad, GLuint text,GLuint text2);//Funcíon creacion prisma
    void prisma_entrada (float altura, float largo, float profundidad, GLuint text, GLuint text2); //Funcion creacion prisma
    void prisma_pasillo (float altura, float largo, float profundidad, GLuint text, GLuint text2, GLuint text3); //Funcion creacion prisma
    void prisma_pasillo1 (float altura, float largo, float profundidad, GLuint text, GLuint text2);
    void prisma_pasillo2 (float altura, float largo, float profundidad, GLuint text, GLuint text2);
        void puerta_balcon_d (float altura, float largo, float profundidad, GLuint text); //Funcion creacion prisma
    void prisma_pasillo_derecho (float altura, float largo, float profundidad, GLuint text, GLuint text2);
    void puerta_balcon_i (float altura, float largo, float profundidad, GLuint text); //Funcion creacion prisma
    void marco_sala (float altura, float largo, float profundidad, GLuint text);
    void prisma_buro (GLuint text, GLuint text2);
    void prisma2c (float altura, float largo, float profundidad, GLuint text, GLuint text2); //Funcion creacion prisma
    void prisma_cocina (float altura, float largo, float profundidad, GLuint text, GLuint text2, GLuint text3);
    void prisma_sala (float altura, float largo, float profundidad, GLuint text, GLuint text2, GLuint text3);
    void tapete(float altura, float radio, int resolucion, GLuint text);
    void prisma_rec (float altura, float largo, float profundidad, GLuint text, GLuint text2, GLuint text3);//Funcíon creacion prisma
    void marco (float altura, float largo, float profundidad, GLuint text);
    void marco2 (float altura, float largo, float profundidad, GLuint text);
    void puerta (float altura, float largo, float profundidad, GLuint text);
	void prisma2 (GLuint text, GLuint text2);
    void prisma3 (GLuint text, GLuint text2);
	void skybox(float altura, float largo, float profundidad, GLuint text);	//Funcion creacion cielo
	void skybox2 (float altura, float largo, float profundidad, GLuint text);
	void torus(GLfloat radioM, GLfloat radiom, int meridianos, int paralelos);


};
