
@interface ASAuthorizationAppleIDButton : UIControl {
    double  _cornerRadius;
    CAFilter * _highlightFilter;
    long long  _style;
    long long  _type;
}

@property (nonatomic) double cornerRadius;

+ (id)buttonWithType:(long long)arg1 style:(long long)arg2;
+ (double)defaultCornerRadius;
+ (Class)layerClass;

- (void).cxx_destruct;
- (long long)_ak_buttonStyle;
- (long long)_ak_buttonType;
- (void)_createHighlightFilterIfNecessary;
- (void)_drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2;
- (void)_performAnimationToSetHighlighted:(bool)arg1;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (double)cornerRadius;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAuthorizationButtonType:(long long)arg1 authorizationButtonStyle:(long long)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isAccessibilityElement;
- (void)layoutSubviews;
- (void)setCornerRadius:(double)arg1;
- (void)setHighlighted:(bool)arg1;

@end
