
@protocol CLKUILegibilityView <NSObject>

@required

- (bool)legibilityEnabled;
- (void)setLegibilityEnabled:(bool)arg1;
- (void)setShadowBlur:(double)arg1;
- (void)setShadowColor:(UIColor *)arg1;
- (double)shadowBlur;
- (UIColor *)shadowColor;

@end
