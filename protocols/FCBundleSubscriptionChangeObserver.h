
@protocol FCBundleSubscriptionChangeObserver <NSObject>

@optional

- (void)bundleSubscriptionDidChange:(FCBundleSubscription *)arg1 previousBundleSubscription:(FCBundleSubscription *)arg2;
- (void)bundleSubscriptionDidExpire:(FCBundleSubscription *)arg1;
- (void)bundleSubscriptionDidSubscribe:(FCBundleSubscription *)arg1;
- (void)bundleSubscriptionDidSubscribe:(FCBundleSubscription *)arg1 hideBundleDetectionUI:(bool)arg2;

@end
