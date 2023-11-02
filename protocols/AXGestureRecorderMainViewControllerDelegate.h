
@protocol AXGestureRecorderMainViewControllerDelegate <NSObject>

@optional

- (bool)gestureRecorder:(AXGestureRecorderMainViewController *)arg1 canSaveGestureWithName:(NSString *)arg2;
- (void)gestureRecorder:(AXGestureRecorderMainViewController *)arg1 saveGestureWithPropertyListRepresentation:(NSDictionary *)arg2;
- (void)gestureRecorder:(AXGestureRecorderMainViewController *)arg1 saveNamedReplayableGesture:(AXNamedReplayableGesture *)arg2;
- (void)gestureRecorder:(AXGestureRecorderMainViewController *)arg1 savePoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)gestureRecorder:(AXGestureRecorderMainViewController *)arg1 saveReplayableGesture:(AXReplayableGesture *)arg2;

@end
