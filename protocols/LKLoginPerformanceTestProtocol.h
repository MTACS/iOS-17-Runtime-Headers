
@protocol LKLoginPerformanceTestProtocol

@required

- (void)interruptLocalUserSwitchTest;
- (void)triggerLocalUserSwitchTestForType:(void *)arg1 count:(void *)arg2 username:(void *)arg3 password:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 10: unsigned long long, long long, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
