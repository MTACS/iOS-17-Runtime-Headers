
@interface PTRaytracingV3001 : NSObject <RenderingIntegration> {
    float  _anamorphicFactor;
    <MTLBuffer> * _aperturePointsXY;
    float  _circleOfConfusionReference;
    void _circleOfConfusionWeightMinMax;
    PTColorConversion * _colorConversion;
    void _colorSize;
    NSDictionary * _config;
    PTRenderDebugLayer * _debugLayer;
    long long  _debugRendering;
    <MTLTexture> * _disparityDiff;
    PTMTLDropHints * _disparityDiffDropHints;
    <MTLBuffer> * _disparityDiffGlobalMinMax;
    <MTLTexture> * _disparityEdges;
    <MTLTexture> * _disparityEdgesTemp;
    <MTLTexture> * _disparityEffects;
    struct CGSize { 
        double width; 
        double height; 
    }  _disparitySize;
    bool  _doVisualization;
    PTMTLDropHints * _dropHintsRGBWeightUpscaled;
    PTMTLDropHints * _dropHintsRaytracing;
    float  _edgeTolerance;
    float  _fNumberLimitWeight;
    struct PTFocusEdge { 
        float width; 
        float gradientThreshold; 
        float gradientWeight; 
        float minMaxThreshold; 
    }  _focusEdge;
    <MTLTexture> * _focusEdgeMask;
    PTGlobalReduction * _globalReduction;
    <MTLTexture> * _guideRGBACoefficients;
    <MTLTexture> * _guideRGBAUpscale;
    PTGuidedFilter * _guidedFilter;
    bool  _injectedRGBAPyramid;
    float  _kPyramidSamplingFraction;
    int  _kRayCount;
    PTMetalContext * _metalContext;
    PTQualitySettings * _qualitySettings;
    <MTLBuffer> * _randomUChars;
    <MTLTexture> * _raytracedRGBWeight;
    <MTLTexture> * _raytracedRGBWeightUpscaled;
    PTRaytracingInterpolateResult * _raytracingInterpolateResult;
    <MTLComputePipelineState> * _raytracingSDOF;
    PTRaytracingUtils * _raytracingUtils;
    PTRenderEffectManager * _renderEffects;
    <MTLTexture> * _rgba;
    PTPyramidRGB * _rgbaPyramid;
    bool  _skipFullSizeLayer;
    bool  _updateSourceColor;
    PTUtil * _util;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithMetalContext:(id)arg1 renderEffects:(id)arg2 colorSize:(struct CGSize { double x1; double x2; })arg3 disparitySize:(struct CGSize { double x1; double x2; })arg4 debugRendering:(long long)arg5 verbose:(bool)arg6 config:(id)arg7 quality:(int)arg8;
- (unsigned long long)minimumResourceHeapSize;
- (int)prewarm;
- (int)renderContinuousWithSource:(id)arg1 renderRequest:(id)arg2;
- (void)setResourceHeap:(id)arg1;

@end
