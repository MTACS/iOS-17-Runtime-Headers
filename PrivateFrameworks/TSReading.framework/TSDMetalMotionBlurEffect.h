
@interface TSDMetalMotionBlurEffect : NSObject {
    <TSDMTLDataBuffer> * _FBODataBuffer;
    <TSDMTLDataBuffer> * _FBODataBufferFlipped;
    TSDMetalShader * _colorAndVelocityBlendingShader;
    MTLRenderPassDescriptor * _colorAndVelocityPassDescriptor;
    TSDMetalShader * _colorAndVelocityShader;
    <TSDMTLDataBuffer> * _colorFBODataBuffer;
    <MTLTexture> * _colorTexture1;
    <MTLTexture> * _colorTexture2;
    MTLRenderPassDescriptor * _combined1PassDescriptor;
    <MTLTexture> * _combinedTextureColor1;
    <MTLTexture> * _combinedTextureColor2;
    <MTLTexture> * _combinedTextureVelocity;
    <MTLCommandBuffer> * _currentCommandBuffer;
    long long  _debugDrawMode;
    TSDMetalShader * _defaultTextureShader;
    double  _framebufferScale;
    struct CGSize { 
        double width; 
        double height; 
    }  _framebufferSize;
    bool  _isSingleObject;
    TSDMetalContext * _metalContext;
    double  _motionBlurStrength;
    MTLRenderPassDescriptor * _neighborHorizontalPassDescriptor;
    MTLRenderPassDescriptor * _neighborVerticalPassDescriptor;
    <TSDAnimationRandomGenerator> * _randomGenerator;
    struct CGSize { 
        double width; 
        double height; 
    }  _slideSize;
    MTLRenderPassDescriptor * _tileHorizontalPassDescriptor;
    MTLRenderPassDescriptor * _tileVerticalPassDescriptor;
    TSDMetalShader * _velocityCollectionShader;
    <TSDMTLDataBuffer> * _velocityFBODataBuffer;
    TSDMetalShader * _velocityNeighborMaxHorizontalShader;
    TSDMetalShader * _velocityNeighborMaxVerticalShader;
    <TSDMTLDataBuffer> * _velocitySquashedFBODataBuffer;
    <MTLTexture> * _velocityTexture1;
    <MTLTexture> * _velocityTexture2;
    <MTLTexture> * _velocityTextureSquashed;
    TSDMetalShader * _velocityTileMaxHorizontalShader;
    TSDMetalShader * _velocityTileMaxVerticalShader;
    TSDMetalShader * _velocityVisualizerShader;
}

@property (nonatomic) long long debugDrawMode;
@property (nonatomic) double framebufferScale;
@property (nonatomic) bool isSingleObject;
@property (nonatomic) double motionBlurStrength;

- (void).cxx_destruct;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })adjustTransformForMotionBlurBuffer:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg1;
- (id)bindColorAndVelocityWithMetalContext:(id)arg1 shouldFillBackground:(bool)arg2;
- (id)colorAndVelocityBlendingShader;
- (id)colorAndVelocityShader;
- (long long)debugDrawMode;
- (void)drawResultWithWorkingRenderEncoder:(id)arg1 destinationRenderEncoder:(id)arg2;
- (void)drawResultWithWorkingRenderEncoder:(id)arg1 destinationRenderEncoder:(id)arg2 opacity:(double)arg3;
- (double)framebufferScale;
- (id)initWithFramebufferSize:(struct CGSize { double x1; double x2; })arg1 slideSize:(struct CGSize { double x1; double x2; })arg2 randomGenerator:(id)arg3 metalContext:(id)arg4;
- (bool)isSingleObject;
- (double)motionBlurStrength;
- (void)p_blitIntoColorFramebuffer;
- (void)p_blitIntoVelocityTexture;
- (void)p_debugDrawModeColorBufferWithEncoder:(id)arg1;
- (void)p_debugDrawModeVelocityBufferDilatedWithEncoder:(id)arg1;
- (void)p_debugDrawModeVelocityBufferWithEncoder:(id)arg1;
- (void)p_dilateVelocityTexture;
- (void)p_drawWithEncoder:(id)arg1 opacity:(double)arg2;
- (void)p_setupBuffers;
- (void)p_setupRenderPasses;
- (void)p_setupShaders;
- (void)p_setupTextures;
- (struct CGSize { double x1; double x2; })p_squashedVelocityFramebufferSize;
- (struct CGSize { double x1; double x2; })p_updateMaxVelocityInShadersWithScale:(double)arg1 isColorFBO:(bool)arg2;
- (struct CGSize { double x1; double x2; })p_velocityFramebufferSize;
- (struct CGSize { double x1; double x2; })p_velocityFramebufferTextureScale;
- (void)setDebugDrawMode:(long long)arg1;
- (void)setFramebufferScale:(double)arg1;
- (void)setIsSingleObject:(bool)arg1;
- (void)setMotionBlurStrength:(double)arg1;
- (void)setupMotionBlurEffectIfNecessary;
- (struct CGSize { double x1; double x2; })velocityScale;
- (struct CGSize { double x1; double x2; })velocityScaleForColorFBO:(bool)arg1;

@end
