
@interface SXConditionValidationContext : NSObject <SXConditionValidationContext> {
    SXLayoutOptions * _layoutOptions;
}

@property (getter=isBundleSubscriber, nonatomic, readonly) bool bundleSubscriber;
@property (getter=isBundleTrialEligible, nonatomic, readonly) bool bundleTrialEligible;
@property (getter=isChannelSubscriber, nonatomic, readonly) bool channelSubscriber;
@property (nonatomic, readonly) NSSet *conditionKeys;
@property (nonatomic, readonly) double contentScaleFactor;
@property (nonatomic, readonly) NSString *contentSizeCategory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long horizontalSizeClass;
@property (nonatomic, readonly) SXLayoutOptions *layoutOptions;
@property (nonatomic, readonly) unsigned long long newsletterSubscriptionStatus;
@property (nonatomic, readonly) unsigned long long numberOfColumns;
@property (nonatomic, readonly) long long offerUpsellScenario;
@property (nonatomic, readonly) long long subscriptionActivationEligibility;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool testing;
@property (nonatomic, readonly) long long userInterfaceStyle;
@property (nonatomic, readonly) long long verticalSizeClass;
@property (nonatomic, readonly) unsigned long long viewingLocation;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } viewportSize;

- (void).cxx_destruct;
- (id)conditionKeys;
- (double)contentScaleFactor;
- (id)contentSizeCategory;
- (long long)horizontalSizeClass;
- (id)initWithLayoutOptions:(id)arg1;
- (bool)isBundleSubscriber;
- (bool)isBundleTrialEligible;
- (bool)isChannelSubscriber;
- (id)layoutOptions;
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
