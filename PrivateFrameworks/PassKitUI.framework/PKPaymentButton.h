
@interface PKPaymentButton : UIButton {
    double  _cornerRadius;
    CAFilter * _highlightFilter;
    bool  _highlighted;
    CAShapeLayer * _layer;
    long long  _style;
    long long  _type;
}

@property (nonatomic) double cornerRadius;
@property (nonatomic) long long style;
@property (nonatomic) long long type;

+ (id)buttonWithType:(long long)arg1 style:(long long)arg2;
+ (Class)layerClass;

- (void).cxx_destruct;
- (void)_createHighlightFilterIfNecessary;
- (long long)_effectiveButtonStyle;
- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)applyAccessibilityValues;
- (double)cornerRadius;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithPaymentButtonType:(long long)arg1 paymentButtonStyle:(long long)arg2;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)setCornerRadius:(double)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setStyle:(long long)arg1;
- (void)setType:(long long)arg1;
- (long long)style;
- (void)traitCollectionDidChange:(id)arg1;
- (long long)type;

@end
