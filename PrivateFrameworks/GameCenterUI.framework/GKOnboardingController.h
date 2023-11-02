
@interface GKOnboardingController : NSObject {
    <GKOnboardingFlowDelegate> * _delegate;
}

@property (nonatomic) <GKOnboardingFlowDelegate> *delegate;

+ (id)describePlayerComparisonsBetween:(id)arg1 and:(id)arg2;
+ (id)landingViewController;
+ (id)shared;

- (void).cxx_destruct;
- (id)delegate;
- (void)presentContactsIntegrationConsentScreen:(id)arg1;
- (void)presentFriendSuggestionsScreen:(id)arg1;
- (void)presentPersonalizationScreen:(id)arg1;
- (void)presentProfileCreatedScreen:(id)arg1;
- (void)presentProfilePrivacyScreen:(id)arg1;
- (void)presentViewController:(id)arg1 presentingViewController:(id)arg2;
- (void)setDelegate:(id)arg1;

@end
