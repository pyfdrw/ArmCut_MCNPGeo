//¸ì²²ÇÐ³ý³ÌÐò
#include "datastructure.h"

int main()
{
    FILE* mcnpfileA;
    char* inputpath;
    readMCNPFile(inputpath, &mcnpfileA);
    McnpFillStruct mcnpgeoA;
    storeGeo(mcnpfileA, mcnpgeoA);
    //Female
    //armCut(mcnpgeoA, -100, 26.3079, -100, 1000, -100, 100.97);
    //armCut(mcnpgeoA, -100, 33.4349, -100, 1000, 100.97, 109.176);
    //armCut(mcnpgeoA, -100, 35.5946, -100, 1000, 109.176, 117.383);

    //armCut(mcnpgeoA, 83.3241, 1000, -100, 1000, -100, 100.97);
    //armCut(mcnpgeoA, 75.9811, 1000, -100, 1000, 100.97, 109.176);
    //armCut(mcnpgeoA, 72.5735, 1000, -100, 1000, 109.176, 117.383);

    //Male
    armCut(mcnpgeoA, -100, 13.8673, -100, 1000, 55.3393, 95.4207);
    armCut(mcnpgeoA, -100, 16.225, -100, 1000,  95.4207, 108.297);
    armCut(mcnpgeoA, -100, 15.4996, -100, 1000, 108.297, 123.169);

	armCut(mcnpgeoA, 48.326, 1000, -100, 1000, 55.3393, 95.4207);
	armCut(mcnpgeoA, 46.875, 1000, -100, 1000, 95.4207, 108.297);
	armCut(mcnpgeoA, 47.782, 1000, -100, 1000, 108.297, 123.169);

	armCut(mcnpgeoA, 43.0464, 1000, -0, 9.605, 68, 77);

    // del 13 ~ 23
    for (int i = 0; i < mcnpgeoA.voxelcount; i++)
    {
        if ((*(mcnpgeoA.element + i) >= 13 && *(mcnpgeoA.element + i) <= 23) || \
            *(mcnpgeoA.element + i) == 11 || *(mcnpgeoA.element + i) == 104 ||    \
            *(mcnpgeoA.element + i) == 108)
        {
            *(mcnpgeoA.element + i) = 119;
        }
    }

    outputGeo(mcnpgeoA);
    return 0;
}
