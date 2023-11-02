
@interface _UIWindowSceneFBSSceneLifecycleMonitor : _UISceneLifecycleMonitor {
    bool  _connected;
    bool  _transitioning;
    NSNumber * _transitioningState;
}

- (void).cxx_destruct;
- (id)_windowScene;
- (long long)currentActivationState;
- (void)didEnterBackground;
- (id)initWithScene:(id)arg1;
- (void)transitionToTargetState:(id)arg1 fromState:(id)arg2 withTransitionContext:(id)arg3 preparations:(id /* block */)arg4;
- (void)willBecomeActive;

@end
