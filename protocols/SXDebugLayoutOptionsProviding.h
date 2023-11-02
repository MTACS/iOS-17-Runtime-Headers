
@protocol SXDebugLayoutOptionsProviding <NSObject>

@required

- (void)addObserver:(id <SXDebugLayoutOptionsObserving>)arg1;
- (long long)overrideBundleSubscriptionStatus:(long long)arg1;
- (long long)overrideChannelSubscriptionStatus:(long long)arg1;
- (NSSet *)overrideConditionKeys:(NSSet *)arg1;
- (double)overrideContentScaleFactor:(double)arg1;
- (NSString *)overrideContentSizeCategory:(NSString *)arg1;
- (unsigned long long)overrideNewsletterSubscriptionStatus:(unsigned long long)arg1;
- (long long)overrideOfferUpsellScenario:(long long)arg1;
- (long long)overrideSubscriptionActivationEligibility:(long long)arg1;
- (unsigned long long)overrideViewingLocation:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })overrideViewportSize:(struct CGSize { double x1; double x2; })arg1;
- (void)removeObserver:(id <SXDebugLayoutOptionsObserving>)arg1;

@end
