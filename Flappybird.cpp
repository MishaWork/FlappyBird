
#include "TXLib.h"

void Plane ();

int main()
    {
    txCreateWindow (1024, 576);

    Plane ();

    return 0;
    }

void Plane ()
    {
    HDC Plane = txLoadImage ("����.bmp");
    if (Plane == NULL) txMessageBox ("������ ������");

    while (1 < 2)
        {
        txAlphaBlend (txDC (), 0, 0, 0, 0, Plane);
        }
    }
