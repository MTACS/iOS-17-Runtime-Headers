
@protocol VUITVAppLaunchProtocol <NSObject>

@required

- (VUITVApplicationController *)appController;
- (bool)applicationDidFinishLaunchingWithOptions:(NSDictionary *)arg1;
- (bool)applicationWillFinishLaunchingWithOptions:(NSDictionary *)arg1;
- (void)cleanUp;
- (void)didAcceptGDPRWelcome;
- (void)didFailToLaunch:(NSError *)arg1;
- (void)didShowGDPRWelcome;
- (bool)openURL:(NSURL *)arg1 options:(NSDictionary *)arg2;
- (void)preWarm:(NSDictionary *)arg1;
- (void)setMainWindow:(UIWindow *)arg1;

@end
