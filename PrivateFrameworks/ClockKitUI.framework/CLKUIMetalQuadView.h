
@interface CLKUIMetalQuadView : CLKUIQuadView {
    float  _aplFilterAmount;
    <MTLComputePipelineState> * _aplPipelineState;
    <MTLComputePipelineState> * _colorConversionPipelineState;
    unsigned long long  _colorPixelFormat;
    <MTLCommandQueue> * _commandQueue;
    <MTLDepthStencilState> * _depthStencilState;
    <MTLTexture> * _depthTexture;
    <MTLComputePipelineState> * _dimmingPipelineState;
    unsigned int  _isDepthBufferRequired;
    unsigned int  _isDoubleBuffer;
    unsigned int  _isDrawableRead;
    unsigned int  _isDrawableSizeNeedsUpdate;
    unsigned int  _isDrawableWrite;
    unsigned int  _isPresentWithTransaction;
    unsigned int  _isRenderWithCommandBuffer;
    bool  _isSnapshotting;
    unsigned int  _isUseNativeScale;
    float  _maxAPL;
    CAMetalLayer * _metalLayer;
    unsigned long long  _msaaCount;
    <MTLTexture> * _msaaTexture;
    struct CLKUIQuadSize { 
        int width; 
        int height; 
    }  _quadSize;
    NSArray * _quads;
    MTLRenderPassDescriptor * _renderPassDescriptor;
    UIImageView * _snapshotView;
    <MTLTexture> * _textureForPrewarming;
}

@property (nonatomic) float aplFilterAmount;
@property (nonatomic) struct { double x1; double x2; double x3; double x4; } clearColor;
@property (nonatomic, readonly) unsigned long long colorPixelFormat;
@property (nonatomic, readonly) bool isSnapshotting;
@property (nonatomic) float maxAPL;

+ (id)allocateDepthTextureWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 sampleCount:(unsigned long long)arg3;
+ (id)allocateMsaaTextureWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 pixelFormat:(unsigned long long)arg3 sampleCount:(unsigned long long)arg4;

- (void).cxx_destruct;
- (bool)_displayAndCheckForDrawable:(bool)arg1 renderDiscontinuity:(bool)arg2 withCompletion:(id /* block */)arg3;
- (id)_getDimmingPipelineState;
- (void)_handleQuadArrayChange:(id)arg1;
- (unsigned long long)_msaaCount;
- (id)_newRenderPassDescriptor;
- (void)_renderQuads:(id)arg1 toScreenWithCommandBuffer:(id)arg2 passDescriptor:(id)arg3;
- (bool)_shouldApplyAPLFilter;
- (id)_snapshotTextureInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 scale:(double)arg2 time:(double)arg3 withAdditionalPasses:(id /* block */)arg4;
- (id)_textureToImage:(id)arg1 scale:(double)arg2;
- (void)_updateDrawableSizeIfNecessary;
- (void)_updateFramebufferOnly;
- (float)aplFilterAmount;
- (struct { double x1; double x2; double x3; double x4; })clearColor;
- (unsigned long long)colorPixelFormat;
- (float)computeAPL;
- (float)computeAPLAndSnapshot:(id*)arg1;
- (void)dealloc;
- (void)discardContents;
- (struct CGSize { double x1; double x2; })drawableSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 identifier:(id)arg2 options:(unsigned long long)arg3 colorSpace:(long long)arg4;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 identifier:(id)arg2 options:(unsigned long long)arg3 colorSpace:(long long)arg4 asyncRenderQueue:(id)arg5;
- (bool)isSnapshotting;
- (void)layoutSubviews;
- (float)maxAPL;
- (id)metalLayer;
- (bool)prewarmWithCompletion:(id /* block */)arg1;
- (void)setAplFilterAmount:(float)arg1;
- (void)setClearColor:(struct { double x1; double x2; double x3; double x4; })arg1;
- (void)setMaxAPL:(float)arg1;
- (void)setOpaque:(bool)arg1;
- (void)setSingleBufferMode:(bool)arg1;
- (void)snapshotAndFreeze;
- (id)snapshotInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 scale:(double)arg2 time:(double)arg3;
- (id)snapshotTextureInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 scale:(double)arg2 time:(double)arg3;

@end
