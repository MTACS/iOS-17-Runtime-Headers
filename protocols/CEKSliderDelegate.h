
@protocol CEKSliderDelegate <NSObject>

@optional

- (void)slider:(CEKSlider *)arg1 willUpdateValue:(double*)arg2 withVelocity:(double)arg3;
- (void)sliderDidEndScrolling:(CEKSlider *)arg1;
- (void)sliderDidScroll:(CEKSlider *)arg1;
- (void)sliderWillBeginScrolling:(CEKSlider *)arg1;
- (void)sliderWillEndScrolling:(CEKSlider *)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;

@end
