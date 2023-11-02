
@interface PTVFXRenderEffect : NSObject {
    NSMutableDictionary * _activeReactions;
    unsigned long long  _aspectRatio;
    _TtC3VFX9VFXCamera * _camera;
    unsigned int  _cameraRotationDegrees;
    PTColorConversion * _colorConversion;
    struct { 
        unsigned long long width; 
        unsigned long long height; 
        unsigned long long depth; 
    }  _colorSize;
    <MTLComputePipelineState> * _convertRGB;
    float  _dimmingFactor;
    NSMutableDictionary * _effectBindings;
    bool  _emitNewReaction;
    float  _emitZValue;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _inverseCameraProjection;
    <_TtP3VFX10VFXBinding_> * _lightBinding;
    _TtC3VFX9VFXEffect * _lighting;
    PTMetalContext * _metalContext;
    PTEffectReactionBackgroundDimming * _reactionBackground;
    NSArray * _reactionTemplates;
    MTLRenderPassDescriptor * _renderPassDescriptor;
    bool  _simulationWasSkippedForPreviousFrame;
    <MTLTexture> * _softAlphaMask;
    _TtC3VFX11VFXRenderer * _vfxRenderer;
    void depthNearFar;
    unsigned long long  depthOutputPixelFormat;
    bool  reverseZ;
    unsigned long long  rgbaOutputPixelFormat;
}

@property void depthNearFar;
@property (readonly) unsigned long long depthOutputPixelFormat;
@property (retain) NSArray *reactionTemplates;
@property bool reverseZ;
@property (readonly) unsigned long long rgbaOutputPixelFormat;

+ (void)setRandomizationSeed:(int)arg1;

- (void).cxx_destruct;
- (id)activeReactions;
- (id)addNewEffectFromEvent:(id)arg1 time:(double)arg2 bilbyFloatingMode:(bool)arg3;
- (bool)computeSoftAlphaMask;
- (int)convertRGB:(id)arg1 inRGBA:(id)arg2 inAlphaMask:(id)arg3 outRGBA:(id)arg4 colorTransferFunction:(int)arg5;
- (void)depthNearFar;
- (unsigned long long)depthOutputPixelFormat;
- (float)dimmingFactor;
- (bool)emitNewReaction;
- (int)initVFX:(bool)arg1 asyncInitQueue:(id)arg2;
- (id)initWithMetalContext:(id)arg1 colorSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg2 colorConversion:(id)arg3 prewarmOnly:(bool)arg4 softAlphaMask:(id)arg5 asyncInitQueue:(id)arg6;
- (int)maxReactionEffectComplexity;
- (id)reactionTemplates;
- (void)removeEffectBindingWithKey:(id)arg1;
- (int)render:(id)arg1 effectRGBA:(id)arg2 effectDepth:(id)arg3;
- (int)renderWithBackgroundDimmingWithColorBuffer:(id)arg1 colorBuffer:(struct __CVBuffer { }*)arg2 effectRGBA:(id)arg3 inCenteredDisparity:(id)arg4 inAlphaMask:(id)arg5 effectDepth:(id)arg6;
- (bool)reverseZ;
- (unsigned long long)rgbaOutputPixelFormat;
- (void)setDepthNearFar;
- (void)setReactionTemplates:(id)arg1;
- (void)setReverseZ:(bool)arg1;
- (void)setupCommonVFXSceneLoadOptions:(id)arg1 metalLibraryURL:(id)arg2;
- (void)updateCameraProjection:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (bool)updateWithTime:(double)arg1 lastFrameTime:(double)arg2 reactions:(id)arg3 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg4 bilbyFloatingMode:(bool)arg5;
- (bool)useSoftAlphaMask:(unsigned long long)arg1;

@end
