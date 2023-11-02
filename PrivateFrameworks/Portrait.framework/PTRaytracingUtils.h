
@interface PTRaytracingUtils : NSObject {
    <MTLComputePipelineState> * _disparityCenterAndClip;
    <MTLComputePipelineState> * _edgeDilation;
    <MTLComputePipelineState> * _focusEdgeMask;
    PTMetalContext * _metalContext;
    <MTLComputePipelineState> * _sobelEdgeDetector;
}

+ (id)computeRandomUChars:(id)arg1 rayCount:(int)arg2;
+ (void)computeUnitCirclePoints:(struct PTRandomDisk { struct half2 { /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*x_1_1_1; void*x_1_1_2; } x1[94]; int x2; void*x3; }*)arg1 numberOfPatternCircles:(int)arg2;
+ (struct PTFocusEdge { float x1; float x2; float x3; float x4; })createFocusEdge;
+ (struct PTFocus { float x1; float x2; float x3; float x4; float x5; float x6; })createFocusObject:(void *)arg1 anamorphicFactor:(void *)arg2 colorSize:(void *)arg3 circleOfConfusionReference:(void *)arg4 fNumberLimitWeight:(void *)arg5; // needs 5 arg types, found 4: id, float, float, float
+ (float)focalLength;
+ (float)frameWidth;

- (void).cxx_destruct;
- (int)detectDilatedEdges:(id)arg1 inDisparity:(id)arg2 tempEdges:(id)arg3 outEdges:(id)arg4 focusObject:(struct PTFocus { float x1; float x2; float x3; float x4; float x5; float x6; })arg5 disparityDiffMinMax:(id)arg6 edgeTolerance:(float)arg7;
- (void)disparityCenterAndClip:(void *)arg1 inDisparity:(void *)arg2 outDisparity:(void *)arg3 centeringValue:(void *)arg4 clipMinMax:(void *)arg5; // needs 5 arg types, found 4: id, id, id, float
- (void)focusEdgeMask:(id)arg1 inDisparityDiff:(id)arg2 focusEdge:(struct PTFocusEdge { float x1; float x2; float x3; float x4; })arg3 outFocusEdgeMask:(id)arg4;
- (id)initWithMetalContext:(id)arg1;
- (int)sobelEdgeDetection:(id)arg1 inImage:(id)arg2 outEdges:(id)arg3 edgeTolerance:(float)arg4;

@end
