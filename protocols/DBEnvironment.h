
@protocol DBEnvironment <DBEventHandling, DBProcessMonitorObserving, FBSceneManagerDelegate, NSObject>

@required

- (void)addObserver:(id <FBSceneManagerObserver>)arg1;
- (DBApplicationInfo *)applicationInfoForScene:(FBScene *)arg1;
- (FBSDisplayConfiguration *)displayConfiguration;
- (FBSDisplayIdentity *)displayIdentity;
- (DBEnvironmentConfiguration *)environmentConfiguration;
- (UIWindow *)focusWindow;
- (void)invalidate;
- (bool)preflightRequiredForApplicationInfo:(DBApplicationInfo *)arg1;
- (void)removeObserver:(id <FBSceneManagerObserver>)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsetsForAppInfo:(DBApplicationInfo *)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsetsForAppInfo:(DBApplicationInfo *)arg1 proxyAppInfo:(DBApplicationInfo *)arg2;
- (FBScene *)sceneForAppInfo:(DBApplicationInfo *)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sceneFrameForAppInfo:(DBApplicationInfo *)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sceneFrameForAppInfo:(DBApplicationInfo *)arg1 proxyAppInfo:(DBApplicationInfo *)arg2;
- (NSString *)sceneIdentifierForAppInfo:(DBApplicationInfo *)arg1;
- (UIWindow *)systemGestureWindow;
- (DBWorkspace *)workspace;

@optional

- (<CRSIconLayoutVehicleDataProviding> *)iconLayoutDataProvider;
- (long long)sceneInterfaceStyleForAppInfo:(DBApplicationInfo *)arg1 proxyAppInfo:(DBApplicationInfo *)arg2;
- (long long)sceneMapInterfaceStyleForAppInfo:(DBApplicationInfo *)arg1 proxyAppInfo:(DBApplicationInfo *)arg2;
- (bool)shouldDisableFiveRowKeyboards;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })statusBarInsets;

@end
