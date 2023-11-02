
@interface PKConnectedCircleFlagView : UIView {
    UIView * _backgroundView;
    UIColor * _flagBackgroundColor;
    UIImageView * _imageView;
}

@property (nonatomic, readonly) UIColor *flagBackgroundColor;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 isTemplateLayout:(bool)arg2;
- (id)flagBackgroundColor;
- (id)init;
- (id)initWithFlagBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
