
@protocol SWReachabilityProvider <NSObject>

@required

- (void)addReachabilityObserver:(id <SWReachabilityObserver>)arg1;
- (bool)isNetworkReachable;
- (void)removeReachabilityObserver:(id <SWReachabilityObserver>)arg1;

@end
