
@interface PTEffectRelighting : NSObject {
    void _bgVignetteLightIntensity;
    PTBrightSceneDetector * _brightSceneDetector;
    SingleColorCubeCorrectionStage * _colorCube;
    int  _colorCubeType;
    <MTLComputePipelineState> * _createLightMask;
    PTMTLDropHints * _dropHints;
    float  _eyeRadiusFactor;
    <MTLComputePipelineState> * _fgBgForDebug;
    <MTLComputePipelineState> * _filterLightGainApplyToRGB;
    int  _frameIndex;
    float  _lastFrameTimeSeconds;
    <MTLTexture> * _lightGainMapFiltered;
    <MTLTexture> * _lightGainMapLowRes;
    <MTLTexture> * _lightGainMapLowResFiltered;
    float  _lightGainMapScale;
    <MTLComputePipelineState> * _lightMaskForDebug;
    <MTLComputePipelineState> * _lightMaskOutline;
    <MTLTexture> * _lightMasks;
    PTMetalContext * _metalContext;
    PTMSRResize * _msrColorPyramid;
    struct RelightingParam { 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void*bgLightIntensity; 
    }  _parameters;
    <MTLTexture> * _quarterSizeRGBA;
    <MTLComputePipelineState> * _relightFullsizeInput;
    <MTLTexture> * _relightSizeRGBA;
    struct SmoothFaceRectData { 
        float aspect; 
        float lightMaskExponent; 
        float preumbraBendFactor; 
        float lightMaskWidth; 
        float lightMaskFaceOffsetY; 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void*faceEyeWeight; 
    }  _smoothFaceRects;
    <MTLComputePipelineState> * _studioLight;
    PTSyntheticLight * _syntheticLight;
    PTUtil * _util;
    void _weightHeadEye;
}

- (void).cxx_destruct;
- (id)brightSceneDetector;
- (id)colorCube;
- (void)computeSmoothFaceRect:(id)arg1 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2;
- (void)estimateLightIntensity:(id)arg1 inFaceRects:(/* Warning: Unrecognized filer type: '2' using 'void*' */ void**)arg2 numberOfFaceRects:(int)arg3 humanDetections:(id)arg4 effectRenderRequest:(id)arg5;
- (void)fgBgDebugWithDisparity:(id)arg1 inNormal:(id)arg2 inFocusDisparityModifier:(id)arg3 outMask:(id)arg4 debugType:(long long)arg5;
- (int)filterLightGainApplyInRGB:(id)arg1 outRGB:(id)arg2 filterLightGainMapLowres:(bool)arg3;
- (id)gainMap;
- (void)initRelightingParam;
- (id)initWithMetalContext:(id)arg1 faceAttributesNetwork:(id)arg2 effectUtil:(id)arg3 util:(id)arg4 prewarmOnly:(bool)arg5 colorSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg6 msrColorPyramid:(id)arg7 sharedResources:(id)arg8;
- (void)lightMaskDebugWithMSRPyramid:(id)arg1 outFaceMask:(id)arg2;
- (void)reset;
- (struct SmoothFaceRectData { float x1; float x2; float x3; float x4; float x5; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_6_1_1[2]; } x6; }*)smoothFaceRects;
- (void)studioLightInYUV:(id)arg1 inNormal:(id)arg2 inDisparity:(id)arg3 inFocusDisparityModifier:(id)arg4 outYUV:(id)arg5 outRgbaPyramid:(id)arg6 relightStrength:(float)arg7 studioLightEffectModifier:(id)arg8;
- (id)syntheticLight;
- (void)updateColorCube;
- (void)updateParamters:(id)arg1 relightStrength:(float)arg2;

@end
