
@protocol SXSubscriptionStatusObserving <NSObject>

@required

- (void)bundleSubscriptionStatusDidChangeFromStatus:(long long)arg1;
- (void)channelSubscriptionStatusDidChangeFromStatus:(long long)arg1;

@end
