//Semestre 2017 - 2
//************************************************************//
//************************************************************//
//************** Alumno (s): *********************************//
//*************											******//
//*************											******//
//************************************************************//
//************************************************************//

#include "texture.h"
#include "figuras.h"
#include "Camera.h"
#include "cmodel/CModel.h"



//NEW//////////////////NEW//////////////////NEW//////////////////NEW////////////////
static GLuint ciudad_display_list;	//Display List for the Monito
bool g_fanimacion = false;
float giro_puertaB=0;
float desliza_puerta = -18;
float puerta_principal = -30;
float var = 0.0f;

bool respuesta;
bool respuesta2;
bool respuesta3;
bool respuesta4;
bool respuesta5;
bool respuesta6;
bool respuesta7;
bool respuesta8;
bool respuesta9;
bool respuesta10;
bool respuesta11;
bool respuesta12;
bool respuesta13;

bool ani = false;
bool ani2 = false;
float rot1 = 0.0; // HOMBRO
float rot2 = 0.0; // CODO
float rot3 = 0.0;// MU—ECA
float rot4 = 0.0;// NUDILLOS
float rot5 = 0.0;// DEDOS

int w = 500, h = 500;
int frame=0,time,timebase=0;
int deltaTime = 0;
char s[30];
CFiguras obj;

CCamera objCamera;	//Create objet Camera

GLfloat g_lookupdown = 0.0f;    // Look Position In The Z-Axis (NEW)

int* font=(int*)GLUT_BITMAP_HELVETICA_18;

float LightAngle = 30.0f;

bool	light = false;		// Luz ON/OFF
bool	positional = true;

static int spin = 0;

int p = 0, q = 0, r = 0, o = 0, e = 0, x = 0, y = 0, z = 0, a = 0, b = 0, c = 0, d = 0, f = 0, g = 0;

float giro = 0.0f;
float giro2 = 0.0f;
float giro3 = 0.0f;
float giro4 = 0.0f;
float giro5 = 0.0f;
float giro6 = 0.0f;
float giro7 = 0.0f;
float giro8 = 0.0f;
float giro9 = 0.0f;
float giro10 = 0.0f;
float giro11 = 0.0f;
float giro12 = 0.0f;
float giro13 = 0.0f;
float giro14 = 0.0f;

float desliza_puerta1 = 3.0f;
float desliza_puerta2 = -0.5f;

GLfloat Position[]= { 0.0f, 0.0f, 0.0f, 1.0f };			// Light Position
GLfloat Position2[]= { 0.0f, 0.0f, -3.0f };			// Light Position

GLfloat LightAmbient[] = { 0.0f, 0.0f, 0.0f, 1.0f }; 			// Ambient Light Values negro
//GLfloat LightDiffuse[] = { 1.0f, 1.0f, 1.0f, 1.0f };				// Diffuse Light Values blanco
//GLfloat LightSpecular[] = { 1.0, 1.0, 1.0, 1.0 };			// Specular Light Values blanco
GLfloat LightPosition[] = { 0.0f, 0.0f, 0.0f, 1.0f };			// Light Position
GLfloat LightPosition1[] = { 0.0f, 0.0f, 1.0f, 0.0f };			// Light Position
GLfloat LightDirection[] = { 0.0f, 0.0f, -2.0f };			// Light Position
GLfloat LightDiffuse[] = { 0.65f, 0.0f, 1.0f, 1.0f };				// Diffuse Light Values blanco
GLfloat LightSpecular[] = { 0.65f, 0.0, 1.0, 1.0 };

GLfloat mat_diffusehoja[] = { 0.5f, 0.35f, 0.05f, 1.0f };				// Diffuse Light Values blanco
GLfloat mat_specularhoja[] = { 0.5f, 0.35f, 0.05f, 1.0f };
GLfloat mat_ambient[] = { 0.0, 0.0, 0.0, 1.0 };					// Color background
GLfloat mat_diffuse[] = { 0.0, 1.0, 0.0, 1.0 };					// Object Color main
GLfloat mat_specular[] = { 0.0, 1.0, 1.0, 1.0 };				// Specular color
GLfloat mat_shininess[] = { 100.0 };

GLfloat Diffuse[]= { 0.5f, 0.5f, 0.5f, 1.0f };				// Diffuse Light Values
GLfloat Specular[] = { 1.0, 1.0, 1.0, 1.0 };				// Specular Light Values
/*GLfloat Position[]= { 0.0f, 7.0f, -5.0f, 0.0f };			// Light Position
GLfloat Position2[]= { 0.0f, 0.0f, -5.0f, 1.0f };			// Light Position*/

CTexture text1;
CTexture text2;
CTexture text3;	//Flecha
CTexture text4;	//Pavimento
CTexture text5;	//Pasto01
CTexture text6;	//Casa01

CTexture parednaranja;

CTexture ladrillo;
CTexture pisobano;
CTexture paredbano;
CTexture duela;
CTexture puertabano;
CTexture puertavidrio;

CTexture ventana;
CTexture ventana1;
CTexture marmol2;
CTexture marmol3;

CTexture baile;
CTexture tree;
CTexture edificio;
CTexture tronco;
CTexture pinol;
CTexture esfera1;
CTexture esfera2;
CTexture esfera3;

CTexture lavamanosfrente;
CTexture lavamanoslado;
CTexture lavamanosarriba;
CTexture jacuzzilado;
CTexture jacuzziarriba;


CTexture t_Ajedrez1;
CTexture t_Ajedrez2;
CTexture t_metal01;
CTexture t_toalla;
CTexture t_Dado;
CTexture madera;
CTexture tapete;

CTexture camaarriba;
CTexture camalado;

CTexture puertamaderatrasera;
CTexture puertamaderafrente;

CTexture casaext;
CTexture pas;
CTexture parec;
CTexture pirec;
CTexture t_metal_mesa;
CTexture t_madera_mesa;
CTexture teepee;
CTexture almohada;
CTexture colcha;
CTexture puerta;
CTexture pacocina;
CTexture buro;
CTexture estante;
CTexture madera_estante;
CTexture comida;
CTexture sillon;
CTexture t_cpu;
CTexture t_cpu2;
CTexture t_monitor;
CTexture escritorio;
CTexture rack;
CTexture librero;
CTexture puertabalcon;
CTexture pisobalcon;
CTexture rejabalcon;
CTexture refri;
CTexture gris;
CTexture kitchen;
CTexture texpuerta_entrada;
CTexture shelf;
CTexture alberca;
CTexture agua;
CTexture cielo2;

CFiguras esfera;
CFiguras cilindro;
CFiguras cono;
CFiguras cubo;
CFiguras sky;

//END NEW//////////////////////////////////////////


CFiguras fig1;
CFiguras fig2;
CFiguras fig3;
CFiguras fig4;	//Pasto01
CFiguras fig5;	//Casa01
CFiguras fig6;
CFiguras fig7;	//Para crear Monito
CFiguras f_fig;

CModel wc;

void sonido()
{
	PlaySound(TEXT("Bass.wav"), NULL, SND_ASYNC | SND_LOOP);
}

void sonido2() {
	if (ani)
	{
		PlaySound(TEXT("telefono.wav"), NULL, SND_ASYNC | SND_LOOP);
	}
	else
	{
		PlaySound(NULL, NULL, 0);
	}
}
void sonido3() {
	if (ani2)
	{
		PlaySound(TEXT("timbre.wav"), NULL, SND_ASYNC | SND_LOOP);
	}
	else
	{
		PlaySound(NULL, NULL, 0);
	}
}
void ciudad ()
{
    
    glPushMatrix(); //Camino1
    glTranslatef(23.5,0.0,0.0);
    glScalef(40,0.1,7);
    glDisable(GL_LIGHTING);
    fig3.prisma2(text4.GLindex, 0);
    glEnable(GL_LIGHTING);
    glPopMatrix();
    
    glPushMatrix(); //Camino2
    glTranslatef(-23.5,0.0,0.0);
    glScalef(40,0.1,7);
    glDisable(GL_LIGHTING);
    fig3.prisma2(text4.GLindex, 0);
    glEnable(GL_LIGHTING);
    glPopMatrix();
    
    glPushMatrix(); //Pasto
    glTranslatef(0.0,0.0,-4.0);
    glScalef(87,0.1,1);
    glDisable(GL_LIGHTING);
    fig4.prisma2(text5.GLindex, 0);
    glEnable(GL_LIGHTING);
    glPopMatrix();
    
    glPushMatrix(); //Pasto
    glTranslatef(0.0,0.0,4.0);
    glScalef(87,0.1,1);
    glDisable(GL_LIGHTING);
    fig4.prisma2(text5.GLindex, 0);
    glEnable(GL_LIGHTING);
    glPopMatrix();
    
    glPushMatrix(); //Casa01
    glTranslatef(0.0,3.0,7.0);
    glRotatef(90,1,0,0);
    glRotatef(180,0,0,1);
    glScalef(6,5.0,6);
    glDisable(GL_LIGHTING);
    fig5.prisma2(text6.GLindex, 0);
    glEnable(GL_LIGHTING);
    glPopMatrix();
    
    glPushMatrix(); //Casa01
    glTranslatef(0.0,3.0,-7.0);
    glRotatef(90,1,0,0);
    //glRotatef(180,0,0,1);
    glScalef(6,5.0,6);
    glDisable(GL_LIGHTING);
    fig5.prisma2(text6.GLindex, 0);
    glEnable(GL_LIGHTING);
    glPopMatrix();
}

void wc1() {
	glDisable(GL_COLOR_MATERIAL);
	/*glRotatef(180,0,0,1);
	glRotatef(-90,1,0,0);*/
	glScalef(0.03, 0.03, 0.03);
	wc.GLrender(NULL, _SHADED, 1.0);
}

void prisma(void)
{
    GLfloat vertice [8][3] = {
        {0.5 ,-0.5, 0.5},    //Coordenadas VÈrtice 0 V0
        {-0.5 ,-0.5, 0.5},    //Coordenadas VÈrtice 1 V1
        {-0.5 ,-0.5, -0.5},    //Coordenadas VÈrtice 2 V2
        {0.5 ,-0.5, -0.5},    //Coordenadas VÈrtice 3 V3
        {0.5 ,0.5, 0.5},    //Coordenadas VÈrtice 4 V4
        {0.5 ,0.5, -0.5},    //Coordenadas VÈrtice 5 V5
        {-0.5 ,0.5, -0.5},    //Coordenadas VÈrtice 6 V6
        {-0.5 ,0.5, 0.5},    //Coordenadas VÈrtice 7 V7
				};
    
    glBegin(GL_POLYGON);	//Front
    glNormal3f( 0.0f, 0.0f, 1.0f);
    glVertex3fv(vertice[0]);
    glVertex3fv(vertice[4]);
    glVertex3fv(vertice[7]);
    glVertex3fv(vertice[1]);
    glEnd();
    
    glBegin(GL_POLYGON);	//Right
    glNormal3f( 1.0f, 0.0f, 0.0f);
    glVertex3fv(vertice[0]);
    glVertex3fv(vertice[3]);
    glVertex3fv(vertice[5]);
    glVertex3fv(vertice[4]);
    glEnd();
    
    glBegin(GL_POLYGON);	//Back
    glNormal3f( 0.0f, 0.0f, -1.0f);
    glVertex3fv(vertice[6]);
    glVertex3fv(vertice[5]);
    glVertex3fv(vertice[3]);
    glVertex3fv(vertice[2]);
    glEnd();

    glBegin(GL_POLYGON);  //Left
    glNormal3f( -1.0f, 0.0f, 0.0f);
    glVertex3fv(vertice[1]);
    glVertex3fv(vertice[7]);
    glVertex3fv(vertice[6]);
    glVertex3fv(vertice[2]);
    glEnd();
    
    glBegin(GL_POLYGON);  //Bottom
    glNormal3f( 0.0f, -1.0f, 0.0f);
    glVertex3fv(vertice[0]);
    glVertex3fv(vertice[1]);
    glVertex3fv(vertice[2]);
    glVertex3fv(vertice[3]);
    glEnd();
    
    glBegin(GL_POLYGON);  //Top
    glNormal3f( 0.0f, 1.0f, 0.0f);
    glVertex3fv(vertice[4]);
    glVertex3fv(vertice[5]);
    glVertex3fv(vertice[6]);
    glVertex3fv(vertice[7]);
    glEnd();
}

