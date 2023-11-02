
@interface PTRaytracingUtilsV1 : NSObject {
    <MTLComputePipelineState> * _centerDisparityOnFocus;
    <MTLComputePipelineState> * _convertRGBPyramid;
    <MTLComputePipelineState> * _convertRGBPyramidFromYUV;
    <MTLComputePipelineState> * _edgeDilation;
    <MTLComputePipelineState> * _focusEdgeMask;
    <MTLComputePipelineState> * _interpolateRGBRadiusToDestRGBA;
    <MTLComputePipelineState> * _interpolateRGBRadiusToDestRGBAFromSource;
    <MTLComputePipelineState> * _interpolateRGBRadiusToDestYUV;
    <MTLComputePipelineState> * _interpolateRGBRadiusToDestYUVFromSource;
    PTMetalContext * _metalContext;
    <MTLSamplerState> * _sNBE;
    <MTLSamplerState> * _sNLE;
    <MTLComputePipelineState> * _sobelEdgeDetector;
}

+ (struct PTNoiseValues { float x1; float x2; })calculateVarReadNoise:(id)arg1;
+ (id)computeRandomUChars:(id)arg1 rayCount:(int)arg2;
+ (void)computeUnitCirclePoints:(struct PTRandomDisk { struct half2 { /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*x_1_1_1; void*x_1_1_2; } x1[94]; int x2; void*x3; }*)arg1 numberOfPatternCircles:(int)arg2;
+ (struct PTFocusEdge { float x1; float x2; float x3; float x4; })createFocusEdge;
+ (struct PTFocus { float x1; float x2; float x3; float x4; float x5; float x6; })createFocusObject:(void *)arg1 pyramidSamplingFraction:(void *)arg2 anamorphicFactor:(void *)arg3 raytracingRadiusLocal:(void *)arg4 rayCount:(void *)arg5 colorSize:(void *)arg6 doMacroApertureLimit:(void *)arg7; // needs 7 arg types, found 6: id, float, float, float, int, bool
+ (float)focalLength;
+ (float)frameWidth;
+ (id)precomputeNoise:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1 seed:(long long)arg2 device:(id)arg3;

- (void).cxx_destruct;
- (void)centerDisparityOnFocus:(id)arg1 inDisparity:(id)arg2 outDisparity:(id)arg3 focusObject:(struct PTFocus { float x1; float x2; float x3; float x4; float x5; float x6; })arg4;
- (int)convertRGBPyramidFromSource:(id)arg1 renderRequest:(id)arg2 rgbaPyramidArray:(id)arg3 skipLevel0:(bool)arg4;
- (int)detectDilatedEdges:(id)arg1 inDisparity:(id)arg2 tempEdges:(id)arg3 outEdges:(id)arg4 focusObject:(struct PTFocus { float x1; float x2; float x3; float x4; float x5; float x6; })arg5 disparityDiffMinMax:(id)arg6 edgeTolerance:(float)arg7;
- (void)focusEdgeMask:(id)arg1 inDisparityDiff:(id)arg2 focusObject:(struct PTFocus { float x1; float x2; float x3; float x4; float x5; float x6; })arg3 focusEdge:(struct PTFocusEdge { float x1; float x2; float x3; float x4; })arg4 outFocusEdgeMask:(id)arg5;
- (id)initWithMetalContext:(id)arg1;
- (void)interpolateRGBRadiusToDest:(id)arg1 renderRequest:(id)arg2 inRGBA:(id)arg3 inRGBRadius:(id)arg4 inRandomGauss:(id)arg5 bicubicSampling:(bool)arg6;
- (void)interpolateRGBRadiusUsingSourceToDest:(id)arg1 renderRequest:(id)arg2 inRGBRadius:(id)arg3 inRandomGauss:(id)arg4 bicubicSampling:(bool)arg5;
- (id)sNBE;
- (id)sNLE;

@end
