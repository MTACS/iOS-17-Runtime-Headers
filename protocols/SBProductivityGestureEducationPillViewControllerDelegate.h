
@protocol SBProductivityGestureEducationPillViewControllerDelegate <NSObject>

@required

- (void)gestureEducationPillViewControllerDidDisappear:(SBProductivityGestureEducationPillViewController *)arg1;
- (void)gestureEducationPillViewControllerDidReceiveUserTap:(SBProductivityGestureEducationPillViewController *)arg1;
- (void)gestureEducationPillViewControllerFailsToAppear:(SBProductivityGestureEducationPillViewController *)arg1;
- (void)gestureEducationPillViewControllerMarqueeStarted:(SBProductivityGestureEducationPillViewController *)arg1 duration:(double)arg2;
- (void)gestureEducationPillViewControllerWillAppear:(SBProductivityGestureEducationPillViewController *)arg1;

@end