void arbol()
{
    glPushMatrix();
    glDisable(GL_LIGHTING);
    glEnable( GL_ALPHA_TEST );
    //glDisable(GL_DEPTH_TEST);   // Turn Depth Testing Off
    glAlphaFunc( GL_GREATER, 0.1 );
    //glEnable(GL_BLEND);     // Turn Blending On
    //glBlendFunc(GL_SRC_ALPHA,GL_ONE_MINUS_SRC_ALPHA);
    glBindTexture(GL_TEXTURE_2D, tree.GLindex);
    glBegin(GL_QUADS); //plano
    glColor3f(1.0, 1.0, 1.0);
    glNormal3f( 0.0f, 0.0f, 1.0f);
    glTexCoord2f(0.0f, 0.0f); glVertex3f(-10.0, 0.0, 0.0);
    glTexCoord2f(1.0f, 0.0f); glVertex3f(10.0, 0.0, 0.0);
    glTexCoord2f(1.0f, 1.0f); glVertex3f(10.0, 20.0, 0.0);
    glTexCoord2f(0.0f, 1.0f); glVertex3f(-10.0, 20.0, 0.0);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glRotatef(45, 0, 1, 0);
    glBegin(GL_QUADS); //plano
    glColor3f(1.0, 1.0, 1.0);
    glNormal3f( 0.0f, 0.0f, 1.0f);
    glTexCoord2f(0.0f, 0.0f); glVertex3f(-10.0, 0.0, 0.0);
    glTexCoord2f(1.0f, 0.0f); glVertex3f(10.0, 0.0, 0.0);
    glTexCoord2f(1.0f, 1.0f); glVertex3f(10.0, 20.0, 0.0);
    glTexCoord2f(0.0f, 1.0f); glVertex3f(-10.0, 20.0, 0.0);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glRotatef(-45, 0, 1, 0);
    glBegin(GL_QUADS); //plano
    glColor3f(1.0, 1.0, 1.0);
    glNormal3f( 0.0f, 0.0f, 1.0f);
    glTexCoord2f(0.0f, 0.0f); glVertex3f(-10.0, 0.0, 0.0);
    glTexCoord2f(1.0f, 0.0f); glVertex3f(10.0, 0.0, 0.0);
    glTexCoord2f(1.0f, 1.0f); glVertex3f(10.0, 20.0, 0.0);
    glTexCoord2f(0.0f, 1.0f); glVertex3f(-10.0, 20.0, 0.0);
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glRotatef(90, 0, 1, 0);
    glBegin(GL_QUADS); //plano
    glColor3f(1.0, 1.0, 1.0);
    glNormal3f( 0.0f, 0.0f, 1.0f);
    glTexCoord2f(0.0f, 0.0f); glVertex3f(-10.0, 0.0, 0.0);
    glTexCoord2f(1.0f, 0.0f); glVertex3f(10.0, 0.0, 0.0);
    glTexCoord2f(1.0f, 1.0f); glVertex3f(10.0, 20.0, 0.0);
    glTexCoord2f(0.0f, 1.0f); glVertex3f(-10.0, 20.0, 0.0);
    glEnd();
    glDisable( GL_ALPHA_TEST );
    //glDisable(GL_BLEND);        // Turn Blending Off
    //glEnable(GL_DEPTH_TEST);    // Turn Depth Testing On
    glEnable(GL_LIGHTING);
				
    glPopMatrix();
}

GLuint createDL()
{
    GLuint ciudadDL;
    //GLuint cieloDL;
    
    // Create the id for the list
    ciudadDL = glGenLists(1);
    // start list
    glNewList(ciudadDL,GL_COMPILE);
    // call the function that contains
    // the rendering commands
    ciudad();
    //monito();
    // endList
    glEndList();
    
    return(ciudadDL);
}

void InitGL ( GLvoid )     // Inicializamos parametros
{
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);				// Negro de fondo
    
    glEnable(GL_TEXTURE_2D);
    
    
    
    glShadeModel (GL_SMOOTH);
    //Para construir la figura comentar esto
    glLightfv(GL_LIGHT1, GL_POSITION, Position);
    glLightfv(GL_LIGHT1, GL_DIFFUSE, Diffuse);
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
    
    
    //Configuracion luz
    glLightfv(GL_LIGHT0, GL_POSITION, Position);
    glLightfv(GL_LIGHT0, GL_SPOT_DIRECTION, Position2);
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
    
    //glEnable(GL_LIGHTING); //habilitar luces
    glEnable(GL_LIGHT1);
    
    glDepthFunc(GL_LEQUAL);								// Tipo de Depth Testing a realizar
    //glEnable ( GL_COLOR_MATERIAL ); //habilitar colores
    glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);
    
    glDepthFunc(GL_LEQUAL);								// Tipo de Depth Testing a realizar
    glEnable ( GL_COLOR_MATERIAL );
    glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);
    
    
    glEnable ( GL_COLOR_MATERIAL );
    
    glClearDepth(1.0f);									// Configuramos Depth Buffer
    glEnable(GL_DEPTH_TEST);							// Habilitamos Depth Testing
    glDepthFunc(GL_LEQUAL);								// Tipo de Depth Testing a realizar
    glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);
    
    glEnable(GL_AUTO_NORMAL);
    glEnable(GL_NORMALIZE);
    
    text1.LoadBMP("01.bmp");
    text1.BuildGLTexture();
    text1.ReleaseImage();
    
    text2.LoadBMP("logopumas.bmp");
    text2.BuildGLTexture();
    text2.ReleaseImage();
    
    text3.LoadTGA("arrow.tga");
    text3.BuildGLTexture();
    text3.ReleaseImage();
    
    text4.LoadTGA("pavimento.tga");
    text4.BuildGLTexture();
    text4.ReleaseImage();

	cielo2.LoadTGA("sky.tga");
	cielo2.BuildGLTexture();
	cielo2.ReleaseImage();

	puertamaderafrente.LoadTGA("puertamaderafrente.tga");
	puertamaderafrente.BuildGLTexture();
	puertamaderafrente.ReleaseImage();

	puertamaderatrasera.LoadTGA("puertamadera.tga");
	puertamaderatrasera.BuildGLTexture();
	puertamaderatrasera.ReleaseImage();
    
    text5.LoadTGA("pasto01.tga");
    text5.BuildGLTexture();
    text5.ReleaseImage();
    
    text6.LoadTGA("casa01.tga");
    text6.BuildGLTexture();
    text6.ReleaseImage();
    
    
    tree.LoadTGA("tree01.tga");
    tree.BuildGLTexture();
    tree.ReleaseImage();
    
    baile.LoadTGA("baile.tga");
    baile.BuildGLTexture();
    baile.ReleaseImage();
    
    edificio.LoadTGA("edificio.tga");
    edificio.BuildGLTexture();
    edificio.ReleaseImage();
    
    t_Dado.LoadBMP("Cube04.bmp");
    t_Dado.BuildGLTexture();
    t_Dado.ReleaseImage();
    
    t_Ajedrez1.LoadTGA("01.tga");
    t_Ajedrez1.BuildGLTexture();
    t_Ajedrez1.ReleaseImage();
    
    t_metal01.LoadBMP("metal2.bmp");
    t_metal01.BuildGLTexture();
    t_metal01.ReleaseImage();
    
    madera.LoadTGA("madera.tga");
    madera.BuildGLTexture();
    madera.ReleaseImage();
    
    t_Ajedrez2.LoadTGA("02.tga");
    t_Ajedrez2.BuildGLTexture();
    t_Ajedrez2.ReleaseImage();
    
    esfera1.LoadTGA("esfera1.tga");
    esfera1.BuildGLTexture();
    esfera1.ReleaseImage();

	camalado.LoadTGA("camafrente.tga");
	camalado.BuildGLTexture();
	camalado.ReleaseImage();

	camaarriba.LoadTGA("camaarriba.tga");
	camaarriba.BuildGLTexture();
	camaarriba.ReleaseImage();
    
    esfera2.LoadTGA("esfera2.tga");
    esfera2.BuildGLTexture();
    esfera2.ReleaseImage();
    
    esfera3.LoadTGA("esfera3.tga");
    esfera3.BuildGLTexture();
    esfera3.ReleaseImage();
    
    pinol.LoadTGA("pinol.tga");
    pinol.BuildGLTexture();
    pinol.ReleaseImage();
    
    tronco.LoadTGA("tronco.tga");
    tronco.BuildGLTexture();
    tronco.ReleaseImage();
    
    casaext.LoadTGA("casaexterior.tga");
    casaext.BuildGLTexture();
    casaext.ReleaseImage();
    
    pas.LoadTGA("pasillo.tga");
    pas.BuildGLTexture();
    pas.ReleaseImage();

    parec.LoadTGA("recamara.tga");
    parec.BuildGLTexture();
    parec.ReleaseImage();
    
    pirec.LoadTGA("pisohab.tga");
    pirec.BuildGLTexture();
    pirec.ReleaseImage();

	marmol2.LoadTGA("marmol2.tga");
	marmol2.BuildGLTexture();
	marmol2.ReleaseImage();

	marmol3.LoadTGA("marmol3.tga");
	marmol3.BuildGLTexture();
	marmol3.ReleaseImage();

	pisobano.LoadTGA("pisob.tga");
	pisobano.BuildGLTexture();
	pisobano.ReleaseImage();

	paredbano.LoadTGA("paredb.tga");
	paredbano.BuildGLTexture();
	paredbano.ReleaseImage();

	puertabano.LoadTGA("puertabaño.tga");
	puertabano.BuildGLTexture();
	puertabano.ReleaseImage();

	puertavidrio.LoadTGA("puertavidrio.tga");
	puertavidrio.BuildGLTexture();
	puertavidrio.ReleaseImage();
    
	lavamanosfrente.LoadTGA("lavamanosfrente.tga");
	lavamanosfrente.BuildGLTexture();
	lavamanosfrente.ReleaseImage();

	lavamanosarriba.LoadTGA("lavamanosarriba.tga");
	lavamanosarriba.BuildGLTexture();
	lavamanosarriba.ReleaseImage();

	lavamanoslado.LoadTGA("lavamanoslado.tga");
	lavamanoslado.BuildGLTexture();
	lavamanoslado.ReleaseImage();

    t_metal_mesa.LoadTGA("metal_mesa.tga");
    t_metal_mesa.BuildGLTexture();
    t_metal_mesa.ReleaseImage();
    
    t_madera_mesa.LoadTGA("madera_mesa.tga");
    t_madera_mesa.BuildGLTexture();
    t_madera_mesa.ReleaseImage();
    
    teepee.LoadTGA("tapete.tga");
    teepee.BuildGLTexture();
    teepee.ReleaseImage();
    
    tapete.LoadTGA("taptee.tga");
    tapete.BuildGLTexture();
    tapete.ReleaseImage();
    
    almohada.LoadTGA("almohada.tga");
    almohada.BuildGLTexture();
    almohada.ReleaseImage();
    
    colcha.LoadTGA("cama.tga");
    colcha.BuildGLTexture();
    colcha.ReleaseImage();
    
	ventana.LoadTGA("ventana.tga");
	ventana.BuildGLTexture();
	ventana.ReleaseImage();

	ventana1.LoadTGA("ventana1.tga");
	ventana1.BuildGLTexture();
	ventana1.ReleaseImage();

    puerta.LoadTGA("puerta_d.tga");
    puerta.BuildGLTexture();
    puerta.ReleaseImage();
    
    pacocina.LoadTGA("paredcocina.tga");
    pacocina.BuildGLTexture();
    pacocina.ReleaseImage();
    
    buro.LoadTGA("buro.tga");
    buro.BuildGLTexture();
    buro.ReleaseImage();
    
    estante.LoadTGA("estante.tga");
    estante.BuildGLTexture();
    estante.ReleaseImage();
    
    madera_estante.LoadTGA("maderaestante.tga");
    madera_estante.BuildGLTexture();
    madera_estante.ReleaseImage();
    
    comida.LoadTGA("comida.tga");
    comida.BuildGLTexture();
    comida.ReleaseImage();
    
    sillon.LoadTGA("sillon.tga");
    sillon.BuildGLTexture();
    sillon.ReleaseImage();
    
    t_monitor.LoadTGA("fifa.tga");//
    t_monitor.BuildGLTexture();
    t_monitor.ReleaseImage();
    
    t_cpu.LoadTGA("t_cpu.tga");//
    t_cpu.BuildGLTexture();
    t_cpu.ReleaseImage();
    
    t_cpu2.LoadTGA("t_cpu2.tga");//
    t_cpu2.BuildGLTexture();
    t_cpu2.ReleaseImage();

	jacuzziarriba.LoadTGA("jacuzziarriba.tga");
	jacuzziarriba.BuildGLTexture();
	jacuzziarriba.ReleaseImage();

	jacuzzilado.LoadTGA("jacuzzilado.tga");
	jacuzzilado.BuildGLTexture();
	jacuzzilado.ReleaseImage();

	parednaranja.LoadTGA("paredint.tga");
	parednaranja.BuildGLTexture();
	parednaranja.ReleaseImage();
    
    escritorio.LoadTGA("escritorio.tga");
    escritorio.BuildGLTexture();
    escritorio.ReleaseImage();
    
    rack.LoadTGA("mueble.tga");
    rack.BuildGLTexture();
    rack.ReleaseImage();

	ladrillo.LoadTGA("piedra.tga");
	ladrillo.BuildGLTexture();
	ladrillo.ReleaseImage();
    
    librero.LoadTGA("librero.tga");
    librero.BuildGLTexture();
    librero.ReleaseImage();
    
    puertabalcon.LoadTGA("puerta transparente.tga");
    puertabalcon.BuildGLTexture();
    puertabalcon.ReleaseImage();
    
    pisobalcon.LoadTGA("pisobalcon.tga");
    pisobalcon.BuildGLTexture();
    pisobalcon.ReleaseImage();
    
    rejabalcon.LoadTGA("rejabal.tga");
    rejabalcon.BuildGLTexture();
    rejabalcon.ReleaseImage();
    
    refri.LoadTGA("refri.tga");
    refri.BuildGLTexture();
    refri.ReleaseImage();
    
    gris.LoadTGA("gris.tga");
    gris.BuildGLTexture();
    gris.ReleaseImage();
    
    kitchen.LoadTGA("kitchen.tga");
    kitchen.BuildGLTexture();
    kitchen.ReleaseImage();
    
    texpuerta_entrada.LoadTGA("puerta_entrada.tga");
    texpuerta_entrada.BuildGLTexture();
    texpuerta_entrada.ReleaseImage();
    
    shelf.LoadTGA("shelf.tga");
    shelf.BuildGLTexture();
    shelf.ReleaseImage();
    
    alberca.LoadTGA("alberca.tga");
    alberca.BuildGLTexture();
    alberca.ReleaseImage();
    
    agua.LoadTGA("water01original.tga");
    agua.BuildGLTexture();
    agua.ReleaseImage();

	wc._3dsLoad("hsdc00.3ds");
    
    //END NEW//////////////////////////////
    
    objCamera.Position_Camera(0,2.5f,3, 0,2.5f,0, 0, 1, 0);
    
    //NEW Crear una lista de dibujo
    ciudad_display_list = createDL();
    
}

