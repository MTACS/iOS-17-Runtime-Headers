
@interface NewsUI2.EmailSignupAutomaticPresentor : NSObject <FCBundleSubscriptionChangeObserver> {
    void _cachedModel;
    void appConfigurationManager;
    void appleAccount;
    void bundleSubscriptionManager;
    void delegate;
    void emailSignupModelFactory;
    void newsletterManager;
    void sportsOnboardingManager;
    void userInfo;
}

- (void).cxx_destruct;
- (void)bundleSubscriptionDidExpire:(id)arg1;
- (void)bundleSubscriptionDidSubscribe:(id)arg1;
- (id)init;

@end
