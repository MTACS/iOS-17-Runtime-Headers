
@protocol CEKTickMarksConfiguration <NSObject>

@required

- (UIColor *)mainTickMarkColor;
- (long long)mainTickMarkInterval;
- (long long)mainTickMarkOffset;
- (UIColor *)secondaryTickMarkColor;
- (void)setMainTickMarkColor:(UIColor *)arg1;
- (void)setMainTickMarkInterval:(long long)arg1;
- (void)setMainTickMarkOffset:(long long)arg1;
- (void)setSecondaryTickMarkColor:(UIColor *)arg1;
- (void)setTickMarkSpacing:(double)arg1;
- (void)setUseTickMarkLegibilityShadows:(bool)arg1;
- (double)tickMarkSpacing;
- (bool)useTickMarkLegibilityShadows;

@end