void mano_robot(){
    // BRAZO DERECHO
    glPushMatrix();
    glPushMatrix();
    glTranslatef(-2.5, 2.5, 0.0);
    glRotatef(rot1, 0.0, 0.0, -1.0);    //hombro
    
    glTranslatef(-1.5,0.0,0.0);
    glPushMatrix();
    glScalef(3.0, 1.0, 1.0);
    glColor3f(1.0, 0.0, 1.0);
    prisma(); // Figura A
    glPopMatrix();
    
    glTranslatef(-1.5, 0.0, 0.0);          //Codo
    glRotatef(rot2, 0.0, -1.0, 0.0);
    
    glTranslatef(-1.25, 0.0, 0.0);
    glPushMatrix();
    glScalef(2.5, 1.0, 1.0);
    glColor3f(1.0, 1.0, 0.0);
    prisma();
    glPopMatrix();
    
    glTranslatef(-1.25, 0.0, 0.0);   //muÒeca
    glRotatef(rot3, 0.0, 0.0, -1.0);
    
    glTranslatef(-0.5, 0.0, 0.0);
    glPushMatrix();
    glScalef(1.0, 1.0, 1.0);
    glColor3f(0.0, 1.0, 1.0);
    prisma();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(-0.5, -0.35, 0.375); //pulgar
    glRotatef(rot4, 0.0, -1.0, 0.0);
    
    glTranslatef(-0.375, 0.0, 0.0);
    glPushMatrix();
				glScalef(0.75, 0.3, 0.25);
				glColor3f(0.0, 1.0, 1.0);
				prisma(); // PULGAR
    glPopMatrix();
    
    glTranslatef(-0.375, 0.0, 0.0);  //
    glRotatef(rot5, 0.0, -1.0, 0.0);
    glTranslatef(-0.25, 0.0, 0.0);
    glScalef(0.5, 0.3, 0.25);
    glColor3f(1.0, 0.5, 1.0);
    prisma(); // PULGAR2
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(-0.5, 0.35, 0.375);  //  indice
    glRotatef(rot4, 0.0, 0.0, 1.0);
    glTranslatef(-0.5, 0.0, 0.0);
    glPushMatrix();
    glScalef(1.0, 0.3, 0.25);
    glColor3f(0.0, 1.0, 1.0);
    prisma(); // INDICE
    glPopMatrix();

    glTranslatef(-0.5, 0.0, 0.0);
    glRotatef(rot5, 0.0, 0.0, 1.0);
    glTranslatef(-0.375, 0.0, 0.0);
    glScalef(0.75, 0.3, 0.25);
    glColor3f(1.0, 0.5, 1.0);
    prisma(); //
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(-0.5, 0.35, 0.0);
    glRotatef(rot4, 0.0, 0.0, 1.0);
    glTranslatef(-0.75, 0.0, 0.0);
    glPushMatrix();
    glScalef(1.5, 0.3, 0.25);
    glColor3f(0.0, 1.0, 1.0);
    prisma(); //
    glPopMatrix();

    glTranslatef(-0.75, 0.0, 0.0);
    glRotatef(rot5, 0.0, 0.0, 1.0);
    glTranslatef(-0.75, 0.0, 0.0);
    glScalef(1.5, 0.3, 0.25);
    glColor3f(1.0, 0.5, 1.0);
    prisma(); //
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.5, 0.35, -0.375);
    glRotatef(rot4, 0.0, 0.0, 1.0);
    glTranslatef(-0.75, 0.0, 0.0);
    glPushMatrix();
    glScalef(1.5, 0.3, 0.25);
    glColor3f(0.0, 1.0, 1.0);
    prisma();
    glPopMatrix();
    
    glTranslatef(-0.75, 0.0, 0.0);
    glRotatef(rot5, 0.0, 0.0, 1.0);
    glTranslatef(-0.5, 0.0, 0.0);
    glScalef(1.0, 0.3, 0.25);
    glColor3f(1.0, 0.5, 1.0);
    prisma();

    glPopMatrix();
    glPopMatrix();
    glPopMatrix();
}

