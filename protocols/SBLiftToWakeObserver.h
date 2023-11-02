
@protocol SBLiftToWakeObserver <NSObject>

@optional

- (void)liftToWakeController:(SBLiftToWakeController *)arg1 didIgnoreTransition:(long long)arg2;
- (void)liftToWakeController:(SBLiftToWakeController *)arg1 didObserveTransition:(long long)arg2 deviceOrientation:(long long)arg3;
- (void)liftToWakeControllerEnablementDidChange:(SBLiftToWakeController *)arg1;

@end
