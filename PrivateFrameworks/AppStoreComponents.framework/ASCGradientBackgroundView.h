
@interface ASCGradientBackgroundView : UIView {
    CAGradientLayer * _gradientLayer;
    UIView * _gradientOverlayView;
}

@property (nonatomic, readonly) CAGradientLayer *gradientLayer;
@property (nonatomic, readonly) UIView *gradientOverlayView;

+ (double)gradientPercentageOfBounds;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)gradientLayer;
- (id)gradientOverlayView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;

@end
