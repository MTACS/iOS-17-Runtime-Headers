
@protocol LKLoginDaemonProtocol <LKLoginControllerProtocol, LKLoginPerformanceTestProtocol>

@required

- (void)checkInWithCurrentEnvironment:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)isReadyToLoginWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)isReadyToLogoutWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)updateGlobalDefaultsValue:(void *)arg1 forKey:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: id, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
