
@protocol AVMobileChromelessSliderDelegate <NSObject>

@optional

- (void)slider:(AVMobileChromelessSlider *)arg1 didUpdateFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 forSliderMark:(AVMobileSliderMark *)arg3;
- (void)sliderDidBeginTracking:(AVMobileChromelessSlider *)arg1;
- (void)sliderDidEndTracking:(AVMobileChromelessSlider *)arg1;

@end
