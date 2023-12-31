
@protocol UIScrollViewDelayedTouchesBeganGestureRecognizerClient <NSObject>

@required

- (bool)_canScrollX;
- (bool)_canScrollY;
- (double)_scrollHysteresis;
- (double)_touchDelayForScrollDetection;
- (bool)delaysContentTouches;
- (bool)touchesShouldBegin:(NSSet *)arg1 withEvent:(UIEvent *)arg2 inContentView:(UIView *)arg3;

@end
