
@interface PKCategoryVisualizationCardView : UIView <PKMetalRenderLoopDelegate, PKMotionManagerClientProtocol> {
    bool  _blurDisabled;
    MPSUnaryImageKernel * _blurShader;
    NSArray * _bucketColors;
    <MTLBuffer> * _circleDataBuffer;
    <MTLRenderPipelineState> * _circleOutlinePipelineState;
    <MTLRenderPipelineState> * _circlePipelineState;
    <MTLBuffer> * _circleUniformsBuffer;
    <MTLCommandQueue> * _commandQueue;
    unsigned long long  _drawableHeight;
    unsigned long long  _drawableWidth;
    bool  _effectiveMotionEnabled;
    bool  _effectivePaused;
    bool  _emptying;
    bool  _hasPendingUpdate;
    bool  _invalidated;
    NSSet * _magnitudes;
    bool  _motionEnabled;
    bool  _needsDraw;
    <MTLTexture> * _overlayNormalTexture;
    PKTextureLoader * _overlayNormalTextureLoader;
    <MTLRenderPipelineState> * _overlayPipelineState;
    <MTLTexture> * _overlayTexture;
    PKTextureLoader * _overlayTextureLoader;
    bool  _paused;
    long long  _pendingUpdateStyle;
    PKMetalRenderLoop * _renderLoop;
    MTLRenderPassDescriptor * _renderPassDescriptor;
    MTLRenderPassDescriptor * _secondRenderPassDescriptor;
    <MTLBuffer> * _singleCircleDataBuffer;
    struct { 
        double startTime; 
        unsigned long long bucketCount; 
        double *magnitudeForBucket; 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void**colorForBucket; 
    }  _state;
    <MTLTexture> * _texture;
    <MTLBuffer> * _textureCoordsBuffer;
    <MTLBuffer> * _vertexCoordsBuffer;
}

@property (getter=isBlurDisabled, nonatomic) bool blurDisabled;
@property (nonatomic, copy) NSArray *bucketColors;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSSet *magnitudes;
@property (getter=isMotionEnabled, nonatomic) bool motionEnabled;
@property (getter=isPaused, nonatomic) bool paused;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)bucketColors;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)invalidate;
- (bool)isBlurDisabled;
- (bool)isMotionEnabled;
- (bool)isPaused;
- (void)layoutSubviews;
- (id)magnitudes;
- (void)motionManager:(id)arg1 didReceiveMotion:(id)arg2;
- (void)renderLoop:(id)arg1 didChangeEffectivePaused:(bool)arg2;
- (void)renderLoop:(id)arg1 drawAtTime:(double)arg2;
- (void)renderLoop:(id)arg1 drawableSizeDidChange:(struct CGSize { double x1; double x2; })arg2;
- (void)renderWithTextures:(id)arg1 rendererState:(id)arg2;
- (id)rendererState;
- (void)setBlurDisabled:(bool)arg1;
- (void)setBucketColors:(id)arg1;
- (void)setMagnitudes:(id)arg1 withStyle:(long long)arg2;
- (void)setMotionEnabled:(bool)arg1;
- (void)setPaused:(bool)arg1;

@end
