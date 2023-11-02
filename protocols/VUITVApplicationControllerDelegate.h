
@protocol VUITVApplicationControllerDelegate <NSObject>

@optional

- (void)appController:(VUITVApplicationController *)arg1 didFailWithError:(NSError *)arg2;
- (void)appController:(VUITVApplicationController *)arg1 didFinishLaunchingWithOptions:(NSDictionary *)arg2;
- (void)appController:(VUITVApplicationController *)arg1 didStopWithOptions:(NSDictionary *)arg2;
- (void)appController:(VUITVApplicationController *)arg1 evaluateAppJavaScriptInContext:(JSContext *)arg2;
- (bool)appController:(VUITVApplicationController *)arg1 shouldDisplayShroudForURL:(NSURL *)arg2 withOptions:(NSDictionary *)arg3;
- (UIViewController<VUITVAppRootViewController> *)rootViewControllerForAppController:(VUITVApplicationController *)arg1;

@end
