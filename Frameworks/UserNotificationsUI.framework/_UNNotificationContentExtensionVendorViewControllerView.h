
@interface _UNNotificationContentExtensionVendorViewControllerView : UIView <UIScrollViewDelayedTouchesBeganGestureRecognizerClient>

@property (getter=_canScrollX, nonatomic, readonly) bool canScrollX;
@property (getter=_canScrollY, nonatomic, readonly) bool canScrollY;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) bool delaysContentTouches;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=_scrollHysteresis, nonatomic, readonly) double scrollHysteresis;
@property (readonly) Class superclass;
@property (getter=_touchDelayForScrollDetection, nonatomic, readonly) double touchDelayForScrollDetection;

- (bool)_canScrollX;
- (bool)_canScrollY;
- (double)_scrollHysteresis;
- (double)_touchDelayForScrollDetection;
- (bool)delaysContentTouches;
- (bool)touchesShouldBegin:(id)arg1 withEvent:(id)arg2 inContentView:(id)arg3;

@end
