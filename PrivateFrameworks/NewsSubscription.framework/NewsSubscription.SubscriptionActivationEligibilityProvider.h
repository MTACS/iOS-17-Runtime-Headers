
@interface NewsSubscription.SubscriptionActivationEligibilityProvider : NSObject <SXSubscriptionActivationEligibilityProviding> {
    void didProcessInitialOffer;
    void observers;
    void offerManager;
}

@property (nonatomic, readonly) long long eligibility;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (long long)eligibility;
- (id)init;
- (void)removeObserver:(id)arg1;

@end
