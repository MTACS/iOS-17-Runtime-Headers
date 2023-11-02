
@interface SAPathManager : NSObject

+ (id)defaultManager;

- (void)registerPaths:(id)arg1 forBundleID:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)unregisterURLs:(id)arg1 forBundleID:(id)arg2 completionHandler:(id /* block */)arg3;

@end
