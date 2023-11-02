
@interface SXDebugLayoutOptionsProvider : NSObject <SXDebugLayoutOptionsProviding> {
    long long  _bundleSubscriptionStatus;
    long long  _channelSubscriptionStatus;
    unsigned long long  _newsletterSubscriptionStatus;
    NSHashTable * _observers;
    long long  _offerUpsellScenario;
    long long  _subscriptionActivationEligibility;
    unsigned long long  _viewingLocation;
}

@property (nonatomic) long long bundleSubscriptionStatus;
@property (nonatomic) long long channelSubscriptionStatus;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long newsletterSubscriptionStatus;
@property (nonatomic, readonly) NSHashTable *observers;
@property (nonatomic) long long offerUpsellScenario;
@property (nonatomic) long long subscriptionActivationEligibility;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long viewingLocation;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (long long)bundleSubscriptionStatus;
- (long long)channelSubscriptionStatus;
- (id)init;
- (unsigned long long)newsletterSubscriptionStatus;
- (void)notifyObservers;
- (id)observers;
- (long long)offerUpsellScenario;
- (long long)overrideBundleSubscriptionStatus:(long long)arg1;
- (long long)overrideChannelSubscriptionStatus:(long long)arg1;
- (id)overrideConditionKeys:(id)arg1;
- (double)overrideContentScaleFactor:(double)arg1;
- (id)overrideContentSizeCategory:(id)arg1;
- (long long)overrideNewsletterSubscriptionStatus:(unsigned long long)arg1;
- (long long)overrideOfferUpsellScenario:(long long)arg1;
- (long long)overrideSubscriptionActivationEligibility:(long long)arg1;
- (unsigned long long)overrideViewingLocation:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })overrideViewportSize:(struct CGSize { double x1; double x2; })arg1;
- (void)removeObserver:(id)arg1;
- (void)setBundleSubscriptionStatus:(long long)arg1;
- (void)setChannelSubscriptionStatus:(long long)arg1;
- (void)setNewsletterSubscriptionStatus:(unsigned long long)arg1;
- (void)setOfferUpsellScenario:(long long)arg1;
- (void)setSubscriptionActivationEligibility:(long long)arg1;
- (void)setViewingLocation:(unsigned long long)arg1;
- (long long)subscriptionActivationEligibility;
- (unsigned long long)viewingLocation;

@end
