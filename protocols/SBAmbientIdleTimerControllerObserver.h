
@protocol SBAmbientIdleTimerControllerObserver <NSObject>

@optional

- (void)ambientIdleTimerController:(SBAmbientIdleTimerController *)arg1 didChangeIdleTimerBehavior:(id <SBFIdleTimerBehaviorProviding>)arg2;
- (void)ambientIdleTimerController:(SBAmbientIdleTimerController *)arg1 didUpdateUserSleepPredicted:(bool)arg2;
- (void)ambientIdleTimerControllerSuppressionDidEnd:(SBAmbientIdleTimerController *)arg1;

@end
