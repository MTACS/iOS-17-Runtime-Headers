
@interface AAUIMetalBadgeRenderer : NSObject {
    void _attachmentRasterSize;
    <MTLTexture> * _backTexture;
    UIImage * _backTextureImage;
    NSArray * _badgeModels;
    void _cameraPosition;
    <MTLTexture> * _colorAttachmentMSAA;
    <MTLTexture> * _colorTexture;
    <MTLCommandQueue> * _commandQueue;
    AAUIBadgeModelConfiguration * _configuration;
    <MTLTexture> * _depthAttachmentMSAA;
    <MTLDepthStencilState> * _depthStencilState;
    <MTLDevice> * _device;
    CADisplayLink * _displayLink;
    <MTLTexture> * _emptyBackTexture;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _environmentMatrix;
    <MTLTexture> * _environmentTexture;
    <MTLTexture> * _fleckNormalTexture;
    CAMetalLayer * _metalLayer;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _modelTransform;
    float  _rasterScaleFactor;
    MTLRenderPassDescriptor * _renderPassDesc;
    <MTLRenderPipelineState> * _shaderFaceInlayRenderPipeline;
    <MTLRenderPipelineState> * _shaderFaceInlayTriColorsPipeline;
    <MTLRenderPipelineState> * _shaderFaceRenderPipeline;
    <MTLRenderPipelineState> * _shaderFaceTriColorRenderPipeline;
    <MTLRenderPipelineState> * _shaderRenderPipeline;
    id /* block */  _stateUpdateBlock;
    struct { 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void*color; 
    }  _uniforms;
    bool  _useEarnedShader;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _viewProjectionMatrix;
}

@property (nonatomic, retain) UIImage *backTextureImage;
@property (nonatomic, retain) AAUIBadgeModelConfiguration *configuration;
@property (getter=isPaused, nonatomic) bool paused;
@property (nonatomic, copy) id /* block */ stateUpdateBlock;

+ (id)_commandQueueForDevice:(id)arg1;
+ (double)screenScaleMaximum;
+ (double)screenScaleMultiple;

- (void).cxx_destruct;
- (void)_cleanupConfiguration;
- (void)_drawBadgeFrameCallback;
- (void)_drawBadgeModel:(id)arg1 intoRenderEncoder:(id)arg2 withBackTexture:(bool)arg3;
- (void)_drawFrameWithDrawable:(id)arg1;
- (void)_drawIntoRenderEncoder:(id)arg1;
- (void)_loadBadgeModelWithConfiguration:(id)arg1;
- (void)_setupAttributes;
- (void)_setupCommonBindingsForRenderEncoder:(id)arg1 pipelineState:(id)arg2 verticesBuffer:(id)arg3;
- (void)_setupRenderPipeline;
- (void)_setupTextures;
- (void)_updateModelTransformForBadge:(id)arg1;
- (id)backTextureImage;
- (void)cleanupAfterSnapshot;
- (id)configuration;
- (void)dealloc;
- (id)initWithCAMetalLayer:(id)arg1 useEarnedShader:(bool)arg2;
- (bool)isPaused;
- (void)resizeBadgeForCurrentViewSize;
- (void)setBackTextureImage:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setPaused:(bool)arg1;
- (void)setStateUpdateBlock:(id /* block */)arg1;
- (id)snapshot;
- (id /* block */)stateUpdateBlock;

@end