void prisma_alberca(GLuint text, GLuint text2)  //Funcion creacion prisma
{
    
    GLfloat vertice [8][3] = {
        {0.5 ,-0.5, 0.5},    //Coordenadas VÈrtice 0 V0
        {-0.5 ,-0.5, 0.5},    //Coordenadas VÈrtice 1 V1
        {-0.5 ,-0.5, -0.5},    //Coordenadas VÈrtice 2 V2
        {0.5 ,-0.5, -0.5},    //Coordenadas VÈrtice 3 V3
        {0.5 ,0.5, 0.5},    //Coordenadas VÈrtice 4 V4
        {0.5 ,0.5, -0.5},    //Coordenadas VÈrtice 5 V5
        {-0.5 ,0.5, -0.5},    //Coordenadas VÈrtice 6 V6
        {-0.5 ,0.5, 0.5},    //Coordenadas VÈrtice 7 V7
				};
    
    
    glBindTexture(GL_TEXTURE_2D, text2);   // choose the texture to use.
    glBegin(GL_POLYGON);	//Front
    glColor3f(1.0,1.0,1.0);
    glNormal3f( 0.0f, 0.0f, 1.0f);
    glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[0]);
    glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[4]);
    glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[7]);
    glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[1]);
    glEnd();
    
    
    glBegin(GL_POLYGON);	//Right
    glNormal3f( -1.0f, -1.0f, -1.0f);
    glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[0]);
    glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[3]);
    glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[5]);
    glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[4]);
    glEnd();
    
    glBegin(GL_POLYGON);	//Back
    glNormal3f( -1.0f, -1.0f,-1.0f);
    glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[6]);
    glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[5]);
    glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[3]);
    glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[2]);
    glEnd();
    
    glBindTexture(GL_TEXTURE_2D, text2);   // choose the texture to use.
    glBegin(GL_POLYGON);  //Bottom
    glNormal3f( -1.0f, -1.0f, -1.0f);
    glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[0]);
    glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[1]);
    glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[2]);
    glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[3]);
    glEnd();
    
    glBindTexture(GL_TEXTURE_2D, text2);   // choose the texture to use.
    glBegin(GL_POLYGON);  //Top
    glNormal3f( 1.0f, 1.0f, 1.0f);
    glTexCoord2f(1.0, 0.0f); glVertex3fv(vertice[4]);
    glTexCoord2f(1.0, 1.0f); glVertex3fv(vertice[5]);
    glTexCoord2f(0.0, 1.0f); glVertex3fv(vertice[6]);
    glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[7]);
    glEnd();
    
    glBindTexture(GL_TEXTURE_2D, text);   // choose the texture to use.
    glBegin(GL_POLYGON);  //Left
    glNormal3f(1.0f, 1.0f, 1.0f);
    glTexCoord2f(1.0f + var, 0.0f + var); glVertex3fv(vertice[1]);
    glTexCoord2f(1.0f + var, 1.0f + var); glVertex3fv(vertice[7]);
    glTexCoord2f(0.0f + var, 1.0f + var); glVertex3fv(vertice[6]);
    glTexCoord2f(0.0f + var, 0.0f + var); glVertex3fv(vertice[2]);
    glEnd();
    
}
void sillon_red (){
    glPushMatrix();
    glTranslatef(-1.25, -1, 0);
    glScalef(2.0, 2.1, 1.5);
    fig1.prisma2(sillon.GLindex, sillon.GLindex);		//asiento
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(-1.25, 1.0, -0.45);
    glScalef(2.0, 2.0, 0.6);
    fig1.prisma2(sillon.GLindex, sillon.GLindex);		//respaldo central
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(-3.25, -1, 0);
    glScalef(2.0, 2.1, 1.5);
    fig1.prisma2(sillon.GLindex, sillon.GLindex);		//asiento derecha
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(-1.25, -1, 1.5);
    glScalef(2.0, 2.1, 1.5);
    fig1.prisma2(sillon.GLindex, sillon.GLindex);		//asiento derecha
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(-0.55, 1.0, 1.5);
    glRotatef(90, 0, 1, 0);
    glScalef(1.5, 2.0, 0.6);
    fig1.prisma2(sillon.GLindex, sillon.GLindex);		//respaldo derecho
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(-3.25, 1.0, -0.45);
    glScalef(2.0, 2.0, 0.6);
    fig1.prisma2(sillon.GLindex, sillon.GLindex);		//respaldo derecho
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(-0.55, 1.0, -0.0);
    glRotatef(90, 0, 1, 0);
    glScalef(1.5, 2.0, 0.6);
    fig1.prisma2(sillon.GLindex, sillon.GLindex);		//respaldo derecho
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(-5.25, 1.0, -0.45);
    glScalef(2.0, 2.0, 0.6);
    fig1.prisma2(sillon.GLindex, sillon.GLindex);		//respaldo derecho
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(-5.25, -1, 0);
    glScalef(2.0, 2.1, 1.5);
    fig1.prisma2(sillon.GLindex, sillon.GLindex);		//asiento derecha
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(-5.95, 1.0, -0.0);
    glRotatef(90, 0, 1, 0);
    glScalef(1.5, 2.0, 0.6);
    fig1.prisma2(sillon.GLindex, sillon.GLindex);		//respaldo izquierda
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(-5.25, -1, 1.5);
    glScalef(2.0, 2.1, 1.5);
    fig1.prisma2(sillon.GLindex, sillon.GLindex);		//asiento derecha
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(-5.95, 1.0, 1.5);
    glRotatef(90, 0, 1, 0);
    glScalef(1.5, 2.0, 0.6);
    fig1.prisma2(sillon.GLindex, sillon.GLindex);		//respaldo izquierda
    glPopMatrix();
}
void jacuzzi() {
	glPushMatrix();
	glScalef(1.4, 0.6, 1.1);
	glRotatef(180, 0.0, 1.0, 0.0);
	glDisable(GL_LIGHTING);
	fig6.prismacama(jacuzzilado.GLindex, jacuzzilado.GLindex, jacuzzilado.GLindex, jacuzziarriba.GLindex, jacuzzilado.GLindex);
	glEnable(GL_LIGHTING);
	glPopMatrix();
}

void monitor(GLuint textura1, GLuint textura2)  //Funcion creacion prisma
{

	GLfloat vertice[8][3] = {
		{ 0.5 ,-0.5, 0.5 },    //Coordenadas Vértice 0 V0
		{ -0.5 ,-0.5, 0.5 },    //Coordenadas Vértice 1 V1
		{ -0.5 ,-0.5, -0.5 },    //Coordenadas Vértice 2 V2
		{ 0.5 ,-0.5, -0.5 },    //Coordenadas Vértice 3 V3
		{ 0.5 ,0.5, 0.5 },    //Coordenadas Vértice 4 V4
		{ 0.5 ,0.5, -0.5 },    //Coordenadas Vértice 5 V5
		{ -0.5 ,0.5, -0.5 },    //Coordenadas Vértice 6 V6
		{ -0.5 ,0.5, 0.5 },    //Coordenadas Vértice 7 V7
	};

	glBindTexture(GL_TEXTURE_2D, textura1);
	glBegin(GL_POLYGON);    //Front
	glColor3f(1.0, 1.0, 1.0);
	glNormal3f(0.0f, 0.0f, 1.0f);
	glTexCoord2f(0.0, 0.0f); glVertex3fv(vertice[1]);
	glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[0]);
	glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[4]);
	glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[7]);
	glEnd();

	glBindTexture(GL_TEXTURE_2D, textura2);

	glBegin(GL_POLYGON);    //Back
	glNormal3f(0.0f, 0.0f, -1.0f);
	glTexCoord2f(0.66f, 0.73f); glVertex3fv(vertice[6]);
	glTexCoord2f(0.35, 0.73f); glVertex3fv(vertice[5]);
	glTexCoord2f(0.35f, 0.0f); glVertex3fv(vertice[3]);
	glTexCoord2f(0.66f, 0.0f); glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glNormal3f(-1.0f, 0.0f, 0.0f);
	glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[1]);
	glTexCoord2f(0.67, 0.0f); glVertex3fv(vertice[2]);
	glTexCoord2f(0.67, 0.37f); glVertex3fv(vertice[6]);
	glTexCoord2f(1.0f, 0.37f);  glVertex3fv(vertice[7]);


	glEnd();

	glBegin(GL_POLYGON);    //Right
	glNormal3f(1.0f, 0.0f, 0.0f);
	glTexCoord2f(0.0, 0.0f);  glVertex3fv(vertice[0]);
	glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[3]);
	glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[5]);
	glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom
	glNormal3f(0.0f, -1.0f, 0.0f);
	glTexCoord2f(0.0, 0.0f);      glVertex3fv(vertice[0]);
	glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[1]);
	glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[2]);
	glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[3]);
	glEnd();

	glBindTexture(GL_TEXTURE_2D, textura2);
	glBegin(GL_POLYGON);  //Top
	glNormal3f(0.0f, 1.0f, 0.0f);
	glTexCoord2f(0.0, 0.00f);  glVertex3fv(vertice[4]);
	glTexCoord2f(0.0, 1.0f); glVertex3fv(vertice[5]);
	glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[6]);
	glTexCoord2f(1.0, 1.0f);   glVertex3fv(vertice[7]);
	glEnd();
}
void computadora(){
    
    glPushMatrix();
    glTranslatef(0.0,-1.5,-2.0);
    glScalef(4.0,3.5,0.5);
    monitor(t_monitor.GLindex,t_cpu2.GLindex);//Pantalla
    glPopMatrix();
}

void refrigerador(){
    glPushMatrix();
    glTranslatef(0.0,-1.5,-2.0);
    glScalef(4.0,3.5,0.5);
    fig1.prisma3(refri.GLindex,gris.GLindex);//
    glPopMatrix();
}
void kichen_counter(){
    glPushMatrix();
    glTranslatef(0.0,-1.5,-2.0);
    glScalef(4.0,3.5,0.5);
    fig1.prisma3(kitchen.GLindex,gris.GLindex);//
    glPopMatrix();
}

void alberca_a(){
    glPushMatrix();
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glTranslatef(0.0,-1.5,-2.0);
    glScalef(4.0,3.5,0.5);
    prisma_alberca(agua.GLindex,alberca.GLindex);//
    glPopMatrix();
    glDisable(GL_BLEND);
}

void shelf_a(){
    glPushMatrix();
    glTranslatef(0.0,-1.5,-2.0);
    glScalef(4.0,3.5,0.5);
    fig1.prisma3(shelf.GLindex,0);//
    glPopMatrix();
}

void puerta_entrada(){
glPushMatrix();//Puerta
glTranslatef(0.0, -2.5, 11.0);
glBindTexture(GL_TEXTURE_2D, texpuerta_entrada.GLindex);
glEnable(GL_BLEND);
glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
glBegin(GL_POLYGON);
glNormal3f(0.0, 0.0, 1.0);
glColor3f(1.0, 1.0, 1.0);
glTexCoord2f(0.0 , 0.0 ); glVertex3f(-4.0, 0.0, 0.0 );//V1
glTexCoord2f(1.0 , 0.0 ); glVertex3f(4.0, 0.0, 0.0);//V2
glTexCoord2f(1.0 , 1.0 ); glVertex3f(4.0, 8.7, 0.0);//V3
glTexCoord2f(0.0 , 1.0 ); glVertex3f(-4.0, 8.7, 0.0);//V4
glEnd();
glPopMatrix();
glDisable(GL_BLEND);
}


void silla(){
    glPushMatrix();
    glTranslatef(-1.25, -1, 0);
    glScalef(2.0, 0.1, 1.5);
    f_fig.prisma2(t_madera_mesa.GLindex, t_madera_mesa.GLindex);		//asiento
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(-1.25, 0.0, -0.7);
    glScalef(2.0, 2.0, 0.1);
    f_fig.prisma2(t_madera_mesa.GLindex, t_madera_mesa.GLindex);		//respaldo
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(-2.2, -1.55, 0.5);
    glScalef(0.1, 1, 0.25);
    f_fig.prisma2(t_metal_mesa.GLindex, t_metal_mesa.GLindex);		//pata izquierda adelante
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(-2.2, -1.55, -0.5);
    glScalef(0.1, 1, 0.25);
    f_fig.prisma2(t_metal_mesa.GLindex, t_metal_mesa.GLindex);		//pata izquierda atras
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(-0.3, -1.55, 0.5);
    glScalef(0.1, 1, 0.25);
    f_fig.prisma2(t_metal_mesa.GLindex, t_metal_mesa.GLindex);		//pata derecha adelante
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(-0.3, -1.55, -0.5);
    glScalef(0.1, 1, 0.25);
    f_fig.prisma2(t_metal_mesa.GLindex, t_metal_mesa.GLindex);		//pata derecha atras
    glPopMatrix();
}

