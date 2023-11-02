
@interface NewsSubscription.PaywallInteractor : NSObject <FCBundleSubscriptionChangeObserver> {
    void dataManager;
    void delegate;
    void paidBundleViaOfferFeatureAvailability;
    void personalizedPaywallDataService;
    void tracker;
    void webAccessAuthenticator;
    void webAccessAuthenticatorFactory;
    void webAccessConversionEventReporter;
}

- (void).cxx_destruct;
- (void)bundleSubscriptionDidSubscribe:(id)arg1;
- (id)init;

@end
