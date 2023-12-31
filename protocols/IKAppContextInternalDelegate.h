
@protocol IKAppContextInternalDelegate <IKAppContextDelegate>

@required

- (bool)shouldForceIgnoreHTTPCacheForAppContext:(IKAppContext *)arg1;

@optional

- (void)appContext:(IKAppContext *)arg1 didStartWithOptions:(NSDictionary *)arg2 validatedJSString:(NSString *)arg3;
- (bool)appContext:(IKAppContext *)arg1 shouldStartWithScript:(NSString *)arg2 scriptURL:(NSURL *)arg3 loadedFromFallback:(bool)arg4;

@end
