
@interface SBSceneViewAppIconView : UIView {
    SBIconImageView * _imageView;
    UILabel * _label;
    PLPlatterView * _shadowView;
}

@property (nonatomic, readonly) SBIconImageView *imageView;
@property (nonatomic, readonly) UILabel *label;
@property (nonatomic, readonly) PLPlatterView *shadowView;

- (void).cxx_destruct;
- (id)imageView;
- (id)initWithIcon:(id)arg1;
- (id)label;
- (void)layoutSubviews;
- (id)shadowView;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
