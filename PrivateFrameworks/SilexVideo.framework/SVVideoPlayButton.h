
@interface SVVideoPlayButton : SVButton

+ (id)playImage;

- (id)accessibilityHint;
- (id)accessibilityLabel;
- (void)dealloc;
- (void)displayAsPaused;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAccessibilityElement;
- (void)layoutSubviews;
- (void)updateBackgroundColor;

@end
