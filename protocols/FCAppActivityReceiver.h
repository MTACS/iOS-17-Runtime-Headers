
@protocol FCAppActivityReceiver <NSObject>

@required

- (void)sceneDidBecomeActive;
- (void)sceneDidBecomeActiveWithURL:(NSURL *)arg1 sourceApplication:(NSString *)arg2 sceneID:(NSString *)arg3;
- (void)sceneDidEnterBackground;
- (void)sceneDidEnterBackgroundWithSceneID:(NSString *)arg1;
- (void)sceneWillConnect;
- (void)sceneWillEnterForeground;
- (void)sceneWillResignActiveWithSceneID:(NSString *)arg1;

@end
