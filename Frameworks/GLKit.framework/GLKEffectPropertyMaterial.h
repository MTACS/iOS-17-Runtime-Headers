
@interface GLKEffectPropertyMaterial : GLKEffectProperty {
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
    }  _ambientColor;
    int  _ambientColorLoc;
    struct GLKBigInt_s { 
        unsigned long long n0; 
        unsigned long long n1; 
    }  _colorMaterialEnabledMask;
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
    }  _diffuseColor;
    int  _diffuseColorLoc;
    unsigned long long * _effectDirtyUniforms;
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
    }  _emissiveColor;
    int  _emissiveColorLoc;
    float  _shininess;
    int  _shininessLoc;
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
    }  _specularColor;
    int  _specularColorLoc;
}

@property (nonatomic) int _ambientColorLoc;
@property (nonatomic) struct GLKBigInt_s { unsigned long long x1; unsigned long long x2; } _colorMaterialEnabledMask;
@property (nonatomic) int _diffuseColorLoc;
@property (nonatomic) int _emissiveColorLoc;
@property (nonatomic) int _shininessLoc;
@property (nonatomic) int _specularColorLoc;
@property (nonatomic) union _GLKVector4 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; float x4[4]; } ambientColor;
@property (nonatomic) union _GLKVector4 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; float x4[4]; } diffuseColor;
@property (nonatomic) unsigned long long*effectDirtyUniforms;
@property (nonatomic) union _GLKVector4 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; float x4[4]; } emissiveColor;
@property (nonatomic) float shininess;
@property (nonatomic) union _GLKVector4 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; float x4[4]; } specularColor;

+ (void)setStaticMasksWithVshRoot:(id)arg1 fshRoot:(id)arg2;

- (int)_ambientColorLoc;
- (struct GLKBigInt_s { unsigned long long x1; unsigned long long x2; })_colorMaterialEnabledMask;
- (int)_diffuseColorLoc;
- (int)_emissiveColorLoc;
- (int)_shininessLoc;
- (int)_specularColorLoc;
- (union _GLKVector4 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; float x4[4]; })ambientColor;
- (void)bind;
- (void)dealloc;
- (id)description;
- (union _GLKVector4 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; float x4[4]; })diffuseColor;
- (void)dirtyAllUniforms;
- (unsigned long long*)effectDirtyUniforms;
- (union _GLKVector4 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; float x4[4]; })emissiveColor;
- (bool)includeFshShaderTextForRootNode:(id)arg1;
- (bool)includeVshShaderTextForRootNode:(id)arg1;
- (id)init;
- (void)initializeMasks;
- (void)setAmbientColor:(union _GLKVector4 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; float x4[4]; })arg1;
- (void)setDiffuseColor:(union _GLKVector4 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; float x4[4]; })arg1;
- (void)setEffectDirtyUniforms:(unsigned long long*)arg1;
- (void)setEmissiveColor:(union _GLKVector4 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; float x4[4]; })arg1;
- (void)setShaderBindings;
- (void)setShininess:(float)arg1;
- (void)setSpecularColor:(union _GLKVector4 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; float x4[4]; })arg1;
- (void)set_ambientColorLoc:(int)arg1;
- (void)set_colorMaterialEnabledMask:(struct GLKBigInt_s { unsigned long long x1; unsigned long long x2; })arg1;
- (void)set_diffuseColorLoc:(int)arg1;
- (void)set_emissiveColorLoc:(int)arg1;
- (void)set_shininessLoc:(int)arg1;
- (void)set_specularColorLoc:(int)arg1;
- (float)shininess;
- (union _GLKVector4 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; float x4[4]; })specularColor;

@end
