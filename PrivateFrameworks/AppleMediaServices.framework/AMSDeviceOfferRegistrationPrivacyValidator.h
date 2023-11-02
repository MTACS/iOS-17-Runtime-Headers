
@interface AMSDeviceOfferRegistrationPrivacyValidator : NSObject {
    ACAccount * _account;
}

@property (nonatomic, readonly) ACAccount *account;

+ (id)_identifiersForValidationOptions:(unsigned long long)arg1;
+ (bool)_isPrivacyAcknowledgementForIdentifier:(id)arg1 satisfiedOnAccount:(id)arg2;
+ (bool)_isPrivacyAcknowledgementForIdentifiers:(id)arg1 satisfiedOnAccount:(id)arg2;
+ (id)_masterEligibilityPrivacyOptionsIdentifiers;
+ (id)_minimumAcknowledgementVersionForIdentifier:(id)arg1;
+ (id)_privacyVersionMap;

- (void).cxx_destruct;
- (id)account;
- (bool)canMasterDevicePerformRegistration;
- (id)initWithAccount:(id)arg1;
- (bool)isPrivacyRequirementMetForOptions:(unsigned long long)arg1;

@end
