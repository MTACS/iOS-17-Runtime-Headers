
@interface PKInkParticleDescriptor : NSObject {
    bool  _adjustEndCapParticleAlpha;
    double  _dynamicStep;
    bool  _initialRandomRotation;
    double  _maskDepth;
    bool  _maskInitialRandomOffset;
    double  _maskMovement;
    double  _maskScale;
    double  _maskScaleConstant;
    struct CGImage { } * _maskTextureImage;
    NSString * _maskTextureName;
    unsigned long long  _particleBlendMode;
    long long  _particleCount;
    unsigned long long  _particleRotation;
    struct CGSize { 
        double width; 
        double height; 
    }  _particleSize;
    double  _particleSpacing;
    struct unique_ptr<PKFunction, std::default_delete<PKFunction>> { 
        struct __compressed_pair<PKFunction *, std::default_delete<PKFunction>> { 
            struct PKFunction {} *__value_; 
        } __ptr_; 
    }  _particleSpacingFunction;
    struct CGImage { } * _textureImage;
    NSString * _textureName;
}

@property (getter=adjustEndCapParticleAlpha, setter=setAdjustEndCapParticleAlpha:, nonatomic) bool adjustEndCapParticleAlpha;
@property (nonatomic) bool initialRandomRotation;
@property (nonatomic) double maskDepth;
@property (nonatomic) bool maskInitialRandomOffset;
@property (nonatomic) double maskMovement;
@property (nonatomic) double maskScale;
@property (nonatomic) double maskScaleConstant;
@property (nonatomic, retain) struct CGImage { }*maskTextureImage;
@property (nonatomic, copy) NSString *maskTextureName;
@property (nonatomic) unsigned long long particleBlendMode;
@property (nonatomic) long long particleCount;
@property (nonatomic) unsigned long long particleRotation;
@property (nonatomic) struct CGSize { double x1; double x2; } particleSize;
@property (nonatomic) double particleSpacing;
@property (nonatomic, retain) struct CGImage { }*textureImage;
@property (nonatomic, copy) NSString *textureName;

+ (id)arrayFromVector:(struct vector<double, std::allocator<double>> { double *x1; double *x2; struct __compressed_pair<double *, std::allocator<double>> { double *x_3_1_1; } x3; })arg1;
+ (id)particleDescriptorWithName:(id)arg1 particleSpacing:(double)arg2 particleCount:(long long)arg3 particleSize:(struct CGSize { double x1; double x2; })arg4 particleRotation:(unsigned long long)arg5;
+ (id)particleDescriptorWithName:(id)arg1 texture:(struct CGImage { }*)arg2 particleSpacing:(double)arg3 particleCount:(long long)arg4 particleSize:(struct CGSize { double x1; double x2; })arg5 particleRotation:(unsigned long long)arg6;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)adjustEndCapParticleAlpha;
- (double)dynamicStep;
- (id)initWithTextureName:(id)arg1 textureImage:(struct CGImage { }*)arg2 maskTextureName:(id)arg3 maskTextureImage:(struct CGImage { }*)arg4 particleSpacing:(double)arg5 particleCount:(long long)arg6 particleSize:(struct CGSize { double x1; double x2; })arg7 particleRotation:(unsigned long long)arg8 maskScale:(double)arg9 maskScaleConstant:(double)arg10 maskMovement:(double)arg11 maskDepth:(double)arg12 initialRandomRotation:(bool)arg13 maskInitialRandomOffset:(bool)arg14 adjustEndCapParticleAlpha:(bool)arg15 particleBlendMode:(unsigned long long)arg16;
- (bool)initialRandomRotation;
- (double)maskDepth;
- (bool)maskInitialRandomOffset;
- (double)maskMovement;
- (double)maskScale;
- (double)maskScaleConstant;
- (struct CGImage { }*)maskTextureImage;
- (id)maskTextureName;
- (id)mutableCopy;
- (unsigned long long)particleBlendMode;
- (long long)particleCount;
- (unsigned long long)particleRotation;
- (struct CGSize { double x1; double x2; })particleSize;
- (double)particleSpacing;
- (double)particleSpacingForRadius:(double)arg1;
- (void*)particleSpacingFunction;
- (id)particleSpacingInkFunction;
- (void)setAdjustEndCapParticleAlpha:(bool)arg1;
- (void)setDynamicStep:(double)arg1;
- (void)setInitialRandomRotation:(bool)arg1;
- (void)setMaskDepth:(double)arg1;
- (void)setMaskInitialRandomOffset:(bool)arg1;
- (void)setMaskMovement:(double)arg1;
- (void)setMaskScale:(double)arg1;
- (void)setMaskScaleConstant:(double)arg1;
- (void)setMaskTextureImage:(struct CGImage { }*)arg1;
- (void)setMaskTextureName:(id)arg1;
- (void)setParticleBlendMode:(unsigned long long)arg1;
- (void)setParticleCount:(long long)arg1;
- (void)setParticleRotation:(unsigned long long)arg1;
- (void)setParticleSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setParticleSpacing:(double)arg1;
- (void)setParticleSpacingFunction:(struct unique_ptr<PKFunction, std::default_delete<PKFunction>> { struct __compressed_pair<PKFunction *, std::default_delete<PKFunction>> { struct PKFunction {} *x_1_1_1; } x1; })arg1;
- (void)setParticleSpacingInkFunction:(id)arg1;
- (void)setTextureImage:(struct CGImage { }*)arg1;
- (void)setTextureName:(id)arg1;
- (struct CGImage { }*)textureImage;
- (id)textureName;

@end
