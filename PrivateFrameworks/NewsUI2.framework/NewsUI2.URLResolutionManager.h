
@interface NewsUI2.URLResolutionManager : NSObject <FCBundleSubscriptionChangeObserver>

- (void)bundleSubscriptionDidChange:(id)arg1 previousBundleSubscription:(id)arg2;
- (void)bundleSubscriptionDidExpire:(id)arg1;
- (void)bundleSubscriptionDidSubscribe:(id)arg1;
- (id)init;

@end
