
@protocol SXSubscriptionStatusProviding <NSObject>

@required

- (void)addObserver:(id <SXSubscriptionStatusObserving>)arg1;
- (long long)bundleSubscriptionStatus;
- (long long)channelSubscriptionStatus;
- (void)removeObserver:(id <SXSubscriptionStatusObserving>)arg1;

@end
