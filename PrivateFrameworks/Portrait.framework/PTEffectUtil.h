
@interface PTEffectUtil : NSObject {
    <MTLComputePipelineState> * _clear;
    <MTLComputePipelineState> * _copySingleChannel;
    <MTLComputePipelineState> * _effectSampleFaceRects;
    PTMetalContext * _metalContext;
    <MTLComputePipelineState> * _updateDisparityWithScreenCaptureRect;
    <MTLComputePipelineState> * _updateFocusObject;
}

+ (unsigned long long)aspectRatio:(struct CGSize { double x1; double x2; })arg1;
+ (id)faceRectsForVision:(/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 numberOfFaceRects:(int)arg2 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rotateNormalizedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 inverse:(bool)arg3;
+ (void)screenSpaceToCameraSpace:(void *)arg1 zValue:(void *)arg2 inverseProjection:(void *)arg3; // needs 3 arg types, found 2: float, struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }

- (void).cxx_destruct;
- (void)clearTexture:(id)arg1 outTex:(id)arg2;
- (void)copySingleChannelInTex:(id)arg1 outTex:(id)arg2;
- (id)initWithMetalContext:(id)arg1;
- (void)sampleFaceRectsWithMaxFaceRects:(int)arg1 faceRects:(/* Warning: Unrecognized filer type: '2' using 'void*' */ void**)arg2 faceRectsState:(int*)arg3 focusDisparityMax:(float)arg4 inDisparity:(id)arg5 outFaceDistanceArray:(id)arg6;
- (void)updateDisparityWithScreenCaptureRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inDisparity:(id)arg2 outDisparity:(id)arg3 focalLenIn35mmFilm:(float)arg4 fNumber:(float)arg5;
- (void)updateFocusObjectWithFaceRectCount:(int)arg1 disparityFocusOffsetSDOF:(struct PTDisparityFocusOffset { float x1; float x2; })arg2 disparityFocusOffsetReactions:(struct PTDisparityFocusOffset { float x1; float x2; })arg3 disparityFocusOffsetStudioLight:(struct PTDisparityFocusOffset { float x1; float x2; })arg4 exponentialMovingAverageSDOF:(float)arg5 exponentialMovingAverageStudioLight:(float)arg6 faceRectsState:(int*)arg7 isFirstFrame:(bool)arg8 emitNewReaction:(bool)arg9 focusOnAll:(bool)arg10 lastFocus:(id)arg11 inFaceDisparityArray:(id)arg12 outDisparityModifiers:(id)arg13 outDisparityFocus:(id)arg14 outStudioLightEffectModifier:(id)arg15 outUseDisparityBufferForReactions:(id)arg16;

@end
