
@interface PXGMetalRenderPass : NSObject {
    PXGMetalCaptureSpriteTexture * _captureSpriteTexture;
    float  _captureSpriteZPosition;
    long long  _drawCalls;
    double  _drawingScale;
    float  _maxZ;
    float  _minZ;
    PXGEffect * _offscreenKernelEffect;
    MTLRenderPassDescriptor * _renderPassDescriptor;
}

@property (nonatomic, retain) PXGMetalCaptureSpriteTexture *captureSpriteTexture;
@property (nonatomic) float captureSpriteZPosition;
@property (nonatomic) long long drawCalls;
@property (nonatomic) double drawingScale;
@property (nonatomic) float maxZ;
@property (nonatomic) float minZ;
@property (nonatomic, retain) PXGEffect *offscreenKernelEffect;
@property (nonatomic, retain) MTLRenderPassDescriptor *renderPassDescriptor;

- (void).cxx_destruct;
- (id)captureSpriteTexture;
- (float)captureSpriteZPosition;
- (id)description;
- (long long)drawCalls;
- (double)drawingScale;
- (id)init;
- (float)maxZ;
- (float)minZ;
- (id)offscreenKernelEffect;
- (id)renderPassDescriptor;
- (void)setCaptureSpriteTexture:(id)arg1;
- (void)setCaptureSpriteZPosition:(float)arg1;
- (void)setDrawCalls:(long long)arg1;
- (void)setDrawingScale:(double)arg1;
- (void)setMaxZ:(float)arg1;
- (void)setMinZ:(float)arg1;
- (void)setOffscreenKernelEffect:(id)arg1;
- (void)setRenderPassDescriptor:(id)arg1;

@end
