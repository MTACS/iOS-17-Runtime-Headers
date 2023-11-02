
@interface PXGEffectWrappingTexture : PXGImageTexture <PXGMetalSpriteTexture> {
    PXGImageTexture * _imageTextureParent;
    <PXGMetalSpriteTexture> * _parent;
}

@property (nonatomic, readonly) float alpha;
@property (nonatomic, readonly) <MTLTexture> *chromaTexture;
@property (nonatomic, readonly) PXGColorProgram *colorProgram;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long estimatedByteSize;
@property (nonatomic, readonly) bool hasSprites;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGImage { }*imageRepresentation;
@property (nonatomic, readonly) PXGImageTexture *imageTextureParent;
@property (nonatomic, readonly) bool isAtlas;
@property (nonatomic, readonly) bool isCaptureTexture;
@property (nonatomic, readonly) bool isDegraded;
@property (nonatomic, readonly) bool isOpaque;
@property (nonatomic, retain) <PXGMetalSpriteTexture> *parent;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } pixelSize;
@property (nonatomic, readonly) unsigned char presentationType;
@property (nonatomic) long long renderPipelineIndex;
@property (nonatomic, readonly) int shaderFlags;
@property (nonatomic, readonly) unsigned int spriteCount;
@property (nonatomic, readonly) NSIndexSet *spriteIndexes;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <MTLTexture> *texture;

+ (id)_dequeueTexture;
+ (id)_reusableTextures;
+ (void)_reuseTexture:(id)arg1;
+ (id)createTexture;

- (void).cxx_destruct;
- (float)alpha;
- (id)chromaTexture;
- (void)cleanupAfterRender:(long long)arg1;
- (id)colorProgram;
- (long long)estimatedByteSize;
- (void)getTextureInfos:(struct { float x1; }*)arg1 forSpriteIndexes:(unsigned int*)arg2 geometries:(const struct { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; }*)arg3 spriteStyles:(const struct { float x1; struct { union { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; float x_1_3_4; } x_1_2_1; float x_1_2_2[4]; } x_2_1_1; } x2; float x3; float x4; float x5; float x6; unsigned short x7; unsigned char x8; float x9; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_10_1_1[4]; } x10; }*)arg4 spriteInfos:(const struct { unsigned char x1; unsigned char x2; float x3; long long x4; unsigned short x5; unsigned char x6; }*)arg5 screenScale:(double)arg6 count:(unsigned int)arg7;
- (struct CGImage { }*)imageRepresentation;
- (id)imageTextureParent;
- (bool)isAtlas;
- (bool)isCaptureTexture;
- (bool)isOpaque;
- (void)orientationTransform;
- (id)parent;
- (struct CGSize { double x1; double x2; })pixelSize;
- (void)prepareForRender:(long long)arg1;
- (unsigned char)presentationType;
- (long long)renderPipelineIndex;
- (void)setParent:(id)arg1;
- (void)setRenderPipelineIndex:(long long)arg1;
- (int)shaderFlags;
- (struct CGImage { }*)sourceCGImage;
- (struct __CVBuffer { }*)sourceCVPixelBuffer;
- (id)texture;

@end
