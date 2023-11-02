
@interface CAMPanoramaUtilities : NSObject

+ (struct CGSize { double x1; double x2; })bufferSize;
+ (struct CGSize { double x1; double x2; })defaultPreviewSize;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })panoramaViewLayoutInsetsForLayoutStyle:(long long)arg1 referenceBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })panoramaViewPreviewStripInsetsForLayoutStyle:(long long)arg1;
+ (struct CGSize { double x1; double x2; })panoramaViewSizeForCaptureSize:(struct CGSize { double x1; double x2; })arg1 referenceBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 layoutStyle:(long long)arg3;
+ (struct CGSize { double x1; double x2; })previewStripSizeForCaptureSize:(struct CGSize { double x1; double x2; })arg1 referenceBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 layoutStyle:(long long)arg3;
+ (double)singlePreviewFrameWidthForPreviewHeight:(double)arg1;

@end
