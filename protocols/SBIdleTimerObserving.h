
@protocol SBIdleTimerObserving <NSObject>

@optional

- (void)idleTimerDidExpire:(id <SBIdleTimer>)arg1;
- (void)idleTimerDidRefresh:(id <SBIdleTimer>)arg1;
- (void)idleTimerDidResetForUserAttention:(id <SBIdleTimer>)arg1;
- (void)idleTimerDidWarn:(id <SBIdleTimer>)arg1;

@end
