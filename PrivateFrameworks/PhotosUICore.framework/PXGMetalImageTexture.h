
@interface PXGMetalImageTexture : PXGImageTexture <PXGMetalSpriteTexture> {
    float  _alpha;
    <MTLTexture> * _chromaTexture;
    PXGColorProgram * _colorProgram;
    bool  _isContentOpaque;
    void _orientationTransform;
    long long  _renderPipelineIndex;
    int  _shaderFlags;
    <MTLTexture> * _texture;
    PXGMetalTextureCache * _textureCache;
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
@property (nonatomic, readonly) bool isAtlas;
@property (nonatomic, readonly) bool isCaptureTexture;
@property (nonatomic, readonly) bool isDegraded;
@property (nonatomic, readonly) bool isOpaque;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } pixelSize;
@property (nonatomic, readonly) unsigned char presentationType;
@property (nonatomic) long long renderPipelineIndex;
@property (nonatomic, readonly) int shaderFlags;
@property (nonatomic, readonly) unsigned int spriteCount;
@property (nonatomic, readonly) NSIndexSet *spriteIndexes;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <MTLTexture> *texture;
@property (nonatomic) PXGMetalTextureCache *textureCache;

- (void).cxx_destruct;
- (float)alpha;
- (id)chromaTexture;
- (void)cleanupAfterRender:(long long)arg1;
- (id)colorProgram;
- (id)copyWithOrientationTransform:(void *)arg1 alpha:(void *)arg2; // needs 2 arg types, found 1: float
- (void)dealloc;
- (id)description;
- (long long)estimatedByteSize;
- (id)init;
- (id)initWithTexture:(void *)arg1 chromaTexture:(void *)arg2 colorProgram:(void *)arg3 isOpaque:(void *)arg4 shaderFlags:(void *)arg5 orientationTransform:(void *)arg6 alpha:(void *)arg7; // needs 7 arg types, found 6: id, id, id, bool, int, float
- (id)initWithTexture:(void *)arg1 colorProgram:(void *)arg2 isOpaque:(void *)arg3 shaderFlags:(void *)arg4 orientationTransform:(void *)arg5 alpha:(void *)arg6; // needs 6 arg types, found 5: id, id, bool, int, float
- (bool)isAtlas;
- (bool)isCaptureTexture;
- (bool)isOpaque;
- (void)orientationTransform;
- (struct CGSize { double x1; double x2; })pixelSize;
- (void)prepareForRender:(long long)arg1;
- (unsigned char)presentationType;
- (long long)renderPipelineIndex;
- (void)setRenderPipelineIndex:(long long)arg1;
- (void)setTextureCache:(id)arg1;
- (int)shaderFlags;
- (id)texture;
- (id)textureCache;

@end
