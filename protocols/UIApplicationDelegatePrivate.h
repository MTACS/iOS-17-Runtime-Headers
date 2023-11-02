
@protocol UIApplicationDelegatePrivate <NSObject>

@optional

- (void)_application:(UIApplication *)arg1 didDiscardCanvasDefinitions:(NSSet *)arg2;
- (void)_application:(UIApplication *)arg1 didReceiveViewServiceRequestForViewControllerClassName:(NSString *)arg2;
- (void)_application:(UIApplication *)arg1 handleSiriTask:(AFSiriTask *)arg2;
- (void)_application:(UIApplication *)arg1 statusBarTouchesEnded:(UIEvent *)arg2;
- (void)_application:(UIApplication *)arg1 willConnectCanvas:(UICanvas *)arg2;
- (_UICanvasDefinition *)_application:(UIApplication *)arg1 willCreateCanvasWithDefinition:(_UICanvasDefinition *)arg2 withOptions:(NSDictionary *)arg3;
- (void)application:(UIApplication *)arg1 didFinishLaunchingSuspendedWithOptions:(NSDictionary *)arg2;
- (void)application:(UIApplication *)arg1 userAcceptedCloudKitShareWithMetadata:(CKShareMetadata *)arg2;

@end
