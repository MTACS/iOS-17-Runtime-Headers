
@protocol CAMZoomSliderDelegate <NSObject>

@required

- (void)zoomSliderDidBeginAutozooming:(CAMZoomSlider *)arg1;
- (void)zoomSliderDidEndAutozooming:(CAMZoomSlider *)arg1;
- (void)zoomSliderDidEndZooming:(CAMZoomSlider *)arg1;

@optional

- (void)willHideZoomSlider:(CAMZoomSlider *)arg1 withAnimationDuration:(double)arg2;
- (void)willShowZoomSlider:(CAMZoomSlider *)arg1 withAnimationDuration:(double)arg2;

@end
