//
// Created by ruoyan on 03.05.23.
//

#ifndef VTKMULTITEXTUREOBJECTHELPER__VTKMULTITEXTUREOBJECTHELPER_H_
#define VTKMULTITEXTUREOBJECTHELPER__VTKMULTITEXTUREOBJECTHELPER_H_

// VTK includes
#include <vtkTextureObject.h>

class vtkOpenGLHelper;

class VTKRENDERINGOPENGL2_EXPORT vtkMultiTextureObjectHelper : public vtkTextureObject {
public:
static vtkMultiTextureObjectHelper* New();
vtkTypeMacro(vtkMultiTextureObjectHelper, vtkTextureObject);
void PrintSelf(ostream& os, vtkIndent indent) override;

bool CreateSeq3DFromRaw(unsigned int width, unsigned int height, unsigned int depth,
                        int numComps, int dataType, void* data, int texUnit=0);
bool CreateSeq2DFromRaw(unsigned int width, unsigned int height, int numComps, int dataType, void* data,  int texUnit=0);

void CreateSeqTexture(int texUnit=0);

#endif //VTKMULTITEXTUREOBJECTHELPER__VTKMULTITEXTUREOBJECTHELPER_H_
