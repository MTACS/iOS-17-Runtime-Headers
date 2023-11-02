
@protocol AXGestureRecorderViewDelegate <NSObject>

@required

- (bool)canToggleChromeForGestureRecorderView:(AXGestureRecorderView *)arg1;
- (UIBezierPath *)gestureRecorderView:(AXGestureRecorderView *)arg1 dynamicFingerPathAtIndex:(unsigned long long)arg2;
- (void)gestureRecorderView:(AXGestureRecorderView *)arg1 setChromeVisible:(bool)arg2;
- (bool)isChromeVisibleForGestureRecorderView:(AXGestureRecorderView *)arg1;
- (unsigned long long)numberOfDynamicFingerPathsInGestureRecorderView:(AXGestureRecorderView *)arg1;

@end
