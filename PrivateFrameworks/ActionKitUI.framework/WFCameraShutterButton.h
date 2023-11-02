
@interface WFCameraShutterButton : UIControl {
    CAShapeLayer * _buttonLayer;
    CAShapeLayer * _outlineLayer;
}

@property (nonatomic) CAShapeLayer *buttonLayer;
@property (nonatomic) CAShapeLayer *outlineLayer;

- (void).cxx_destruct;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)buttonLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isAccessibilityElement;
- (void)layoutSubviews;
- (id)outlineLayer;
- (void)setButtonLayer:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setOutlineLayer:(id)arg1;

@end
