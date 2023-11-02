
@protocol SXConditionValidationContext <NSObject>

@required

- (NSSet *)conditionKeys;
- (double)contentScaleFactor;
- (NSString *)contentSizeCategory;
- (long long)horizontalSizeClass;
- (bool)isBundleSubscriber;
- (bool)isBundleTrialEligible;
- (bool)isChannelSubscriber;
- (unsigned long long)newsletterSubscriptionStatus;
- (unsigned long long)numberOfColumns;
- (long long)offerUpsellScenario;
- (long long)subscriptionActivationEligibility;
- (bool)testing;
- (long long)userInterfaceStyle;
- (long long)verticalSizeClass;
- (unsigned long long)viewingLocation;
- (struct CGSize { double x1; double x2; })viewportSize;

@end
