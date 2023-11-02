
@protocol AXGestureRecorderViewControllerDelegate <NSObject>

@required

- (void)gestureRecorderViewController:(AXGestureRecorderViewController *)arg1 didStartRecordingAtomicFingerPathAtPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)gestureRecorderViewController:(AXGestureRecorderViewController *)arg1 setChromeVisible:(bool)arg2;
- (void)gestureRecorderViewControllerDidFinishReplayingRecordedGesture:(AXGestureRecorderViewController *)arg1;
- (void)gestureRecorderViewControllerDidStopRecordingAtomicFingerPath:(AXGestureRecorderViewController *)arg1;
- (bool)isChromeVisibleForGestureRecorderViewController:(AXGestureRecorderViewController *)arg1;
- (double)maximumDurationOfRecordedGestureForGestureRecorderViewController:(AXGestureRecorderViewController *)arg1;

@end
