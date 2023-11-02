
@protocol HKFeatureAvailabilityProviding

@required

- (NSNumber *)canCompleteOnboardingForCountryCode:(NSString *)arg1 error:(id*)arg2;
- (NSDate *)earliestDateLowestOnboardingVersionCompletedWithError:(id*)arg1;
- (HKFeatureAvailabilityRequirementSet *)featureAvailabilityRequirementsWithError:(id*)arg1;
- (NSString *)featureIdentifier;
- (HKFeatureOnboardingRecord *)featureOnboardingRecordWithError:(id*)arg1;
- (void)getFeatureOnboardingRecordWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HKFeatureOnboardingRecord *, NSError *, void*
- (void)isCurrentOnboardingVersionCompletedWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*
- (NSNumber *)isCurrentOnboardingVersionCompletedWithError:(id*)arg1;
- (NSNumber *)isFeatureCapabilitySupportedOnActivePairedDeviceWithError:(id*)arg1;
- (NSNumber *)onboardedCountryCodeSupportedStateWithError:(id*)arg1;
- (HKFeatureAvailabilityOnboardingEligibility *)onboardingEligibilityForCountryCode:(NSString *)arg1 error:(id*)arg2;
- (HKPairedFeatureAttributes *)pairedFeatureAttributesWithError:(id*)arg1;
- (HKRegionAvailability *)regionAvailabilityWithError:(id*)arg1;
- (void)registerObserver:(id <HKFeatureAvailabilityProvidingObserver>)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2;
- (void)removeFeatureSettingValueForKey:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)resetOnboardingWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)saveOnboardingCompletion:(void *)arg1 settings:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: HKOnboardingCompletion *, HKFeatureSettings *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)setCurrentOnboardingVersionCompletedForCountryCode:(void *)arg1 countryCodeProvenance:(void *)arg2 date:(void *)arg3 settings:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 11: NSString *, long long, NSDate *, HKFeatureSettings *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)setFeatureSettingData:(void *)arg1 forKey:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSData *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)setFeatureSettingNumber:(void *)arg1 forKey:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSNumber *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)setFeatureSettingString:(void *)arg1 forKey:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)unregisterObserver:(id <HKFeatureAvailabilityProvidingObserver>)arg1;

@end
