
@protocol SBGrabberTongueDelegate <NSObject>

@required

- (bool)grabberTongue:(SBGrabberTongue *)arg1 shouldShowTongueOnFirstSwipeWithEdgeLocation:(double)arg2;
- (bool)grabberTongueOrPullEnabled:(SBGrabberTongue *)arg1 forGestureRecognizer:(UIGestureRecognizer *)arg2;

@optional

- (UIPanGestureRecognizer *)customGestureRecognizerForGrabberTongue:(SBGrabberTongue *)arg1;
- (bool)grabberTongue:(SBGrabberTongue *)arg1 shouldAllowSecondSwipeWithEdgeLocation:(double)arg2;
- (bool)grabberTongue:(SBGrabberTongue *)arg1 shouldDismissTongueOnSecondSwipeWithEdgeLocation:(double)arg2;
- (bool)grabberTongue:(SBGrabberTongue *)arg1 shouldReceiveTouch:(UITouch *)arg2;
- (void)grabberTongueBeganPulling:(SBGrabberTongue *)arg1 withDistance:(double)arg2 andVelocity:(double)arg3 andGesture:(UIGestureRecognizer *)arg4;
- (void)grabberTongueCanceledPulling:(SBGrabberTongue *)arg1 withDistance:(double)arg2 andVelocity:(double)arg3 andGesture:(UIGestureRecognizer *)arg4;
- (void)grabberTongueDidDismiss:(SBGrabberTongue *)arg1;
- (void)grabberTongueDidPresentInteractively:(SBGrabberTongue *)arg1 withDistance:(double)arg2 andVelocity:(double)arg3;
- (void)grabberTongueEndedPulling:(SBGrabberTongue *)arg1 withDistance:(double)arg2 andVelocity:(double)arg3 andGesture:(UIGestureRecognizer *)arg4;
- (bool)grabberTongueHonorsAmbiguousActivationMargin:(SBGrabberTongue *)arg1;
- (void)grabberTongueTapped:(SBGrabberTongue *)arg1;
- (void)grabberTongueUpdatedPulling:(SBGrabberTongue *)arg1 withDistance:(double)arg2 andVelocity:(double)arg3 andGesture:(UIGestureRecognizer *)arg4;
- (void)grabberTongueWillDismiss:(SBGrabberTongue *)arg1;
- (void)grabberTongueWillPresent:(SBGrabberTongue *)arg1;
- (void)grabberTongueWillPresentInteractively:(SBGrabberTongue *)arg1 withDistance:(double)arg2 andVelocity:(double)arg3;
- (SBIndirectPanGestureRecognizer *)indirectPanGestureRecognizerForGrabberTongue:(SBGrabberTongue *)arg1;
- (unsigned long long)indirectPanSystemGestureTypeForGrabberTongue:(SBGrabberTongue *)arg1;
- (bool)shouldSuppressTongueViewForGrabberTongue:(SBGrabberTongue *)arg1;

@end
