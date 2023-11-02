
@protocol SBRestartManagerDelegate <NSObject>

@optional

- (void)restartManager:(SBRestartManager *)arg1 willRestartWithTransitionRequest:(SBRestartTransitionRequest *)arg2;
- (void)restartManagerExitImminent:(SBRestartManager *)arg1;
- (void)restartManagerWillReboot:(SBRestartManager *)arg1;
- (void)restartManagerWillShutdown:(SBRestartManager *)arg1;

@end
