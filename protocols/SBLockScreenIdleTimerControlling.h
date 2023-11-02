
@protocol SBLockScreenIdleTimerControlling <NSObject>

@required

- (<SBIdleTimerCoordinating> *)idleTimerCoordinator;
- (void)setIdleTimerCoordinator:(id <SBIdleTimerCoordinating>)arg1;

@optional

- (void)addIdleTimerDisabledAssertionReason:(NSString *)arg1;
- (void)removeIdleTimerDisabledAssertionReason:(NSString *)arg1;
- (<SBFIdleTimerBehaviorProviding> *)requestIdleTimerBehaviorForReason:(NSString *)arg1;

@end
