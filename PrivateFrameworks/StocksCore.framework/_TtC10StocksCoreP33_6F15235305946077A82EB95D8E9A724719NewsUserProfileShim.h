
@interface _TtC10StocksCoreP33_6F15235305946077A82EB95D8E9A724719NewsUserProfileShim : NSObject <FCBundleSubscriptionProviderType, FCPurchaseProviderType> {
    void userProfile;
}

@property (nonatomic, readonly) FCBundleSubscription *bundleSubscription;
@property (nonatomic, readonly) NSSet *purchasedTagIDs;

- (void).cxx_destruct;
- (id)bundleSubscription;
- (id)init;
- (void)prepareForUseWithCompletion:(id /* block */)arg1;
- (id)purchasedTagIDs;

@end
