
@interface PTRaytracingUtilsV2 : NSObject {
    <MTLComputePipelineState> * _centerDisparityOnFocus;
    <MTLComputePipelineState> * _edgeDilation;
    <MTLComputePipelineState> * _focusEdgeMask;
    PTMetalContext * _metalContext;
    <MTLComputePipelineState> * _sobelEdgeDetector;
}

+ (id)computeRandomUChars:(id)arg1 rayCount:(int)arg2;
+ (void)computeUnitCirclePoints:(struct PTRandomDisk { struct half2 { /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*x_1_1_1; void*x_1_1_2; } x1[94]; int x2; void*x3; }*)arg1 numberOfPatternCircles:(int)arg2;
+ (struct PTFocusEdge { float x1; float x2; float x3; float x4; })createFocusEdge;
+ (struct PTFocus { float x1; float x2; float x3; float x4; float x5; float x6; })createFocusObject:(void *)arg1 pyramidSamplingFraction:(void *)arg2 anamorphicFactor:(void *)arg3 rayCount:(void *)arg4 colorSize:(void *)arg5 doMacroApertureLimit:(void *)arg6; // needs 6 arg types, found 5: id, float, float, int, bool
+ (float)focalLength;
+ (float)frameWidth;

- (void).cxx_destruct;
- (void)centerDisparityOnFocus:(id)arg1 inDisparity:(id)arg2 outDisparity:(id)arg3 focusObject:(struct PTFocus { float x1; float x2; float x3; float x4; float x5; float x6; })arg4 foregroundBlurLimitingFactor:(float)arg5;
- (int)detectDilatedEdges:(id)arg1 inDisparity:(id)arg2 tempEdges:(id)arg3 outEdges:(id)arg4 focusObject:(struct PTFocus { float x1; float x2; float x3; float x4; float x5; float x6; })arg5 disparityDiffMinMax:(id)arg6 edgeTolerance:(float)arg7;
- (void)focusEdgeMask:(id)arg1 inDisparityDiff:(id)arg2 focusObject:(struct PTFocus { float x1; float x2; float x3; float x4; float x5; float x6; })arg3 focusEdge:(struct PTFocusEdge { float x1; float x2; float x3; float x4; })arg4 outFocusEdgeMask:(id)arg5;
- (id)initWithMetalContext:(id)arg1;
- (int)sobelEdgeDetection:(id)arg1 inImage:(id)arg2 outEdges:(id)arg3 edgeTolerance:(float)arg4;

@end