void silla_sala(){
    glPushMatrix();
    glTranslatef(-1.25, -1, 0);
    glScalef(2.0, 0.1, 1.5);
    f_fig.prisma2(escritorio.GLindex, escritorio.GLindex);		//asiento
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(-1.25, 0.0, -0.7);
    glScalef(2.0, 2.0, 0.1);
    f_fig.prisma2(escritorio.GLindex, escritorio.GLindex);		//respaldo
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(-2.2, -1.55, 0.5);
    glScalef(0.1, 1, 0.25);
    f_fig.prisma2(t_metal_mesa.GLindex, t_metal_mesa.GLindex);		//pata izquierda adelante
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(-2.2, -1.55, -0.5);
    glScalef(0.1, 1, 0.25);
    f_fig.prisma2(t_metal_mesa.GLindex, t_metal_mesa.GLindex);		//pata izquierda atras
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(-0.3, -1.55, 0.5);
    glScalef(0.1, 1, 0.25);
    f_fig.prisma2(t_metal_mesa.GLindex, t_metal_mesa.GLindex);		//pata derecha adelante
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(-0.3, -1.55, -0.5);
    glScalef(0.1, 1, 0.25);
    f_fig.prisma2(t_metal_mesa.GLindex, t_metal_mesa.GLindex);		//pata derecha atras
    glPopMatrix();
}
void mesa_sala(){
    glPushMatrix();
    glScalef(5, 0.1, 1);
    f_fig.prisma2(escritorio.GLindex, escritorio.GLindex);		//mesa
    glPopMatrix();
    
    glTranslatef(-2.45, -1.05, 0.0);
    glPushMatrix();
    glScalef(0.1, 2, 0.25);
    f_fig.prisma2(escritorio.GLindex, escritorio.GLindex);		//pata izquierda
    glPopMatrix();
    
    glTranslatef(2.5, 0, 0.0);
    glPushMatrix();
    glScalef(0.1, 2, 0.25);
    f_fig.prisma2(escritorio.GLindex, escritorio.GLindex);		//pata central
    glPopMatrix();
    
    glTranslatef(2.4, 0, 0.0);
    glPushMatrix();
    glScalef(0.1, 2, 0.25);
    f_fig.prisma2(escritorio.GLindex, escritorio.GLindex);		//pata derecha
    glPopMatrix();
    
    glTranslatef(-2.45, 0, -0.18);
    glPushMatrix();
    glScalef(5, 0.1, 0.1);
    f_fig.prisma2(t_metal_mesa.GLindex, t_metal_mesa.GLindex);		//largo central
    glPopMatrix();
    
}


void mesa(){
    glPushMatrix();
    glScalef(5, 0.1, 1);
    f_fig.prisma2(t_madera_mesa.GLindex, t_madera_mesa.GLindex);		//mesa
    glPopMatrix();
    
    glTranslatef(-2.45, -1.05, 0.0);
    glPushMatrix();
    glScalef(0.1, 2, 0.25);
    f_fig.prisma2(t_metal_mesa.GLindex, t_metal_mesa.GLindex);		//pata izquierda
    glPopMatrix();
    
    glTranslatef(2.5, 0, 0.0);
    glPushMatrix();
    glScalef(0.1, 2, 0.25);
    f_fig.prisma2(t_metal_mesa.GLindex, t_metal_mesa.GLindex);		//pata central
    glPopMatrix();
    
    glTranslatef(2.4, 0, 0.0);
    glPushMatrix();
    glScalef(0.1, 2, 0.25);
    f_fig.prisma2(t_metal_mesa.GLindex, t_metal_mesa.GLindex);		//pata derecha
    glPopMatrix();
    
    glTranslatef(-2.45, 0, -0.18);
    glPushMatrix();
    glScalef(5, 0.1, 0.1);
    f_fig.prisma2(t_metal_mesa.GLindex, t_metal_mesa.GLindex);		//largo central
    glPopMatrix();
    
}

void cama() {
	glPushMatrix();
	glScalef(2.0, 0.9, 2.0);
	glRotatef(180, 0.0, 1.0, 0.0);
	glDisable(GL_LIGHTING);
	fig6.prismacama(camalado.GLindex, camalado.GLindex, camalado.GLindex, camaarriba.GLindex, camalado.GLindex);
	glEnable(GL_LIGHTING);
	glPopMatrix();
}

void cama2() {
	glPushMatrix();
	glScalef(2.0, 0.9, 1.1);
	glRotatef(180, 0.0, 1.0, 0.0);
	glDisable(GL_LIGHTING);
	fig6.prismacama(camalado.GLindex, camalado.GLindex, camalado.GLindex, camaarriba.GLindex, camalado.GLindex);
	glEnable(GL_LIGHTING);
	glPopMatrix();
}

void mesa_cocina(){
    glPushMatrix();
    glScalef(5, 0.1, 10);
    fig1.prisma2(t_madera_mesa.GLindex, t_madera_mesa.GLindex);		//mesa
    glPopMatrix();
    
    glTranslatef(-2.4, -1.05, 4.75);
    glPushMatrix();
    glScalef(0.1, 2, 0.25);
    fig1.prisma2(t_metal_mesa.GLindex, t_metal_mesa.GLindex);		//pata izquierda
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(4.8, 0, 0.0);
    glScalef(0.1, 2, 0.25);
    fig1.prisma2(t_metal_mesa.GLindex, t_metal_mesa.GLindex);		//pata derecha
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(4.8, 0, -9.5);
    glScalef(0.1, 2, 0.25);
    fig1.prisma2(t_metal_mesa.GLindex, t_metal_mesa.GLindex);		//pata derecha
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(0, 0, -9.5);
    glScalef(0.1, 2, 0.25);
    fig1.prisma2(t_metal_mesa.GLindex, t_metal_mesa.GLindex);		//pata izquierda
    glPopMatrix();
    
}
void balcony_shelf(){
    glPushMatrix();
    glScalef(5, 0.1, 10);
    fig1.prisma2(t_madera_mesa.GLindex, t_madera_mesa.GLindex);		//madera
    glPopMatrix();
}

void mesa_balcon(){
    glPushMatrix();
    //glScalef(5, 0.1, 10);
    fig1.tapete(3, 5, 30, t_madera_mesa.GLindex);		//mesa
    glPopMatrix();
    
    glTranslatef(-2.4, -1.05, 2.75);
    glPushMatrix();
    glScalef(0.1, 2, 0.25);
    fig1.prisma2(t_metal_mesa.GLindex, t_metal_mesa.GLindex);		//pata izquierda
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(4.8, 0, 0.0);
    glScalef(0.1, 2, 0.25);
    fig1.prisma2(t_metal_mesa.GLindex, t_metal_mesa.GLindex);		//pata derecha
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(4.8, 0, -6.5);
    glScalef(0.1, 2, 0.25);
    fig1.prisma2(t_metal_mesa.GLindex, t_metal_mesa.GLindex);		//pata derecha
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(0, 0, -6.5);
    glScalef(0.1, 2, 0.25);
    fig1.prisma2(t_metal_mesa.GLindex, t_metal_mesa.GLindex);		//pata izquierda
    glPopMatrix();
    
}
void prisma_teepee (GLuint textura1, GLuint textura2)  //Funcion creacion prisma
{
    
    GLfloat vertice [9][3] = {
        {0.5 ,-0.5, 0.5},    //Coordenadas VÈrtice 0 V0
        {-0.5 ,-0.5, 0.5},    //Coordenadas VÈrtice 1 V1
        {-0.5 ,-0.5, -0.5},    //Coordenadas VÈrtice 2 V2
        {0.5 ,-0.5, -0.5},    //Coordenadas VÈrtice 3 V3
        {0.0 ,0.5, 0.0},    //Coordenadas VÈrtice 4 V4
        {0.0 ,0.5, -0.0},    //Coordenadas VÈrtice 5 V5
        {-0.0 ,0.5, -0.0},    //Coordenadas VÈrtice 6 V6
        {-0.0 ,0.5, 0.0},    //Coordenadas VÈrtice 7 V7
        {-0.0 ,-0.1, 0.25},    //Coordenadas VÈrtice 8 V8
				};
    
    
    glBindTexture(GL_TEXTURE_2D, textura2);   // choose the texture to use.
    glBegin(GL_POLYGON);	//Front1
    glColor3f(1.0,1.0,1.0);
    glNormal3f( 0.0f, 0.0f, 1.0f);
    glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[0]);
    glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[4]);
    glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[8]);
    
    glEnd();
    
    glBegin(GL_POLYGON);	//Front2
    glColor3f(1.0,1.0,1.0);
    glNormal3f( 0.0f, 0.0f, 1.0f);
    glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[4]);
    glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[8]);
    glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[1]);
    glEnd();
    
    glBegin(GL_POLYGON);	//Right
    glNormal3f( 1.0f, 0.0f, 0.0f);
    glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[0]);
    glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[3]);
    glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[5]);
    glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[4]);
    glEnd();
    
    glBegin(GL_POLYGON);	//Back
    glNormal3f( 0.0f, 0.0f,-1.0f);
    glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[6]);
    glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[5]);
    glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[3]);
    glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[2]);
    glEnd();
    
    glBegin(GL_POLYGON);  //Left
    glNormal3f(-1.0f, 0.0f, 0.0f);
    glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[1]);
    glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[7]);
    glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[6]);
    glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[2]);
    glEnd();
    
    glBegin(GL_POLYGON);  //Bottom
    glNormal3f( 0.0f,-1.0f, 0.0f);
    glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[0]);
    glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[1]);
    glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[2]);
    glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[3]);
    glEnd();
    
    glBindTexture(GL_TEXTURE_2D, textura1);   // choose the texture to use.
    glBegin(GL_POLYGON);  //Top
    glNormal3f( 0.0f, 1.0f, 0.0f);
    glTexCoord2f(1.0, 0.0f); glVertex3fv(vertice[4]);
    glTexCoord2f(1.0, 1.0f); glVertex3fv(vertice[5]);
    glTexCoord2f(0.0, 1.0f); glVertex3fv(vertice[6]);
    glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[7]);
    glEnd();
}

