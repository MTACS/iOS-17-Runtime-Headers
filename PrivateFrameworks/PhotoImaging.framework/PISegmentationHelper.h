
@interface PISegmentationHelper : NSObject

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_computeAvoidingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 imageSize:(struct CGSize { double x1; double x2; })arg2 maxYMotion:(double)arg3 segmentationMatte:(id)arg4 layoutConfiguration:(id)arg5 context:(id)arg6;
+ (double)_computeHeadroomZoomFactorWithVisibleFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 scaleCenter:(struct CGPoint { double x1; double x2; })arg2 initialOverlap:(struct PISegmentationClockOverlapResult { id x1; unsigned long long x2; double x3; double x4; })arg3 matte:(id)arg4 layoutConfiguration:(id)arg5 context:(id)arg6;
+ (id)backgroundForImage:(id)arg1 matte:(id)arg2;
+ (id)backgroundForImage:(id)arg1 matte:(id)arg2 infill:(id)arg3;
+ (struct PISegmentationBimodalScore { float x1; float x2; float x3; })bimodalScoreForHistogram:(id)arg1;
+ (double)computeAlphaCoverageWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 foregroundImage:(id)arg2 context:(id)arg3;
+ (double)computeAvoidOverlapYOffsetWithVisibleFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 imageSize:(struct CGSize { double x1; double x2; })arg2 segmentationMatte:(id)arg3 layoutConfiguration:(id)arg4 outputUnsafeOverlap:(double*)arg5 context:(id)arg6;
+ (struct PISegmentationClockOverlapResult { id x1; unsigned long long x2; double x3; double x4; })computeClockLayerOrderWithVisibleFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 segmentationMatte:(id)arg2 layoutConfiguration:(id)arg3 context:(id)arg4 interactive:(bool)arg5;
+ (double)computeHeadroomZoomFactorWithVisibleFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 zoomTowardsTop:(bool*)arg2 matte:(id)arg3 layoutConfiguration:(id)arg4 context:(id)arg5;
+ (struct PISegmentationInactiveResult { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; })computeInactiveFrameWithVisibleFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 imageSize:(struct CGSize { double x1; double x2; })arg2 canUpdateVisibleRect:(bool)arg3 considerHeadroom:(bool)arg4 segmentationMatte:(id)arg5 layoutConfiguration:(id)arg6 context:(id)arg7;
+ (double)computeMatteCoverageWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 segmentationMatte:(id)arg2 context:(id)arg3;
+ (double)computeTargetOverlapYOffsetWithVisibleFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 imageSize:(struct CGSize { double x1; double x2; })arg2 segmentationMatte:(id)arg3 layoutConfiguration:(id)arg4 context:(id)arg5;
+ (id)debugImageForColorAnalysis:(id)arg1 inputImage:(id)arg2 visibleFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
+ (id)debugImageWithInputImage:(id)arg1 finalLayout:(id)arg2 intermediateLayout:(id)arg3 faceRects:(id)arg4 saliencyPreferrectRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 saliencyAcceptableRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg6 settlingEffectRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg7;
+ (id)debugImageWithInputImage:(id)arg1 fullSize:(struct CGSize { double x1; double x2; })arg2 debugRects:(id)arg3 label:(id)arg4;
+ (id)debugImageWithInputImage:(id)arg1 layout:(id)arg2 faceRects:(id)arg3 saliencyPreferrectRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 saliencyAcceptableRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 gazeAreaRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg6 settlingEffectRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg7;
+ (id)debugPreviewRenderWithBackground:(id)arg1 foreground:(id)arg2 layout:(id)arg3 style:(id)arg4;
+ (id)dilateMask:(id)arg1 withRadius:(double)arg2;
+ (id)erodeMask:(id)arg1 withRadius:(double)arg2;
+ (id)foregroundForImage:(id)arg1 matte:(id)arg2;
+ (float)groundedScoreForSegmentationMatte:(id)arg1 context:(id)arg2;
+ (id)histogramForSegmentationMatte:(id)arg1;
+ (id)histogramForSegmentationMatteImage:(id)arg1;
+ (id)imageFromImageLayer:(id)arg1;
+ (id)imageWithColor:(id)arg1 extent:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (id)infillMaskForSegmentationMatte:(id)arg1;
+ (id)invertImage:(id)arg1;
+ (id)localConfidenceImage:(id)arg1;
+ (float)localConfidenceScoreForLocalConfidenceImage:(id)arg1 extent:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 context:(id)arg3;
+ (bool)matteHistogramIndicatesSubjectDetected:(id)arg1;
+ (id)openMask:(id)arg1 withRadius:(double)arg2;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })scaleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 scaleFactor:(double)arg2 scaleCenter:(struct CGPoint { double x1; double x2; })arg3;
+ (id)thresholdImage:(id)arg1 withThreshold:(double)arg2;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })tightCropFrameFromMatteImage:(id)arg1;
+ (bool)topEdgeHasNoContactWithInspectionMatte:(id)arg1 context:(id)arg2;
+ (id)upsampleBackgroundImage:(id)arg1 toSize:(struct CGSize { double x1; double x2; })arg2;
+ (id)upsampleMatteImage:(id)arg1 guideImage:(id)arg2;

@end
