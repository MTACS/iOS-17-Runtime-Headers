
@protocol _PKColorAlphaSlider <NSObject>

@required

- (UIColor *)color;
- (long long)colorUserInterfaceStyle;
- (<_PKColorAlphaSliderDelegate> *)delegate;
- (double)maxAlpha;
- (double)minAlpha;
- (void)setColor:(UIColor *)arg1;
- (void)setColor:(UIColor *)arg1 animated:(bool)arg2;
- (void)setColorUserInterfaceStyle:(long long)arg1;
- (void)setDelegate:(id <_PKColorAlphaSliderDelegate>)arg1;
- (void)setMaxAlpha:(double)arg1;
- (void)setMinAlpha:(double)arg1;

@end
