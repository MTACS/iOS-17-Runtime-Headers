
@interface TSDSwatchCache : NSObject {
    NSOperationQueue * mOperationQueue;
}

+ (id)swatchCache;

- (void)applyFakeShadowForWhitePresetsIfNecessary:(id)arg1 documentRoot:(id)arg2;
- (void)dealloc;
- (id)imageForImagePreset:(id)arg1 imageSize:(struct CGSize { double x1; double x2; })arg2 imageScale:(double)arg3 imageInfo:(id)arg4 shouldClipVertically:(bool)arg5 documentRoot:(id)arg6;
- (id)imageForImagePreset:(id)arg1 imageSize:(struct CGSize { double x1; double x2; })arg2 imageScale:(double)arg3 swatchFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 imageInfo:(id)arg5 shouldClipVertically:(bool)arg6 documentRoot:(id)arg7;
- (id)imageForMoviePreset:(id)arg1 imageSize:(struct CGSize { double x1; double x2; })arg2 imageScale:(double)arg3 movieInfo:(id)arg4 shouldClipVertically:(bool)arg5 documentRoot:(id)arg6;
- (id)imageForMoviePreset:(id)arg1 imageSize:(struct CGSize { double x1; double x2; })arg2 imageScale:(double)arg3 swatchFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 movieInfo:(id)arg5 shouldClipVertically:(bool)arg6 documentRoot:(id)arg7;
- (id)imageForShapePreset:(id)arg1 imageSize:(struct CGSize { double x1; double x2; })arg2 imageScale:(double)arg3 shapeType:(int)arg4 angle:(double)arg5 documentRoot:(id)arg6;
- (id)imageForShapePreset:(id)arg1 imageSize:(struct CGSize { double x1; double x2; })arg2 imageScale:(double)arg3 swatchFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 shapeType:(int)arg5 angle:(double)arg6 documentRoot:(id)arg7;
- (struct CGSize { double x1; double x2; })imageSizeForPreset:(id)arg1 swatchSize:(struct CGSize { double x1; double x2; })arg2;
- (id)init;
- (id)p_maskInfoForMovieInfo:(id)arg1 context:(id)arg2;
- (struct CGImage { }*)p_newImageWithConnectionLineKnobsForShape:(id)arg1 atScale:(double)arg2 ofSize:(struct CGSize { double x1; double x2; })arg3 overImage:(struct CGImage { }*)arg4;
- (id)p_thumbnailImageDataForImageData:(id)arg1;
- (struct CGSize { double x1; double x2; })shapeSwatchInset;
- (void)warmStyle:(id)arg1 withFillProperty:(int)arg2 documentRoot:(id)arg3;

@end
