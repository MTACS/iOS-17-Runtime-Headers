
@interface MUImageView : UIView {
    UIImageView * _contentImageView;
    UIImageView * _fallbackImageView;
}

@property (nonatomic, readonly) UIImageView *contentImageView;
@property (nonatomic) UIImage *fallbackImage;
@property (nonatomic) UIImage *image;

- (void).cxx_destruct;
- (void)_setupSubviews;
- (void)_updateAppearance;
- (id)contentImageView;
- (id)fallbackImage;
- (id)image;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)setFallbackImage:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImage:(id)arg1 animated:(bool)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;

@end
