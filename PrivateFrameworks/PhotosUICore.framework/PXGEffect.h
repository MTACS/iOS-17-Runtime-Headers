
@interface PXGEffect : NSObject {
    bool  _didNotifyOfUse;
    double  _drawingScale;
    unsigned int  _effectId;
    PXGEntityManager * _entityManager;
    unsigned long long  _numberOfSiblingSprites;
    NSObject<OS_dispatch_queue> * _queue;
    double  _scale;
}

@property (nonatomic) double drawingScale;
@property (nonatomic, readonly) unsigned int effectId;
@property (nonatomic, readonly) PXGEntityManager *entityManager;
@property (nonatomic, readonly) PXGKernel *kernel;
@property (nonatomic) unsigned long long numberOfSiblingSprites;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) double scale;
@property (nonatomic, readonly) PXGShader *shader;

+ (id)shaderSourceForFilename:(id)arg1;

- (void).cxx_destruct;
- (void)configureSiblingSprites:(struct { unsigned int x1; struct { /* ? */ } *x2; struct { /* ? */ } *x3; struct { /* ? */ } *x4; struct { /* ? */ } *x5; })arg1 siblingsSpriteIndexRange:(struct _PXGSpriteIndexRange { unsigned int x1; unsigned int x2; })arg2 siblingsTexture:(id)arg3 forMainRenderSpriteRef:(struct { struct { /* ? */ } *x1; struct { /* ? */ } *x2; struct { /* ? */ } *x3; struct { /* ? */ } *x4; })arg4 mainPresentationSpriteRef:(struct { struct { /* ? */ } *x1; struct { /* ? */ } *x2; struct { /* ? */ } *x3; struct { /* ? */ } *x4; })arg5 mainSpriteIndex:(unsigned int)arg6 mainSpriteTexture:(id)arg7 screenScale:(double)arg8;
- (id)createSiblingsTextureForMainSpriteTexture:(id)arg1;
- (void)dealloc;
- (id)description;
- (double)drawingScale;
- (unsigned int)effectId;
- (id)entityManager;
- (id)init;
- (id)initWithEntityManager:(id)arg1;
- (id)kernel;
- (unsigned long long)numberOfSiblingSprites;
- (id)queue;
- (double)scale;
- (void)setDrawingScale:(double)arg1;
- (void)setNumberOfSiblingSprites:(unsigned long long)arg1;
- (void)setScale:(double)arg1;
- (id)shader;

@end
