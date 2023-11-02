
@protocol SBDashBoardIdleTimerProviderDelegate

@required

- (<SBIdleTimer> *)dashBoardIdleTimerProvider:(SBDashBoardIdleTimerProvider *)arg1 didProposeBehavior:(id <SBFIdleTimerBehaviorProviding>)arg2 reason:(NSString *)arg3;
- (void)idleTimerDidChange:(SBDashBoardIdleTimerProvider *)arg1;
- (void)idleTimerDidExpire:(SBDashBoardIdleTimerProvider *)arg1;
- (void)idleTimerDidRefresh:(SBDashBoardIdleTimerProvider *)arg1;
- (void)idleTimerDidWarn:(SBDashBoardIdleTimerProvider *)arg1;
- (void)idleTimerWillRefresh:(SBDashBoardIdleTimerProvider *)arg1;

@end