void lavamanos() {
	glPushMatrix();
	glScalef(0.6, 1.0, 0.6);
	glRotatef(180, 0.0, 1.0, 0.0);
	glDisable(GL_LIGHTING);
	fig6.prismacama(lavamanoslado.GLindex, lavamanosfrente.GLindex, lavamanoslado.GLindex, lavamanosarriba.GLindex, lavamanoslado.GLindex);
	glEnable(GL_LIGHTING);
	glPopMatrix();
}
void pintaTexto(float x, float y, float z, void *font,char *string)
{
    
    char *c;     //Almacena los caracteres a escribir
    glRasterPos3f(x, y, z);	//Posicion apartir del centro de la ventana
    //glWindowPos2i(150,100);
    for (c=string; *c != '\0'; c++) //Condicion de fin de cadena
    {
        glutBitmapCharacter(font, *c); //imprime
    }
}
void banito() {
	glPushMatrix();//bath
	glPushMatrix();
	glTranslatef(-1.9, 1.5, 3.0);//pared derecha wc 1
								 //glRotatef(90,1,0,0);
	glRotatef(-90, 0, 1, 0);
	glScalef(1.0, 1.0, 0.2);
	glDisable(GL_LIGHTING);
	fig3.prisma2(paredbano.GLindex, paredbano.GLindex);
	glEnable(GL_LIGHTING);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(-1.9, 0.0, 3.0);//pared derecha wc 2
								 //glRotatef(90,1,0,0);
	glRotatef(-90, 0, 1, 0);
	glScalef(1.0, 2.0, 0.2);
	glDisable(GL_LIGHTING);
	fig3.prisma2(paredbano.GLindex, paredbano.GLindex);
	glEnable(GL_LIGHTING);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(-1.9, -1.5, 3.0);//pared derecha wc 3
								  //glRotatef(90,1,0,0);
	glRotatef(-90, 0, 1, 0);
	glScalef(1.0, 1.0, 0.2);
	glDisable(GL_LIGHTING);
	fig3.prisma2(paredbano.GLindex, paredbano.GLindex);
	glEnable(GL_LIGHTING);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(-1.9, 1.5, 4.5);//pared arriba derecha bath
								 //glRotatef(90,1,0,0);
	glRotatef(-90, 0, 1, 0);
	glScalef(2.0, 1.0, 0.2);
	glDisable(GL_LIGHTING);
	fig3.prisma2(paredbano.GLindex, paredbano.GLindex);
	glEnable(GL_LIGHTING);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(-1.9, -1.5, 4.5);//pared abajo derecha bath
								  //glRotatef(90,1,0,0);
	glRotatef(-90, 0, 1, 0);
	glScalef(2.0, 1.0, 0.2);
	glDisable(GL_LIGHTING);
	fig3.prisma2(paredbano.GLindex, paredbano.GLindex);
	glEnable(GL_LIGHTING);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(-1.9, 0.0, 5.75);//pared central 1 derecha bath
								  //glRotatef(90,1,0,0);
	glRotatef(-90, 0, 1, 0);
	glScalef(0.5, 2.0, 0.2);
	glDisable(GL_LIGHTING);
	fig3.prisma2(paredbano.GLindex, paredbano.GLindex);
	glEnable(GL_LIGHTING);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(-1.9, 0.0, 4.75);//pared  ventana 1
								  //glRotatef(90,1,0,0);
	glRotatef(-90, 0, 1, 0);
	glScalef(1.5, 2.0, 0.2);
	glDisable(GL_LIGHTING);
	fig3.prisma2(ventana.GLindex, ventana1.GLindex);
	glEnable(GL_LIGHTING);
	//glDisable(GL_BLEND);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(-1.9, 0.0, 3.75);//pared central 2 derecha bath
								  //glRotatef(90,1,0,0);
	glRotatef(-90, 0, 1, 0);
	glScalef(0.5, 2.0, 0.2);
	glDisable(GL_LIGHTING);
	fig3.prisma2(paredbano.GLindex, paredbano.GLindex);
	glEnable(GL_LIGHTING);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(-0.5, 0.0, 2.4);//pared delantera
								 //glRotatef(90,1,0,0);
								 //glRotatef(180,0,1,0);
	glScalef(3.0, 4.0, 0.2);
	glDisable(GL_LIGHTING);
	fig3.prisma2(paredbano.GLindex, paredbano.GLindex);
	glEnable(GL_LIGHTING);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0.9, 0.0, 4.5);//pared izquierdaBATH 1
								//glRotatef(90,1,0,0);
	glRotatef(90, 0, 1, 0);
	glScalef(2.0, 4.0, 0.2);
	glDisable(GL_LIGHTING);
	fig3.prisma2(paredbano.GLindex, paredbano.GLindex);
	glEnable(GL_LIGHTING);
	glPopMatrix();
	glPushMatrix(); //puerta
	glTranslatef(0.9, -0.5, 3.5);
	//glRotatef(90,1,0,0);
	if (respuesta8)
	{
		if (a<400)
		{
			if (a<200)
			{
				giro9 -= 0.45;
				glRotatef(giro9, 0, 1, 0);
				a = a + 1;
			}
			else
			{
				giro9 += 0.45;
				glRotatef(giro9, 0, 1, 0);
				a = a + 1;
			}
		}
		else
		{
			giro9 = 0.0;
			a = 0;
		}

	}
	else
	{
		giro9 = 0.0;
		a = 0;
	}
	glTranslatef(0.0, 0.0, -0.5);
	glRotatef(90, 0, 1, 0);
	glScalef(1.0, 3.0, 0.2);
	glDisable(GL_LIGHTING);
	fig3.prisma2(paredbano.GLindex, paredbano.GLindex);
	glEnable(GL_LIGHTING);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0.9, 1.5, 4.0);//pared arriba puerta BATH 
								//glRotatef(90,1,0,0);
	glRotatef(90, 0, 1, 0);
	glScalef(3.0, 1.0, 0.2);
	glDisable(GL_LIGHTING);
	fig3.prisma2(paredbano.GLindex, paredbano.GLindex);
	glEnable(GL_LIGHTING);
	glPopMatrix();
	glPopMatrix();

	glPushMatrix();//piso baño
	glTranslatef(-0.5, -2.1, 4.0);
	glRotatef(90,0,1,0);
	//glRotatef(180, 0, 1, 0);
	glScalef(3.0, 0.2, 3.0);
	glDisable(GL_LIGHTING);
	fig3.prisma2(pisobano.GLindex, pisobano.GLindex);
	glEnable(GL_LIGHTING);
	glPopMatrix();

	glPushMatrix();//techo baño
	glTranslatef(-0.5, 2.0, 4.0);
	glRotatef(90, 0, 1, 0);
	//glRotatef(180, 0, 1, 0);
	glScalef(3.0, 0.2, 3.0);
	glDisable(GL_LIGHTING);
	fig3.prisma2(paredbano.GLindex, paredbano.GLindex);
	glEnable(GL_LIGHTING);
	glPopMatrix();


	//wc
	glPushMatrix();
	glColor3f(1, 1, 1);
	glTranslatef(-1.5, -1.95, 4.0);
	glRotatef(0, 0, 1, 0);
	glScalef(1, 1, 1);
	wc1();
	glPopMatrix();

	//Lavamanos
	glPushMatrix();
	glTranslatef(-1.5, -1.4, 5.0);
	glRotatef(0, 0, 1, 0);
	glScalef(1, 1.25, 1);
	lavamanos();
	glPopMatrix();

	//Jacuzzi
	glPushMatrix();
	glTranslatef(-0.5, -1.6, 3.0);
	glRotatef(0, 0, 1, 0);
	glScalef(1.6, 1.25, 1);
	jacuzzi();
	glPopMatrix();


	glPushMatrix();//puerta baño
	glTranslatef(desliza_puerta2, 0.0, 5.5);
	glRotatef(90, 1, 0, 0);
	//glRotatef(180, 0, 1, 0);
	glScalef(desliza_puerta1, 0.2, 4.0);
	glDisable(GL_LIGHTING);
	fig3.prisma2(puertabalcon.GLindex, puertabalcon.GLindex);
	glEnable(GL_LIGHTING);
	glPopMatrix();
	

}

void balconsito() {
	//BALCON

	glDisable(GL_LIGHTING);
	glPushMatrix();
	glTranslatef(-17.5, -2, 12);
	mesa_balcon();

	glPushMatrix();
	glTranslatef(-3, 1, -1);
	glRotatef(90, 0, 1, 0);
	silla();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-3, 1, -7);
	glRotatef(90, 0, 1, 0);
	silla();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(8, 1, -2);
	glRotatef(-90, 0, 1, 0);
	silla();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-15, 3, 0);
	balcony_shelf();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(22, 0, -6);
	glScalef(0.25, 0.5, 0.25);
	mesa_cocina();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(22, 0, 0);
	glScalef(0.25, 0.5, 0.25);
	mesa_cocina();
	glPopMatrix();
	glPopMatrix();
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glPushMatrix();
	glTranslatef(-17.5, 3, 13);
	fig1.balcon(14.9, 41.9, 17.9, rejabalcon.GLindex, pisobalcon.GLindex);
	glPopMatrix();
	glDisable(GL_BLEND);
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glPushMatrix();
	glTranslatef(desliza_puerta, 3, -20);
	fig1.puerta_balcon_d(14.9, 42.9, 47.6, puertabalcon.GLindex);
	glPopMatrix();
	glPushMatrix();
	glTranslatef(-17, 3, -20);
	fig1.puerta_balcon_i(14.9, 42.9, 47.9, puertabalcon.GLindex);
	glPopMatrix();
	glDisable(GL_BLEND);
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glPushMatrix();
	glTranslatef(-17.5, 3, 13);
	fig1.balcon(14.9, 41.9, 17.9, rejabalcon.GLindex, pisobalcon.GLindex);
	glPopMatrix();
	glDisable(GL_BLEND);

	glEnable(GL_LIGHTING);

}


void prisma (GLuint textura1, GLuint textura2)  //Funcion creacion prisma
{
    
    GLfloat vertice [8][3] = {
        {0.5 ,-0.5, 0.5},    //Coordenadas VÈrtice 0 V0
        {-0.5 ,-0.5, 0.5},    //Coordenadas VÈrtice 1 V1
        {-0.5 ,-0.5, -0.5},    //Coordenadas VÈrtice 2 V2
        {0.5 ,-0.5, -0.5},    //Coordenadas VÈrtice 3 V3
        {0.5 ,0.5, 0.5},    //Coordenadas VÈrtice 4 V4
        {0.5 ,0.5, -0.5},    //Coordenadas VÈrtice 5 V5
        {-0.5 ,0.5, -0.5},    //Coordenadas VÈrtice 6 V6
        {-0.5 ,0.5, 0.5},    //Coordenadas VÈrtice 7 V7
				};
    
    
    glBindTexture(GL_TEXTURE_2D, textura2);   // choose the texture to use.
    glBegin(GL_POLYGON);	//Front
    glColor3f(1.0,1.0,1.0);
    glNormal3f( 0.0f, 0.0f, 1.0f);
    glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[0]);
    glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[4]);
    glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[7]);
    glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[1]);
    glEnd();
    
    glBegin(GL_POLYGON);	//Right
    glNormal3f( 1.0f, 0.0f, 0.0f);
    glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[0]);
    glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[3]);
    glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[5]);
    glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[4]);
    glEnd();
    
    glBegin(GL_POLYGON);	//Back
    glNormal3f( 0.0f, 0.0f,-1.0f);
    glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[6]);
    glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[5]);
    glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[3]);
    glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[2]);
    glEnd();
    
    glBegin(GL_POLYGON);  //Left
    glNormal3f(-1.0f, 0.0f, 0.0f);
    glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[1]);
    glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[7]);
    glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[6]);
    glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[2]);
    glEnd();
    
    glBegin(GL_POLYGON);  //Bottom
    glNormal3f( 0.0f,-1.0f, 0.0f);
    glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[0]);
    glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[1]);
    glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[2]);
    glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[3]);
    glEnd();
    
    glBindTexture(GL_TEXTURE_2D, textura1);   // choose the texture to use.
    glBegin(GL_POLYGON);  //Top
    glNormal3f( 0.0f, 1.0f, 0.0f);
    glTexCoord2f(1.0, 0.0f); glVertex3fv(vertice[4]);
    glTexCoord2f(1.0, 1.0f); glVertex3fv(vertice[5]);
    glTexCoord2f(0.0, 1.0f); glVertex3fv(vertice[6]);
    glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[7]);
    glEnd();
}

