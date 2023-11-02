
@protocol BLSHEnvironmentTransitionStateDelegate <NSObject>

@required

- (<BLSHInactiveBudgetPolicing_Private> *)inactiveBudgetPolicy;
- (<BLSHOSTimerProviding> *)osTimerProvider;
- (void)transitionState:(BLSHEnvironmentTransitionState *)arg1 didBeginUpdateToBacklightState:(long long)arg2 visualState:(BLSBacklightSceneVisualState *)arg3;
- (void)transitionState:(BLSHEnvironmentTransitionState *)arg1 didCompleteUpdateToBacklightState:(long long)arg2 visualState:(BLSBacklightSceneVisualState *)arg3;
- (void)transitionState:(BLSHEnvironmentTransitionState *)arg1 didUpdateToDateSpecifier:(BLSAlwaysOnDateSpecifier *)arg2;

@end
