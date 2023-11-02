
@protocol CEKAbstractSlider <NSObject>

@required

- (unsigned long long)fontStyle;
- (struct { double x1; double x2; })gradientInsets;
- (bool)interactiveWhenHidden;
- (double)labelVerticalPadding;
- (double)levelIndicatorHeight;
- (void)removeGradients;
- (void)setFontStyle:(unsigned long long)arg1;
- (void)setGradientInsets:(struct { double x1; double x2; })arg1;
- (void)setInteractiveWhenHidden:(bool)arg1;
- (void)setLabelVerticalPadding:(double)arg1;
- (void)setLevelIndicatorHeight:(double)arg1;
- (void)setOpaqueGradientsWithColor:(UIColor *)arg1;
- (void)setSliderVerticalAlignment:(long long)arg1;
- (void)setSliderVerticalOffset:(double)arg1;
- (void)setTextOrientation:(long long)arg1;
- (void)setTextOrientation:(long long)arg1 animated:(bool)arg2;
- (void)setTitleAlignment:(long long)arg1;
- (void)setTransparentGradients;
- (void)setUseTickMarkLegibilityShadows:(bool)arg1;
- (long long)sliderVerticalAlignment;
- (double)sliderVerticalOffset;
- (long long)textOrientation;
- (long long)titleAlignment;
- (bool)useTickMarkLegibilityShadows;

@end
