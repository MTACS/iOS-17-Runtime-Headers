
@interface MUVerifiedLogoImageView : MUImageView {
    CAShapeLayer * _innerRingLayer;
}

@property (nonatomic, readonly) UIColor *innerRingColor;
@property (nonatomic, readonly) UIColor *outerRingColor;

- (void).cxx_destruct;
- (void)_setupCustomBorder;
- (void)_updateInnerRingFrame;
- (void)_updateRingColors;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)innerRingColor;
- (void)layoutSubviews;
- (id)outerRingColor;

@end
