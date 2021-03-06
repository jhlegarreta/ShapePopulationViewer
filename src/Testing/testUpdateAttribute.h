#ifndef TESTUPDATEATTRIBUTE_H
#define TESTUPDATEATTRIBUTE_H


#include "../src/ShapePopulationBase.h"
#include <math.h>

class TestShapePopulationBase
{
public:
    TestShapePopulationBase();

    bool testUpdateAttribute(std::string filename, std::string filenameExpectedResult);
    bool checkingColorMap(int nbMesh, std::string filenameExpectedResult, const char* cmap_selectedMesches, const char* cmap_unSelectedMesches, std::vector<ShapePopulationData *> m_meshList, std::vector< unsigned int > m_selectedIndex);

};

#endif // TESTUPDATEATTRIBUTE_H
