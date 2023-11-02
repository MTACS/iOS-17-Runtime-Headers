
@interface HKFeatureAvailabilityOnboardingCompletionEligibility : NSObject {
    HKOnboardingCompletion * _onboardingCompletion;
    HKFeatureAvailabilityOnboardingEligibility * _onboardingEligibility;
}

@property (nonatomic, readonly, copy) HKOnboardingCompletion *onboardingCompletion;
@property (nonatomic, readonly, copy) HKFeatureAvailabilityOnboardingEligibility *onboardingEligibility;

- (void).cxx_destruct;
- (id)initWithOnboardingCompletion:(id)arg1 onboardingEligibility:(id)arg2;
- (id)onboardingCompletion;
- (id)onboardingEligibility;

@end
