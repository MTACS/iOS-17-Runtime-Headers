
@interface LPImageStackView : LPComponentView {
    NSMutableArray * _imageViews;
    NSArray * _images;
    LPImageViewStyle * _style;
}

+ (void)initialize;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_layoutImagesForSize:(struct CGSize { double x1; double x2; })arg1 applyingLayout:(bool)arg2;
- (id)initWithHost:(id)arg1;
- (id)initWithHost:(id)arg1 images:(id)arg2 style:(id)arg3;
- (void)layoutComponentView;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
