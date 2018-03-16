#include "main.h"

//-----------------------------------------------------------------------------
void MyGlDraw(void)
{
	//*************************************************************************
	// Chame aqui as funções do mygl.h
	//*************************************************************************

    //Exemplo I
/*
    TypeColor c1, c2, c3 , c4, c5, c6, c7;

    //-----------------
    c1.R = 255;
    c1.G = 0;
    c1.B = 0;
    c1.A = 255;

    c2.R = 110;
    c2.G = 0;
    c2.B = 255;
    c2.A = 0;

    c3.R = 0;
    c3.G = 0;
    c3.B = 255;
    c3.A = 255;

    c4.R = 0;
    c4.G = 255;
    c4.B = 0;
    c4.A = 0;

    c5.R = 0;
    c5.G = 0;
    c5.B = 255;
    c5.A = 0;

    c6.R = 0;
    c6.G = 255;
    c6.B = 0;
    c6.A = 0;
    //-----------------

    TypePixel p1, p2, p3, p4, p5, p6, p7, p8, p9, p10;

    //-----------------
    p1.pX = 0;
    p1.pY = 0;
    p1.color = c1;
    //-----------------
    p2.pX = 1;
    p2.pY = 0;
    p2.color = c2;
    //-----------------
    p3.pX = 2;
    p3.pY = 0;
    p3.color = c3;
    //-----------------

    int cont = 1, inverte = 0;
    for(int i = 0; i < IMAGE_HEIGHT; i++){
        p1.pY = i;
        for(int j = 0; j < IMAGE_WIDTH; j++){
            p1.pX = j;
            switch(cont){
                case 1:
                    p1.color = c1;
                    PutPixel(p1);
                    cont++;
                    break;
                case 2:
                    p1.color = c2;
                    PutPixel(p1);
                    cont++;
                    break;
                case 3:
                    p1.color = c3;
                    PutPixel(p1);
                    cont++;
                    break;
                case 4:
                    p1.color = c4;
                    PutPixel(p1);
                    cont++;
                    break;
                case 5:
                    p1.color = c5;
                    PutPixel(p1);
                    cont++;
                    break;
                case 6:
                    p1.color = c6;
                    PutPixel(p1);
                    cont = 1;
                    break;
            }
        }
    }
    */
    /*
    PutPixel(p1);
    PutPixel(p2);
    PutPixel(p3);


    //**********************************************************************

    //Exemplo II

/*
    TypeColor c1, c2, c3;
    c1.R = 255;
    c1.G = 0;
    c1.B = 0;
    c1.A = 255;

    c2.R = 110;
    c2.G = 110;
    c2.B = 255;
    c2.A = 255;

    c3.R = 0;
    c3.G = 0;
    c3.B = 255;
    c3.A = 255;

    TypePixel p1, p2, p3, p4, p5, p6, p7, p8, p9, p10;
    //Formando um X
    p1.pX = 0;
    p1.pY = 0;
    p1.color = c1;

    p2.pX = IMAGE_HEIGHT/2;
    p2.pY = IMAGE_WIDTH/2;
    p2.color = c2;

    p3.pX = IMAGE_HEIGHT;
    p3.pY = 0;
    p3.color = c3;

    p4.pX = 0;
    p4.pY = IMAGE_WIDTH;
    p4.color = c1;

    p5.pX = IMAGE_HEIGHT;
    p5.pY = IMAGE_WIDTH;
    p5.color = c2;

    //----------------

    //Formando um +
    p6.pX = 0;
    p6.pY = IMAGE_WIDTH/2;
    p6.color = c3;

    p7.pX = IMAGE_HEIGHT/2;
    p7.pY = 0;
    p7.color = c1;

    p8.pX = IMAGE_HEIGHT;
    p8.pY = IMAGE_WIDTH/2;
    p8.color = c2;

    p9.pX = IMAGE_HEIGHT/2;
    p9.pY = IMAGE_WIDTH;
    p9.color = c3;
    //-----------------

    p10.pX = 250;
    p10.pY = 250;
    p10.color = c1;

    DrawLine(p1, p2);//Primeira
    DrawLine(p3, p2);//Segunda
    DrawLine(p4, p2);//Terceira
    DrawLine(p2, p5);//Quarta

    DrawLine(p6, p2);
    DrawLine(p7, p2);
    DrawLine(p8, p2);
    DrawLine(p9, p2);



    // TypeColor c1, c2, c3, c4, c5, c6, c7;
    c1.R = 255;
    c1.G = 0;
    c1.B = 0;
    c1.A = 255;

    c2.R = 110;
    c2.G = 110;
    c2.B = 255;
    c2.A = 255;

    c3.R = 0;
    c3.G = 0;
    c3.B = 255;
    c3.A = 255;

    c4.R = 0;
    c4.G = 255;
    c4.B = 0;
    c4.A = 255;

    c5.R = 0;
    c5.G = 0;
    c5.B = 255;
    c5.A = 0;

    c6.R = 0;
    c6.G = 255;
    c6.B = 0;
    c6.A = 0;

    c7.R = 0;
    c7.G = 0;
    c7.B = 0;
    c7.A = 0;

  //  TypePixel p1, p2, p3, p4, p5, p6, p7, p8, p9, p10;
    //Formando um X
    p1.pX = 0;
    p1.pY = 0;
    p1.color = c1;

    p2.pX = IMAGE_HEIGHT/2;
    p2.pY = IMAGE_WIDTH/2;
    p2.color = c2;

    p3.pX = IMAGE_HEIGHT;
    p3.pY = 0;
    p3.color = c3;

    p4.pX = 0;
    p4.pY = IMAGE_WIDTH;
    p4.color = c4;

    p5.pX = IMAGE_HEIGHT;
    p5.pY = IMAGE_WIDTH;
    p5.color = c5;

    //----------------

    //Formando um +
    p6.pX = 0;
    p6.pY = IMAGE_WIDTH/3;
    p6.color = c6;

    p7.pX = IMAGE_HEIGHT/2;
    p7.pY = 0;
    p7.color = c1;

    p8.pX = IMAGE_HEIGHT;
    p8.pY = IMAGE_WIDTH/3;
    p8.color = c2;

    p9.pX = IMAGE_HEIGHT/2;
    p9.pY = IMAGE_WIDTH;
    p9.color = c5;
    //-----------------

    p10.pX = 250;
    p10.pY = 250;
    p10.color = c1;

    //DrawLine(p1, p2);//Primeira
    //DrawLine(p3, p2);//Segunda
    DrawLine(p4, p2);//Terceira
    DrawLine(p5, p2);//Quarta

    DrawLine(p6, p2);
    DrawLine(p7, p2);
    DrawLine(p8, p2);
    //DrawLine(p9, p2);

    DrawLine(p7,p4);
    DrawLine(p4, p8);
    DrawLine(p6, p5);
    DrawLine(p5, p7);
    DrawLine(p6, p8);

    //int cont = 1, inverte = 0;
    for(int i = 0; i < IMAGE_HEIGHT; i++){
        p10.pY = i;
        for(int j = 0; j < IMAGE_WIDTH; j++){
            p10.pX = j;
            if((p10.color.R == 0.0)&&(p10.color.G == 0.0)&&(p10.color.B == 0.0)&&(p10.color.A == 0.0)){
                if(inverte == 0){
                    p10.color = c7;
                    PutPixel(p10);
                }else{
                    PutPixel(p1);
                }
            }
            if((p10.color.R != 0.0)&&(p10.color.G != 0.0)&&(p10.color.B != 0.0)&&(p10.color.A != 0.0)){
                cont++;
                if(cont == 1){
                    p10.color = c1;
                    PutPixel(p1);
                    inverte = 1;
                }else{
                    PutPixel(p10);
                    cont = 0;
                    inverte = 0;
                }
            }
            /*
            switch(cont){
                case 1:
                    p1.color = c1;
                    PutPixel(p1);
                    cont++;
                    break;
                case 2:
                    p1.color = c2;
                    PutPixel(p1);
                    cont++;
                    break;
                case 3:
                    p1.color = c3;
                    PutPixel(p1);
                    cont = 1;
                    break;
            }

        }
    }
/*
    /*
    TypePixel p1,p2;
    p1.color = c1;
    p2.color = c3;

    for(int i = 2; i < IMAGE_HEIGHT; ++i){
        p1.pX = 0;
        p1.pY = i;
        p2.pX = IMAGE_WIDTH;
        p2.pY = i;
		DrawLine(p1, p2);
	}

	p1.pX = (IMAGE_WIDTH/3);
	p1.pY = (IMAGE_HEIGHT * 2/3);
	p2.pX = (IMAGE_WIDTH * 2/3);
	p2.pY = (IMAGE_HEIGHT / 3);

	DrawLine(p1, p2);
	*/

    //******************************************

    //Exemplo III

    TypeColor c1, c2, c3, c4, c5, c6;
    c1.R = 0;
    c1.G = 50;
    c1.B = 45;
    c1.A = 70;

    c2.R = 0;
    c2.G = 255;
    c2.B = 255;
    c2.A = 0;

    c3.R = 255;
    c3.G = 0;
    c3.B = 255;
    c3.A = 0;

    c4.R = 0;
    c4.G = 150;
    c4.B = 0;
    c4.A = 0;

    c5.R = 0;
    c5.G = 0;
    c5.B = 255;
    c5.A = 0;

    c6.R = 255;
    c6.G = 0;
    c6.B = 0;
    c6.A = 0;

    TypePixel p1, p2, p3, p4, p5, p6;
    p1.pX = 32;
    p1.pY = 300;
    p1.color = c2;

    p2.pX = 200;
    p2.pY = 64;
    p2.color = c5;

    p3.pX = 430;
    p3.pY = 150;
    p3.color = c3;

    p4.pX = 200;
    p4.pY = 300;
    p4.color = c4;

    p5.pX = 256;
    p5.pY = 256;
    p5.color = c6;

    p6.pX = 512;
    p6.pY = 512;
    p6.color = c1;

    DrawTriangle(p1, p2, p3);
    //DrawTriangle(p1, p5, p6);
    DrawLine(p1,p6);
    DrawTriangle(p6, p2, p3);


    /*
    for(int i = 0; i < 30; i++){
        DrawTriangleColor(p1, p2, p3);
        p1.pX -= 2;
        p1.pY -= 2;
        p2.pX -= 2;
        p2.pY -= 2;
        p3.pX -= 2;
        p3.pY -= 2;
    }

    for(int i = 0; i < 50; i++){
        DrawTriangleColor(p4, p5, p6);
        p4.pX += 5;
        p4.pY += 5;
        p5.pX += 5;
        p5.pY += 5;
        p6.pX += 5;
        p6.pY += 5;
    }
    */

}

//-----------------------------------------------------------------------------
int main(int argc, char **argv)
{
	// Inicializações.
	InitOpenGL(&argc, argv);
	InitCallBacks();
	InitDataStructures();

	// Ajusta a função que chama as funções do mygl.h
	DrawFunc = MyGlDraw;

	// Framebuffer scan loop.
	glutMainLoop();

	return 0;
}

