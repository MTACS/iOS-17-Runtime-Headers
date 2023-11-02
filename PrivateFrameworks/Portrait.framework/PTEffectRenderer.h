
@interface PTEffectRenderer : NSObject {
    NSObject<OS_dispatch_queue> * _asyncInitQueue;
    bool  _asynchronous;
    unsigned long long  _availableEffectTypes;
    <MTLTexture> * _chromaIntermediate;
    PTColorConversion * _colorConversion;
    PTCVMNetwork * _cvmNetwork;
    PTEffectDebugLayer * _debugLayer;
    long long  _debugType;
    PTDepthConverter * _depthConverter;
    <MTLTexture> * _disparityCenteredUpscaledReactions;
    <MTLTexture> * _disparityCenteredUpscaledSDOF;
    <MTLTexture> * _disparityCenteredUpscaledWithScreenCaptureRect;
    struct PTDisparityFocusOffset { 
        float disparityOffsetFactor; 
        float offsetInMeters; 
    }  _disparityFocusOffsetReactions;
    struct PTDisparityFocusOffset { 
        float disparityOffsetFactor; 
        float offsetInMeters; 
    }  _disparityFocusOffsetSDOF;
    struct PTDisparityFocusOffset { 
        float disparityOffsetFactor; 
        float offsetInMeters; 
    }  _disparityFocusOffsetStudioLight;
    PTRenderEffectContainer * _effectContainer;
    PTEffectDescriptor * _effectDescriptor;
    PTEffectRelighting * _effectRelighting;
    PTEffectUtil * _effectUtil;
    bool  _externalHandDetectionsAvailable;
    <MTLBuffer> * _faceDisparityArray;
    float  _focalLenIn35mmFilm;
    float  _focusDisparityMax;
    <MTLBuffer> * _focusDisparityModifiers;
    <MTLBuffer> * _focusDisparityRaw;
    float  _focusDisparityUpdateCoefficientSDOF;
    float  _focusDisparityUpdateCoefficientStudioLight;
    int  _frameIndex;
    <MTLTexture> * _guideRGBACoefficients;
    <MTLTexture> * _guideRGBAUpscale;
    PTGuidedFilter * _guidedFilter;
    PTTextureYUV * _intermediateYUV;
    <MTLBuffer> * _lastFocus;
    double  _lastFrameTime;
    <MTLTexture> * _lumaIntermediate;
    PTMetalContext * _metalContext;
    PTMSRResize * _msrColorPyramid;
    int  _networkFrameIndex;
    <MTLTexture> * _normalDerived;
    PTNormalEstimation * _normalEstimation;
    PTEffectPersonSegmentationMatte * _personSegmentation;
    struct __CVBuffer { } * _personSegmentationInput;
    PTEffectReactionProvider * _reactionProvider;
    PTRenderPipeline * _renderPipeline;
    <PTRenderState> * _renderState;
    bool  _renderStudioLightPreviousFrame;
    bool  _runCVMNetworkPreviousFrame;
    PTRenderRequest * _sdofRenderRequest;
    PTEffectResources * _sharedResources;
    PTVFXSoftAlphaMask * _softAlphaMask;
    <MTLBuffer> * _studioLightEffectModifier;
    PTMTLDropHints * _temporalDisparityTempDropHints;
    PTEffectTemporalFilter * _temporalFilter;
    <MTLBuffer> * _useDisparityBufferForReactions;
    PTUtil * _util;
    PTVFXRenderEffect * _vfxEffect;
    long long  effectQuality;
}

@property long long effectQuality;

+ (struct PTEffectPixelBufferDescriptor { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; unsigned int x2; })segmentationMatteFormatForColorSize:(struct CGSize { double x1; double x2; })arg1;

- (void).cxx_destruct;
- (id)activeReactions;
- (void)copyInYUV:(id)arg1 toOutYUV:(id)arg2;
- (id)copyTemporalState:(id)arg1;
- (long long)effectQuality;
- (id)initWithDescriptor:(id)arg1 metalContext:(id)arg2 useHighResNetwork:(bool)arg3 faceAttributesNetwork:(id)arg4 prevTemporalState:(id)arg5 asyncInitQueue:(id)arg6 sharedResources:(id)arg7;
- (bool)isRenderRequiredForRequest:(id)arg1;
- (float)remapAperture:(id)arg1;
- (int)render:(id)arg1 humanDetections:(id)arg2 waitUntilCompleted:(bool)arg3 gpuCompleted:(id /* block */)arg4;
- (int)renderReaction:(id)arg1 effectRenderRequest:(id)arg2;
- (void)reset:(id)arg1;
- (int)runGestureDetection:(id)arg1;
- (void)setDebug:(long long)arg1;
- (void)setEffectQuality:(long long)arg1;

@end
