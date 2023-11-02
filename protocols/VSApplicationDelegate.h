
@protocol VSApplicationDelegate <NSObject>

@required

- (IKAppDocument *)activeAppDocumentForApplication:(VSApplication *)arg1;
- (void)application:(VSApplication *)arg1 evaluateAppJavascriptInContext:(JSContext *)arg2;
- (void)application:(VSApplication *)arg1 startDidFailWithError:(NSError *)arg2;
- (void)applicationDidStart:(VSApplication *)arg1;
- (NSDictionary *)launchParamsForApplication:(VSApplication *)arg1;

@end
