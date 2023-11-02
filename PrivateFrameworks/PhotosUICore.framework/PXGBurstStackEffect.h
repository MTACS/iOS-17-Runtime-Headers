
@interface PXGBurstStackEffect : PXGEffect

@property (nonatomic) long long numberOfItemsStackedBehind;

- (void)configureSiblingSprites:(struct { unsigned int x1; struct { /* ? */ } *x2; struct { /* ? */ } *x3; struct { /* ? */ } *x4; struct { /* ? */ } *x5; })arg1 siblingsSpriteIndexRange:(struct _PXGSpriteIndexRange { unsigned int x1; unsigned int x2; })arg2 siblingsTexture:(id)arg3 forMainRenderSpriteRef:(struct { struct { /* ? */ } *x1; struct { /* ? */ } *x2; struct { /* ? */ } *x3; struct { /* ? */ } *x4; })arg4 mainPresentationSpriteRef:(struct { struct { /* ? */ } *x1; struct { /* ? */ } *x2; struct { /* ? */ } *x3; struct { /* ? */ } *x4; })arg5 mainSpriteIndex:(unsigned int)arg6 mainSpriteTexture:(id)arg7 screenScale:(double)arg8;
- (id)createSiblingsTextureForMainSpriteTexture:(id)arg1;
- (id)initWithEntityManager:(id)arg1;
- (long long)numberOfItemsStackedBehind;
- (void)setNumberOfItemsStackedBehind:(long long)arg1;
- (id)shader;

@end
