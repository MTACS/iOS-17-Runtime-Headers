
@interface TPSCarrierBundleController : TPSTelephonyController

- (void)carrierBundleChange:(id)arg1;
- (id)localizedCarrierNameForSubscriptionContext:(id)arg1;
- (id)localizedStringForKey:(id)arg1 subscriptionContext:(id)arg2;
- (id)localizedStringForKey:(id)arg1 subscriptionContext:(id)arg2 error:(id*)arg3;
- (id)objectForKey:(id)arg1 subscriptionContext:(id)arg2;
- (id)objectForKey:(id)arg1 subscriptionContext:(id)arg2 error:(id*)arg3;
- (id)objectForKeyHierarchy:(id)arg1 subscriptionContext:(id)arg2;
- (id)objectForKeyHierarchy:(id)arg1 subscriptionContext:(id)arg2 error:(id*)arg3;
- (void)operatorBundleChange:(id)arg1;

@end