/*void play()
{
    ALuint helloBuffer, helloSource;
    helloBuffer = alutCreateBufferHelloWorld ();
    alGenSources (1, &amp;helloSource);
    alSourcei (helloSource, AL_BUFFER, helloBuffer);
    alSourcePlay (helloSource);
    alutSleep (1);
    alutExit ();
}*/
void luces(void)
{
    //Configuracion luz
    glLightfv(GL_LIGHT1, GL_AMBIENT, LightAmbient);				// Setup The Ambient Light
    glLightfv(GL_LIGHT1, GL_DIFFUSE, LightDiffuse);				// Setup The Diffuse Light
    glLightfv(GL_LIGHT1, GL_SPECULAR, LightSpecular);				// Setup The Diffuse Light
    
    glLightfv(GL_LIGHT1, GL_POSITION, Position);				// Position The Light
    glLightfv(GL_LIGHT1, GL_SPOT_DIRECTION, Position2);			// Direction Of The Light
    //glLightfv(GL_LIGHT1, GL_POSITION,LightPosition);			// Position The Light
    //glLightfv(GL_LIGHT1, GL_SPOT_DIRECTION,LightDirection);	// Direction Of The Light
    
    
}

void display ( void )   // Creamos la funcion donde se dibuja
{
    glClear (GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    
    glLoadIdentity();
    
    
    glPushMatrix();
    glRotatef(g_lookupdown,1.0f,0,0);
    
    gluLookAt(	objCamera.mPos.x,  objCamera.mPos.y,  objCamera.mPos.z,
              objCamera.mView.x, objCamera.mView.y, objCamera.mView.z,
              objCamera.mUp.x,   objCamera.mUp.y,   objCamera.mUp.z);
    
    
    glPushMatrix();
    
    //Alberca
    glPushMatrix();
    glTranslatef(5, -12.5, 155);
    glScalef(25, 5, 55);
    glRotatef(-90, 0, 0, 1);
    alberca_a();
    glPopMatrix();

    glPushMatrix(); //Creamos cielo
				glDisable(GL_LIGHTING);
				glTranslatef(0,60,0);
    glColor3f(1, 1, 1);
				fig1.skybox(130.0, 130.0, 130.0,cielo2.GLindex);
				glEnable(GL_LIGHTING);
    glPopMatrix();
    
    
    //Suelo
    glPushMatrix();
    glTranslatef(0.0, -5.0, 0.0);
    glScalef(130.0, 1.0, 130);
    glColor3f(1.0, 1.0, 1.0);
    fig3.prisma3(text5.GLindex, text5.GLindex);
    glPopMatrix();




	//Cama
	glPushMatrix();
	glTranslatef(-30, -2.5, -3);
	glScalef(8, 3, 6);
	cama();
	glPopMatrix();


	//Baño

	glPushMatrix();
	glTranslatef(-17, 3, -68);
	glScalef(4, 3.5, 5);
	glRotatef(15, 0, 1, 0);
	banito();
	glPopMatrix();



    
    //BEDROOM
    
    
    luces();
    if (positional)
        glLightf(GL_LIGHT1, GL_SPOT_CUTOFF, LightAngle);			// Position The Light
    
    glPushMatrix();
    
    glTranslatef(0.0, 0.0, -5.0);
    
    glPushMatrix(); //Esfera que representa a nuestra fuente de Luz
    //Este cÛdigo es para que la fuente de luz gire
    glColor3f(1, 0, 0);
    glRotatef(spin, 1.0, 0.0, 0.0);
    glTranslatef(0.3, 0.0, 4.0);
    if (positional)
    {
        glLightfv(GL_LIGHT1, GL_POSITION, LightPosition);
        glLightfv(GL_LIGHT1, GL_SPOT_DIRECTION, LightDirection);
    }
    else
        glLightfv(GL_LIGHT1, GL_POSITION, LightPosition1);
    
    glPushMatrix();
				glDisable(GL_LIGHTING);
				//glColor3f(1.0, 1.0, 0.0);
    
				//glutSolidSphere(.07, 10, 10);
				if (!light)
                {
                    glDisable(GL_LIGHTING);
                }
                else
                {
                    glEnable(GL_LIGHTING);
                }
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();
    
    glColor3f(1, 1, 1);
    
    glPushMatrix();
    glTranslatef(35, 3, -35);
    fig1.prismacuarto(15, 24, 48, pas.GLindex,pas.GLindex);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(35, 3, -35);
    fig1.prisma_rec(14.9, 23.9, 47.9, parec.GLindex,parec.GLindex,pirec.GLindex);
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(27, -1.25, -58);
    glScalef(1, 1.5, 2);
    mesa(); //Escritorio
    
    glPushMatrix();
    glTranslatef(0, 1.1, 1.0);
    glRotatef(180, 0, 1, 0);
    silla(); //Silla Derecha
    
    glPushMatrix();
    glTranslatef(2.5, 0, 0);
    silla();  //Silla Izquierda
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(40, 2.1, -52);
    glScalef(13, 13, 13);
    prisma_teepee(teepee.GLindex, teepee.GLindex);
    
    glPushMatrix();
    glTranslatef(0, -0.485, 0);
    fig1.tapete(1, 0.5, 10, tapete.GLindex);
    glPopMatrix();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(44.4, -2.75, -17.75);
    glScalef(5, 3, 12);
    fig1.prisma3(colcha.GLindex, colcha.GLindex);
    
    glPushMatrix();
    glTranslatef(0, 0.75, 0.375);
    glScalef(1, 0.5, 0.25);
    fig1.prisma3(almohada.GLindex, almohada.GLindex);
    glPopMatrix();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(47.1, 3, -26.5);
    glRotatef(-90, 0, 1, 0);
    fig1.marco(15.0,30.9,47.9, parec.GLindex);
    
    glPushMatrix();
    glTranslatef(-27.5, 0, 0);
    fig1.marco(15.0,10,47.9, parec.GLindex);
    
    glPopMatrix();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(34.3, 3, -53.9);
    glRotatef(-giro_puertaB, 0, 1, 0);
    glTranslatef(-7.5, 0, 8.9);
    fig1.puerta(15.0, 7.5, 8.9, puerta.GLindex);
    glPopMatrix();
    
    //COCINA
    glPushMatrix();
    glTranslatef(7, 3, -35);
    fig1.prisma2c(15, 34, 48, pas.GLindex,pas.GLindex);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(13, 3, -35);
    fig1.marco2(15, 20, 48, pas.GLindex);
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(12.5, 3, -35);
    fig1.marco2(14.9, 19.9, 47.9, pacocina.GLindex);
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(6.5, 3, -35);
    fig1.prisma_cocina(14.9, 33.9, 47.9, pacocina.GLindex,pacocina.GLindex,pirec.GLindex);
    
    glPushMatrix();
    glTranslatef(3, -5.25, 5);
    mesa_cocina();
    
    glPushMatrix();
    glTranslatef(15, 8.75, 20);
    glScalef(0.5, 3, 12);
    refrigerador();
    glPopMatrix();
    
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glPushMatrix();
    glTranslatef(15, 2.25, 64.5);
    glScalef(0.5, 1,29);
    kichen_counter();
    glPopMatrix();
    glDisable(GL_BLEND);
    
    glPushMatrix();
    glTranslatef(-1, 1, -3);
    glRotatef(90, 0, 1, 0);
    silla();
    glPushMatrix();
    glTranslatef(3, 0, 0);
    silla();
    glPushMatrix();
    glTranslatef(3, 0, 0);
    silla();
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();
    
    //glPushMatrix();
    glPushMatrix();
    glTranslatef(6, 1, -3);
    glRotatef(-90, 0, 1, 0);
    silla();
    
    glPushMatrix();
    glTranslatef(-3, 0, 0);
    silla();
    glPushMatrix();
    glTranslatef(6, 0, 0);
    silla();
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(47.09, 3, -26.5);
    glRotatef(-90, 0, 1, 0);
    fig1.marco(15.0,30.9,47.9, pacocina.GLindex);
    glPushMatrix();
    glTranslatef(-27.49, 0, 0);
    fig1.marco2(15.0,50,47.9, pacocina.GLindex);

    glPopMatrix();
    glPopMatrix();
    
    glPushMatrix();
    glScalef(15, 4, 2);
    glTranslatef(0.5, -0.60, -28.9);
    fig1.prisma_buro(pacocina.GLindex, buro.GLindex);
    glPopMatrix();
    
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glPushMatrix();
    glScalef(1, 4, 3);
    glTranslatef(-2, -0.60, -10.9);
    glRotatef(120, 0, 1, 0);
    fig1.prisma_buro(madera_estante.GLindex, estante.GLindex);
    glPopMatrix();
    glDisable(GL_BLEND);
    
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glPushMatrix();
    glScalef(1, 2, 0.5);
    glTranslatef(0.5, -0.2, -55);
    glRotatef(100, 0, 1, 0);
    mesa();
    glPushMatrix();
    glTranslatef(0, 2, 0);
    glScalef(4, 2, 0.75);
    fig1.prisma_buro(madera_estante.GLindex, comida.GLindex);
    glPopMatrix();
    glPopMatrix();
    glDisable(GL_BLEND);

    //LIVINGROOM
    glPushMatrix();
    glTranslatef(-23.5, 3, -35);
    fig1.prisma3c(15, 30, 48, pas.GLindex,pas.GLindex);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-24, 3, -35);
    fig1.marco_sala(15, 30, 48, pas.GLindex);
    glPopMatrix();


    
    glPushMatrix();
    glTranslatef(-23.5 , 3, -35);
    fig1.prisma_sala(14.9, 29.9, 47.9, pas.GLindex,pas.GLindex,pas.GLindex);
    
    glPushMatrix();
    glTranslatef(-2, -6.25, 8);
    glScalef(0.5, 0.5, 0.5);
    mesa_cocina();
    
    glPushMatrix();
    glTranslatef(15, 2.0, 5);
    glRotatef(-90, 0, 1, 0);
    glScalef(3, 1.6, 3);
    sillon_red();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(-21, 20, -8);
    glScalef(1,5, 7);
    glRotatef(90, 0, 1, 0);
    computadora();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(-15, 4, -50);
    glScalef(15, 2.5, 2);
    glRotatef(90, 0, 1, 0);
    mesa_sala();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(-5, 4, -50);
    glScalef(5, 2.5, 1.5);
    glRotatef(-90, 0, 1, 0);
    silla_sala();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(-5, 4, -45);
    glScalef(5, 2.5, 1.5);
    glRotatef(-90, 0, 1, 0);
    silla_sala();
    glPopMatrix();
    
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glPushMatrix();
    glTranslatef(-16, 3.75, -67.5);
    glScalef(10, 10, 2);
    fig1.prisma_buro(madera_estante.GLindex, rack.GLindex);
    glPopMatrix();
    glDisable(GL_BLEND);
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glPushMatrix();
    glTranslatef(-6, 3.75, -67.5);
    glScalef(10, 10, 2);
    fig1.prisma_buro(madera_estante.GLindex, rack.GLindex);
    glPopMatrix();
    glDisable(GL_BLEND);
    
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glPushMatrix();
    glTranslatef(47, 6.5, -7.5);
    glScalef(2, 15, 10);
    glRotatef(-90, 0, 1, 0);
    
    fig1.prisma_buro(0, librero.GLindex);
    glPopMatrix();
    glDisable(GL_BLEND);
    
    glPopMatrix();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(-23.5, 3, -20);
    fig1.prisma4c(15, 30, 48, pas.GLindex,pas.GLindex);
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(-23.5 , 3, -20);
    fig1.prisma_pasillo(14.9, 29.9, 47.9, pas.GLindex,pas.GLindex,pas.GLindex);
    glPopMatrix();
    
    
    //BALCON
    glPushMatrix();
    glTranslatef(-17.5 , -2, 12);
    mesa_balcon();
    
    glPushMatrix();
    glTranslatef(-3, 1, -1);
    glRotatef(90, 0, 1, 0);
    silla();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(-3, 1, -7);
    glRotatef(90, 0, 1, 0);
    silla();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(8, 1, -2);
    glRotatef(-90, 0, 1, 0);
    silla();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(-15, 3, 0);
    balcony_shelf();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(22, 0, -6);
    glScalef(0.25, 0.5, 0.25);
    mesa_cocina();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(22, 0, 0);
    glScalef(0.25, 0.5, 0.25);
    mesa_cocina();
    glPopMatrix();
    glPopMatrix();
    
    //Pasillo
    
    glPushMatrix();
    glTranslatef(12.5 , 3, -3.8);
    fig1.prisma_pasillo1(15, 20, 16.1, pas.GLindex,pas.GLindex);
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(12.5 , 3, -3.8);
    fig1.prisma_pasillo2(14.9, 19.9, 16, pas.GLindex,pas.GLindex);
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(33 , 3, -4);
    fig1.prisma_pasillo_derecho(15, 28, 17, pas.GLindex,pas.GLindex);
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(33 , 3, -4);
    fig1.prisma_pasillo_derecho(14.9, 27.9, 16.9, pas.GLindex,pas.GLindex);
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(33 , 3, 12.5);
    fig1.prisma_entrada(15, 28, 17, pas.GLindex,pas.GLindex);
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(33 , 3, 12.5);
    fig1.prisma_entrada(14.9, 27.9, 16.9, pas.GLindex,pas.GLindex);
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(20 , 5, 0.5);
    glRotatef(180, 0, 1, 0);
    glTranslatef(0, 0, 15);
    glScalef(0.25, 1, 15);
    shelf_a();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(31 , -0.2, 8.5);
    glRotatef(puerta_principal, 0, 1, 0);
    glTranslatef(0, 0, 5);
    glScalef(1, 1.7, 1);
    puerta_entrada();
    glPopMatrix();
    
    glPushMatrix();
    glTranslatef(-35, -4.25, -50);
    glRotatef(-90, 0, 0, 1);
    mano_robot();
    glPopMatrix();
    
    glColor3f(1, 1, 1);
    
	//Balcon Cuarto
	glPushMatrix();
	glTranslatef(43, 0.0, -55.0);
	glScalef(1, 1.0, 1.1);
	glRotatef(90, 0, 1, 0);
	balconsito();
	glPopMatrix();


    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glPushMatrix();
    glTranslatef(-17.5 , 3, 13);
    fig1.balcon(14.9, 41.9, 17.9, rejabalcon.GLindex,pisobalcon.GLindex);
    glPopMatrix();
    glDisable(GL_BLEND);
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glPushMatrix();
    glTranslatef(desliza_puerta , 3, -20);
    fig1.puerta_balcon_d(14.9, 42.9, 47.6, puertabalcon.GLindex);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-17 , 3, -20);
    fig1.puerta_balcon_i(14.9, 42.9, 47.9, puertabalcon.GLindex);
    glPopMatrix();
    glDisable(GL_BLEND);
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glPushMatrix();
    glTranslatef(-17.5 , 3, 13);
    fig1.balcon(14.9, 41.9, 17.9, rejabalcon.GLindex,pisobalcon.GLindex);
    glPopMatrix();
    glDisable(GL_BLEND);
    
    
    
    glColor3f(1.0, 1.0, 0.0);
    glPopMatrix();
    glPopMatrix();
    
    glutSwapBuffers ( );
    
}

