
@interface PTRaytracingV2002 : NSObject <RenderingIntegration> {
    float  _anamorphicFactor;
    <MTLBuffer> * _aperturePointsXY;
    void _colorSize;
    NSDictionary * _config;
    PTRenderDebugLayer * _debugLayer;
    long long  _debugRendering;
    <MTLTexture> * _disparityDiff;
    PTMTLDropHints * _disparityDiffDropHints;
    <MTLBuffer> * _disparityDiffGlobalMinMax;
    <MTLTexture> * _disparityEdges;
    <MTLTexture> * _disparityEdgesTemp;
    struct CGSize { 
        double width; 
        double height; 
    }  _disparitySize;
    bool  _doVisualization;
    PTMTLDropHints * _dropHintsRGBWeightUpscaled;
    PTMTLDropHints * _dropHintsRaytracing;
    float  _edgeTolerance;
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
    PTRaytracingInterpolateResultV2 * _raytracingInterpolateResult;
    <MTLComputePipelineState> * _raytracingSDOF;
    PTRaytracingUtilsV2 * _raytracingUtils;
    PTPyramidRGB * _rgbaPyramid;
    PTUtil * _util;
    id /* block */  interpolateRGBWeightCustomFn;
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
