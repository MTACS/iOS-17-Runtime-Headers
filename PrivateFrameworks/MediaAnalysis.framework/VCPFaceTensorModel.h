
@interface VCPFaceTensorModel : NSObject {
    float * _blendShapeDelta;
    int * _blendshapeComponentIndex;
    float * _componentsBlendshape;
    float * _meanBlendshape;
    int  _numBlendshapePlusOne;
    int  _numComponents;
    int  _numIdentities;
    int  _numVertices;
    float * _tensorCoeff;
    float * _transformedCoeff;
}

@property (readonly) int*blendshapeComponentIndex;
@property (readonly) float*componentsBlendshape;
@property (readonly) float*meanBlendshape;
@property (readonly) int numVertices;
@property (readonly) float*tensorCoeff;

- (int*)blendshapeComponentIndex;
- (void)calculateMesh:(float*)arg1 numVertices:(int)arg2 blendshapes:(float*)arg3 outputMesh:(float*)arg4;
- (void)calculateModelBlendshapes:(float*)arg1 outputBlendshapes:(float*)arg2;
- (float*)componentsBlendshape;
- (void)dealloc;
- (id)initWithModelFile:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1;
- (float*)meanBlendshape;
- (int)numVertices;
- (float*)tensorCoeff;

@end
