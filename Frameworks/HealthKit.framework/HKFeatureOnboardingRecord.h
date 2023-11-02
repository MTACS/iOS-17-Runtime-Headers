
@interface HKFeatureOnboardingRecord : NSObject <NSCopying, NSSecureCoding> {
    HKFeatureSettings * _featureSettings;
    NSDictionary * _onboardingCompletionsByState;
    long long  _onboardingState;
}

@property (nonatomic, readonly, copy) NSSet *allOnboardedCountryCodesRegardlessOfSupportedState;
@property (nonatomic, readonly, copy) NSArray *allOnboardingCompletionsRegardlessOfSupportedState;
@property (nonatomic, readonly, copy) NSDate *earliestDateOfAnyOnboardingCompletion;
@property (nonatomic, readonly, copy) HKFeatureSettings *featureSettings;
@property (nonatomic, readonly, copy) NSSet *onboardedCountryCodesForOnboardingState;
@property (nonatomic, readonly, copy) HKOnboardingCompletion *onboardingCompletion;
@property (nonatomic, readonly, copy) NSDictionary *onboardingCompletionsByState;
@property (getter=isOnboardingPresent, nonatomic, readonly) bool onboardingPresent;
@property (nonatomic, readonly) long long onboardingState;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)allOnboardedCountryCodesRegardlessOfSupportedState;
- (id)allOnboardingCompletionsRegardlessOfSupportedState;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)earliestDateOfAnyOnboardingCompletion;
- (void)encodeWithCoder:(id)arg1;
- (id)featureSettings;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithOnboardingState:(long long)arg1 onboardingCompletion:(id)arg2 featureSettings:(id)arg3;
- (id)initWithOnboardingState:(long long)arg1 onboardingCompletionsByState:(id)arg2 featureSettings:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isOnboardingPresent;
- (id)onboardedCountryCodesForOnboardingState;
- (id)onboardingCompletion;
- (id)onboardingCompletionsByState;
- (long long)onboardingState;

@end
