
@interface LPMultipleImageView : LPComponentView {
    NSMutableArray * _imageViews;
    NSArray * _images;
    LPImageViewStyle * _style;
}

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_availableSizeForImageNumber:(unsigned long long)arg1 withLayout:(unsigned long long)arg2 withinSize:(struct CGSize { double x1; double x2; })arg3 applyingLayout:(bool)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_computeRectForImageAtIndex:(unsigned long long)arg1 fittingSize:(struct CGSize { double x1; double x2; }*)arg2 width:(double*)arg3 height:(double*)arg4 size:(struct CGSize { double x1; double x2; })arg5 multipleImageLayout:(unsigned long long)arg6;
- (void)ensureImageViews;
- (id)initWithHost:(id)arg1;
- (id)initWithHost:(id)arg1 images:(id)arg2 style:(id)arg3;
- (void)layoutComponentView;
- (struct CGSize { double x1; double x2; })layoutImagesForSize:(struct CGSize { double x1; double x2; })arg1 applyingLayout:(bool)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
