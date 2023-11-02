
@protocol FCAppActivityObserving <NSObject>

@optional

- (void)activityObservingApplicationDidBecomeActive;
- (void)activityObservingApplicationDidBecomeActiveWithURL:(NSURL *)arg1 sourceApplication:(NSString *)arg2 sceneID:(NSString *)arg3;
- (void)activityObservingApplicationDidEnterBackground;
- (void)activityObservingApplicationDidEnterBackgroundWithSceneID:(NSString *)arg1;
- (void)activityObservingApplicationDidFinishLaunching;
- (void)activityObservingApplicationWillEnterForeground;
- (void)activityObservingApplicationWillResignActiveWithSceneID:(NSString *)arg1;
- (void)activityObservingApplicationWillTerminate;
- (void)activityObservingApplicationWindowDidBecomeBackground;
- (void)activityObservingApplicationWindowDidBecomeForeground;
- (void)activityObservingApplicationWindowWillBecomeForeground;

@end
