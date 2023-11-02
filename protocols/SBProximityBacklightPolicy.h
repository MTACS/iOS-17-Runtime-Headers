
@protocol SBProximityBacklightPolicy <SBProximitySensorManagerObserver>

@required

- (SBIdleTimerGlobalCoordinator *)idleTimerGlobalCoordinator;
- (void)setIdleTimerGlobalCoordinator:(SBIdleTimerGlobalCoordinator *)arg1;
- (void)windowSceneDidConnect:(UIWindowScene *)arg1;

@end
