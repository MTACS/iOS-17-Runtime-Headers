
@interface NewsArticles.ANFDebugLayoutOptionsProvider : NSObject <SXDebugLayoutOptionsProviding> {
    void anfOverrides;
    void observers;
}

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (id)init;
- (long long)overrideBundleSubscriptionStatus:(long long)arg1;
- (long long)overrideChannelSubscriptionStatus:(long long)arg1;
- (id)overrideConditionKeys:(id)arg1;
- (double)overrideContentScaleFactor:(double)arg1;
- (id)overrideContentSizeCategory:(id)arg1;
- (unsigned long long)overrideNewsletterSubscriptionStatus:(unsigned long long)arg1;
- (long long)overrideOfferUpsellScenario:(long long)arg1;
- (long long)overrideSubscriptionActivationEligibility:(long long)arg1;
- (unsigned long long)overrideViewingLocation:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })overrideViewportSize:(struct CGSize { double x1; double x2; })arg1;
- (void)removeObserver:(id)arg1;

@end
