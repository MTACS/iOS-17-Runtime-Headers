
@protocol MRUGroupSliderDelegate <NSObject>

@optional

- (void)sliderLongPressActionDidBegin:(MRUGroupSlider *)arg1;
- (void)sliderLongPressActionDidCancel:(MRUGroupSlider *)arg1;
- (void)sliderLongPressActionDidFinish:(MRUGroupSlider *)arg1;
- (bool)sliderShouldAllowLongPress:(MRUGroupSlider *)arg1;

@end
