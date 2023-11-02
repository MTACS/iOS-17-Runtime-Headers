
@protocol SXCondition <NSObject>

@required

- (NSString *)app;
- (NSString *)configurationKey;
- (long long)horizontalSizeClass;
- (unsigned long long)maxColumns;
- (NSString *)maxContentSizeCategory;
- (NSString *)maxSpecVersion;
- (double)maxViewportAspectRatio;
- (double)maxViewportWidth;
- (unsigned long long)minColumns;
- (NSString *)minContentSizeCategory;
- (NSString *)minSpecVersion;
- (double)minViewportAspectRatio;
- (double)minViewportWidth;
- (unsigned long long)newsletterSubscriptionStatus;
- (long long)offerUpsellScenario;
- (NSString *)platform;
- (unsigned long long)preferredColorScheme;
- (long long)subscriptionActivationEligibility;
- (NSString *)subscriptionStatus;
- (unsigned long long)testing;
- (NSSet *)types;
- (long long)verticalSizeClass;
- (NSString *)viewLocation;

@end