void animacion()
{
    if (g_fanimacion) {
        if (rot1 <4)
        {
        rot1 += 0.25;
        rot2 += 2;
        rot3 += 1.5;
        }
        else if (rot1 <= 10){
            rot4  += 2;
            rot5 += 3;
            rot1 += 0.25;
        }
    }
    else{
        if (rot1 > 10) {
            rot4  = 0;
            rot3 = 0;
            rot2 = 0;
            rot5 = 0;
            rot1 = 0;
    }
    }
    if (rot1 <= 0.0)
        g_fanimacion = false;
    if (rot1 > 10.0)
        g_fanimacion = true;
    
    
    
    var += 0.0002;
    
    fig3.text_izq-= 0.001;
    fig3.text_der-= 0.001;
    if(fig3.text_izq<-1)
        fig3.text_izq=0;
    if(fig3.text_der<0)
        fig3.text_der=1;
    
    
    glutPostRedisplay();
}

void reshape ( int width , int height )   // Creamos funcion Reshape
{
    if (height==0)										// Prevenir division entre cero
    {
        height=1;
    }
    
    glViewport(0,0,width,height);
    
    glMatrixMode(GL_PROJECTION);						// Seleccionamos Projection Matrix
    glLoadIdentity();
    
    // Tipo de Vista
    
    glFrustum (-0.1, 0.1,-0.1, 0.1, 0.1, 170.0);
    
    glMatrixMode(GL_MODELVIEW);							// Seleccionamos Modelview Matrix
    glLoadIdentity();
}

void keyboard ( unsigned char key, int x, int y )  // Create Keyboard Function
{
    switch ( key ) {
            
        case 'w':   //Movimientos de camara
        case 'W':
            objCamera.Move_Camera( CAMERASPEED+0.2 );
            break;
            
        case 's':
        case 'S':
            objCamera.Move_Camera(-(CAMERASPEED+0.2));
            break;
            
        case 'a':
        case 'A':
            objCamera.Strafe_Camera(-(CAMERASPEED+0.4));
            break;
            
        case 'p':
            if (desliza_puerta > -38) {
                 desliza_puerta -= 5;
            }
           
            break;

        case 'P':
            if (desliza_puerta < -18) {
                desliza_puerta += 5;
            }
            
            break;

		case 'o':
			if (desliza_puerta1 > 0) {
				desliza_puerta1 -= 0.5;
				desliza_puerta2 -= 0.25 ;
			}

			break;

		case 'O':
			if (desliza_puerta1 < 3) {
				desliza_puerta1 += 0.5;
				desliza_puerta2 += 0.25;
			}

			break;
            
        case 'l':
            if (puerta_principal > -60) {
                puerta_principal -= 5;
            }
            
            break;
            
        case 'L':
            if (puerta_principal < -30) {
                puerta_principal += 5;
            }
            
            break;

            
        /*case 'p':
            play();
            break;*/
            
        case 'd':
        case 'D':
            objCamera.Strafe_Camera( CAMERASPEED+0.4 );
            break;
        case 'u':
        case 'U':
            objCamera.UpDown_Camera(CAMERASPEED);
            break;
            
        case 'j':
        case 'J':
            objCamera.UpDown_Camera(-CAMERASPEED);
            break;
            
        case 'R': // hombro
            if(rot1 > -100.0)
                rot1 -= 2.0f;
            break;
            
        case 'r':
            if(rot1 < 90.0)
                rot1 += 2.0f;
        break;
            
        case 'T': // codo
            if(rot2 > -85.0)
                rot2 -= 2.0f;
            break;
            
        case 't':
            if(rot2 < 5.0)
                rot2 += 2.0f;
            break;
            
        case 'Y': // muÒec
            if(rot3 > -70.0)
                rot3 -= 2.0f;
            break;

		case '1':
			sonido2();
			ani ^= true; //Activamos/desactivamos sonido
			break;
            
		case '2':
			sonido3();
			ani2 ^= true; //Activamos/desactivamos sonido
			break;

        case 'y':
            if(rot3 < 80.0)
                rot3 += 2.0f;
            break;
            
        case 'm': // dedo
            if(rot4 > -60.0)
                rot4 -= 2.0f;
            break;
            
        case 'M':
            if(rot4 < 90.0)
                rot4 += 2.0f;
            break;
            
        case 'I': //
            if(rot5 > -30.0)
                rot5 -= 2.0f;
            break;
            
        case 'i':
            if(rot5 <90.0)
                rot5 += 2.0f;
            break;
            
        case ' ':
            g_fanimacion ^= true;
            break;
            
        case 'z':   //Activamos/desactivamos luz
        case 'Z':
            light = !light;
            if (light == 0)
                printf("apagada\n");
            else
                printf("prendida\n");
            break;
            
        case 'x':   //Activamos/desactivamos luz
        case 'X':
            positional = !positional;
            if (positional == 1)
                printf("\n");
            else
                printf("\n");
            break;
        
        case 27:        // Cuando Esc es presionado...
            exit ( 0 );   // Salimos del programa
            break;
        default:        // Cualquier otra
            break;
    }
    
    glutPostRedisplay();
}

void arrow_keys ( int a_keys, int x, int y )  // Funcion para manejo de teclas especiales (arrow keys)
{
    switch ( a_keys ) {
        case GLUT_KEY_PAGE_UP:
            objCamera.UpDown_Camera(CAMERASPEED);
            break;
            
        case GLUT_KEY_PAGE_DOWN:
            objCamera.UpDown_Camera(-CAMERASPEED);
            break;
            
        case GLUT_KEY_UP:     // Presionamos tecla ARRIBA...
            g_lookupdown -= 1.0f;
            break;
            
        case GLUT_KEY_DOWN:               // Presionamos tecla ABAJO...
            g_lookupdown += 1.0f;
            break;
            
        case GLUT_KEY_LEFT:
            objCamera.Rotate_View(-CAMERASPEED);
            break;
            
        case GLUT_KEY_RIGHT:
            objCamera.Rotate_View( CAMERASPEED);
            break;
            
        default:
            break;
    }
    glutPostRedisplay();
}

int main ( int argc, char** argv )   // Main Function
{
    
    glutInit            (&argc, argv); // Inicializamos OpenGL
    glutInitDisplayMode (GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH); // Display Mode (Clores RGB y alpha | Buffer Doble )
    glutInitWindowSize  (500, 500);	// TamaÒo de la Ventana
    glutInitWindowPosition (0, 0);	//Posicion de la Ventana
    glutCreateWindow    ("Final"); // Nombre de la Ventana
    //glutFullScreen     ( );         // Full Screen
    InitGL ();						// Parametros iniciales de la aplicacion
    glutDisplayFunc     ( display );  //Indicamos a Glut funciÛn de dibujo
    glutReshapeFunc     ( reshape );	//Indicamos a Glut funciÛn en caso de cambio de tamano
    glutKeyboardFunc    ( keyboard );	//Indicamos a Glut funciÛn de manejo de teclado
    glutSpecialFunc     ( arrow_keys );	//Otras
    glutIdleFunc		  ( animacion );
    
    
    glutMainLoop        ( );          // 
    
    return 0;
}
