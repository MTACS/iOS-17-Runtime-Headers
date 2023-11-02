
@interface PKConnectedCircleCheckmarkView : UIView {
    UIColor * _checkmarkBackgroundColor;
    UIColor * _checkmarkTintColor;
    UIImageView * _imageView;
}

@property (nonatomic, readonly) UIColor *checkmarkBackgroundColor;
@property (nonatomic, readonly) UIColor *checkmarkTintColor;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 isTemplateLayout:(bool)arg2;
- (id)checkmarkBackgroundColor;
- (id)checkmarkTintColor;
- (id)init;
- (id)initWithCheckmarkTintColor:(id)arg1 checkmarkBackgroundColor:(id)arg2;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
