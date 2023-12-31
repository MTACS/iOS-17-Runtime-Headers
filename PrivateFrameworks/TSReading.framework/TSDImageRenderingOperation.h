
@interface TSDImageRenderingOperation : TSDSwatchRenderingOperation {
    TSDImageInfo * mImageInfo;
    bool  mShouldClipVertically;
}

@property (retain) TSDImageInfo *imageInfo;

- (void)dealloc;
- (void)doWorkWithReadLock;
- (id)imageInfo;
- (id)initWithPreset:(id)arg1 imageSize:(struct CGSize { double x1; double x2; })arg2 imageScale:(double)arg3 swatchFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 imageInfo:(id)arg5 documentRoot:(id)arg6;
- (id)initWithPreset:(id)arg1 imageSize:(struct CGSize { double x1; double x2; })arg2 imageScale:(double)arg3 swatchFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 imageInfo:(id)arg5 documentRoot:(id)arg6 shouldClipVertically:(bool)arg7;
- (void)setImageInfo:(id)arg1;

@end
