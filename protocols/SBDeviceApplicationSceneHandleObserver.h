
@protocol SBDeviceApplicationSceneHandleObserver <SBSceneHandleObserver>

@optional

- (void)sceneHandle:(SBDeviceApplicationSceneHandle *)arg1 didChangeActivationConditionsData:(NSData *)arg2;
- (void)sceneHandle:(SBDeviceApplicationSceneHandle *)arg1 didChangeBackgroundActivitiesToSuppress:(NSSet *)arg2;
- (void)sceneHandle:(SBDeviceApplicationSceneHandle *)arg1 didChangeContentPrefersToDisableClipping:(bool)arg2;
- (void)sceneHandle:(SBDeviceApplicationSceneHandle *)arg1 didChangeEffectiveForegroundness:(bool)arg2;
- (void)sceneHandle:(SBDeviceApplicationSceneHandle *)arg1 didChangeSceneTitle:(NSString *)arg2;
- (void)sceneHandle:(SBDeviceApplicationSceneHandle *)arg1 didChangeStatusBarAvoidanceFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)sceneHandle:(SBDeviceApplicationSceneHandle *)arg1 didChangeStatusBarParts:(long long)arg2;

@end
