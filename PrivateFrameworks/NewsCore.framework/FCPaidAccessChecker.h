
@interface FCPaidAccessChecker : NSObject <FCPaidAccessCheckerType> {
    <FCBundleSubscriptionProviderType> * _bundleSubscriptionProvider;
    <FCCoreConfigurationManager> * _configurationManager;
    <FCPurchaseProviderType> * _purchaseProvider;
}

@property (nonatomic, readonly) <FCBundleSubscriptionProviderType> *bundleSubscriptionProvider;
@property (nonatomic, readonly) <FCPurchaseProviderType> *purchaseProvider;

- (void).cxx_destruct;
- (id)bundleSubscriptionProvider;
- (bool)canGetAccessToItemPaid:(bool)arg1 bundlePaid:(bool)arg2 channel:(id)arg3;
- (bool)canGetBundleSubscriptionToChannel:(id)arg1;
- (bool)canGetSubscriptionToChannel:(id)arg1;
- (id)initWithPurchaseProvider:(id)arg1 bundleSubscriptionProvider:(id)arg2 configurationManager:(id)arg3;
- (bool)isPreparedForUse;
- (void)prepareForUseWithCompletion:(id /* block */)arg1;
- (id)purchaseProvider;

@end
