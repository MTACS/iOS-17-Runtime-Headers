
@protocol SBDeviceApplicationSceneStatusBarStateObserver <NSObject>

@optional

- (void)didInvalidateStatusBarDescriptionForSceneWithIdentifier:(NSString *)arg1;
- (void)sceneWithIdentifier:(NSString *)arg1 didChangeBackgroundActivitiesToSuppressTo:(NSSet *)arg2;
- (void)sceneWithIdentifier:(NSString *)arg1 didChangeSceneInterfaceOrientationTo:(long long)arg2;
- (void)sceneWithIdentifier:(NSString *)arg1 didChangeStatusBarAlphaTo:(double)arg2;
- (void)sceneWithIdentifier:(NSString *)arg1 didChangeStatusBarAvoidanceFrameTo:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)sceneWithIdentifier:(NSString *)arg1 didChangeStatusBarHiddenTo:(bool)arg2 withAnimation:(long long)arg3;
- (void)sceneWithIdentifier:(NSString *)arg1 didChangeStatusBarOrientationTo:(long long)arg2;
- (void)sceneWithIdentifier:(NSString *)arg1 didChangeStatusBarStyleTo:(long long)arg2;
- (void)sceneWithIdentifier:(NSString *)arg1 didChangeStatusBarStyleTo:(long long)arg2 forPartWithIdentifier:(NSString *)arg3;

@end
