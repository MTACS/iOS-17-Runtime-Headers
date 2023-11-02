
@interface ICQDelayedOfferFailsafeActivityController : NSObject

+ (void)_runWithDaemon:(id /* block */)arg1 errorCallback:(id /* block */)arg2;
+ (void)startActivityWithDelaySecs:(long long)arg1 completion:(id /* block */)arg2;
+ (void)stopActivityWithCompletion:(id /* block */)arg1;

@end
