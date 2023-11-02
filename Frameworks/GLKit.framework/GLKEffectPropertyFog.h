
@interface GLKEffectPropertyFog : GLKEffectProperty {
    union _GLKVector4 { 
        struct { 
            float x; 
            float y; 
            float z; 
            float w; 
        } ; 
        struct { 
            float r; 
            float g; 
            float b; 
            float a; 
        } ; 
        struct { 
            float s; 
            float t; 
            float p; 
            float q; 
        } ; 
        float v[4]; 
    }  _color;
    int  _colorLoc;
    float  _density;
    int  _densityLoc;
    unsigned char  _enabled;
    float  _end;
    int  _endLoc;
    int  _mode;
    int  _modeLoc;
    float  _start;
    int  _startLoc;
}

@property (nonatomic) union _GLKVector4 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; float x4[4]; } color;
@property (nonatomic) int colorLoc;
@property (nonatomic) float density;
@property (nonatomic) int densityLoc;
@property (nonatomic) unsigned char enabled;
@property (nonatomic) float end;
@property (nonatomic) int endLoc;
@property (nonatomic) int mode;
@property (nonatomic) int modeLoc;
@property (nonatomic) float start;
@property (nonatomic) int startLoc;

+ (void)setStaticMasksWithVshRoot:(id)arg1 fshRoot:(id)arg2;

- (void)bind;
- (union _GLKVector4 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; float x4[4]; })color;
- (int)colorLoc;
- (void)dealloc;
- (float)density;
- (int)densityLoc;
- (id)description;
- (void)dirtyAllUniforms;
- (unsigned char)enabled;
- (float)end;
- (int)endLoc;
- (bool)includeFshShaderTextForRootNode:(id)arg1;
- (bool)includeVshShaderTextForRootNode:(id)arg1;
- (id)init;
- (void)initializeMasks;
- (int)mode;
- (int)modeLoc;
- (void)setColor:(union _GLKVector4 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; float x4[4]; })arg1;
- (void)setColorLoc:(int)arg1;
- (void)setDensity:(float)arg1;
- (void)setDensityLoc:(int)arg1;
- (void)setEnabled:(unsigned char)arg1;
- (void)setEnd:(float)arg1;
- (void)setEndLoc:(int)arg1;
- (void)setMode:(int)arg1;
- (void)setModeLoc:(int)arg1;
- (void)setShaderBindings;
- (void)setStart:(float)arg1;
- (void)setStartLoc:(int)arg1;
- (float)start;
- (int)startLoc;

@end
