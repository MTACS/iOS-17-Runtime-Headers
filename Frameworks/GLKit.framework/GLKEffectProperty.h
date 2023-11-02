
@interface GLKEffectProperty : NSObject {
    unsigned long long  _dirtyUniforms;
    GLKEffect * _effect;
    char * _fshSource;
    int  _location;
    unsigned char  _masksInitialized;
    char * _nameString;
    struct GLKEffectPropertyPrv { struct GLKBigInt_s {} *x1; struct GLKBigInt_s {} *x2; struct GLKBigInt_s {} *x3; struct GLKBigInt_s {} *x4; id x5; } * _prv;
    char * _vshSource;
}

@property (nonatomic) unsigned long long dirtyUniforms;
@property (nonatomic) GLKEffect *effect;
@property (nonatomic) char *fshSource;
@property (nonatomic) int location;
@property (nonatomic) unsigned char masksInitialized;
@property (nonatomic) char *nameString;
@property (nonatomic) char *vshSource;

+ (void)logSetMasksWithLabel:(id)arg1 obj:(id)arg2 typeStr:(id)arg3;
+ (void)setStaticMasksWithVshRoot:(id)arg1 fshRoot:(id)arg2;

- (void)bind;
- (void)dealloc;
- (void)dirtyAllUniforms;
- (unsigned long long)dirtyUniforms;
- (id)effect;
- (struct GLKBigInt_s { unsigned long long x1; unsigned long long x2; }*)fshMask;
- (char *)fshSource;
- (bool)includeFshShaderTextForRootNode:(id)arg1;
- (bool)includeVshShaderTextForRootNode:(id)arg1;
- (id)init;
- (void)initializeMasks;
- (int)location;
- (unsigned char)masksInitialized;
- (char *)nameString;
- (void)setDirtyUniforms:(unsigned long long)arg1;
- (void)setEffect:(id)arg1;
- (void)setFSHSource:(char *)arg1;
- (void)setFshSource:(char *)arg1;
- (void)setLocation:(int)arg1;
- (void)setMasks;
- (void)setMasksInitialized:(unsigned char)arg1;
- (void)setNameString:(char *)arg1;
- (void)setShaderBindings;
- (void)setVSHSource:(char *)arg1;
- (void)setVshSource:(char *)arg1;
- (struct GLKBigInt_s { unsigned long long x1; unsigned long long x2; }*)vshMask;
- (char *)vshSource;

@end
