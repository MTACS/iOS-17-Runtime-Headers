
@interface _UISceneLifecycleMonitor : NSObject {
    UIScene * __scene;
}

@property (nonatomic) UIScene *_scene;
@property (nonatomic, readonly) long long currentActivationState;

- (void).cxx_destruct;
- (id)_scene;
- (long long)currentActivationState;
- (void)didBecomeActive;
- (void)didConnect;
- (void)didDisonnect;
- (void)didEnterBackground;
- (void)didEnterForeground;
- (void)didResignActive;
- (id)initWithScene:(id)arg1;
- (void)set_scene:(id)arg1;
- (void)transitionToTargetState:(id)arg1 fromState:(id)arg2 withTransitionContext:(id)arg3 preparations:(id /* block */)arg4;
- (void)willBecomeActive;
- (void)willConnect;
- (void)willDisonnect;
- (void)willEnterBackground;
- (void)willEnterForeground;
- (void)willResignActive;

@end
