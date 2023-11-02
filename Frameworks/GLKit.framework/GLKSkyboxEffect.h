
@interface GLKSkyboxEffect : NSObject <GLKNamedEffect> {
    union _GLKVector3 { 
        struct { 
            float x; 
            float y; 
            float z; 
        } ; 
        struct { 
            float r; 
            float g; 
            float b; 
        } ; 
        struct { 
            float s; 
            float t; 
            float p; 
        } ; 
        float v[3]; 
    }  _center;
    unsigned char  _centerChanged;
    GLKEffect * _effect;
    unsigned char  _effectStale;
    NSString * _label;
    unsigned int  _positionVBO;
    unsigned int  _programName;
    NSMutableArray * _propertyArray;
    unsigned int  _texCoordVBO;
    GLKEffectPropertyTexture * _textureCubeMap;
    GLKEffectPropertyTransform * _transform;
    unsigned int  _vao;
    float  _xSize;
    float  _ySize;
    float  _zSize;
}

@property (nonatomic) union _GLKVector3 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; float x4[3]; } center;
@property (nonatomic) unsigned char centerChanged;
@property (nonatomic) GLKEffect *effect;
@property (nonatomic) unsigned char effectStale;
@property (nonatomic, copy) NSString *label;
@property (nonatomic) unsigned int positionVBO;
@property (nonatomic) unsigned int programName;
@property (nonatomic, readonly) NSMutableArray *propertyArray;
@property (nonatomic) unsigned int texCoordVBO;
@property (nonatomic, readonly) GLKEffectPropertyTexture *textureCubeMap;
@property (nonatomic, readonly) GLKEffectPropertyTransform *transform;
@property (nonatomic) unsigned int vao;
@property (nonatomic) float xSize;
@property (nonatomic) float ySize;
@property (nonatomic) float zSize;

- (union _GLKVector3 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; float x4[3]; })center;
- (unsigned char)centerChanged;
- (void)createAndBindVAOWithPositions:(float*)arg1 texCoords:(float*)arg2;
- (void)dealloc;
- (id)description;
- (void)draw;
- (id)effect;
- (unsigned char)effectStale;
- (id)init;
- (id)label;
- (unsigned int)positionVBO;
- (void)prepareToDraw;
- (unsigned int)programName;
- (id)propertyArray;
- (void)setCenter:(union _GLKVector3 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; float x4[3]; })arg1;
- (void)setCenterChanged:(unsigned char)arg1;
- (void)setEffect:(id)arg1;
- (void)setEffectStale:(unsigned char)arg1;
- (void)setLabel:(id)arg1;
- (void)setPositionVBO:(unsigned int)arg1;
- (void)setProgramName:(unsigned int)arg1;
- (void)setTexCoordVBO:(unsigned int)arg1;
- (void)setVao:(unsigned int)arg1;
- (void)setXSize:(float)arg1;
- (void)setYSize:(float)arg1;
- (void)setZSize:(float)arg1;
- (unsigned int)texCoordVBO;
- (id)textureCubeMap;
- (id)transform;
- (void)updateSkyboxEffect;
- (unsigned int)vao;
- (float)xSize;
- (float)ySize;
- (float)zSize;

@end
