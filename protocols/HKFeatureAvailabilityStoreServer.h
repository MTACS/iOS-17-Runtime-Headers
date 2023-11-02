
@protocol HKFeatureAvailabilityStoreServer <NSObject>

@required

- (void)remote_canCompleteOnboardingForCountryCode:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*
- (void)remote_earliestDateLowestOnboardingVersionCompletedWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDate *, NSError *, void*
- (void)remote_getFeatureAvailabilityRequirementsWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HKFeatureAvailabilityRequirementSet *, NSError *, void*
- (void)remote_getFeatureOnboardingRecordWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HKFeatureOnboardingRecord *, NSError *, void*
- (void)remote_getIsCurrentOnboardingVersionCompletedWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*
- (void)remote_getIsFeatureCapabilitySupportedOnActivePairedDeviceWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*
- (void)remote_getPairedFeatureAttributesWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HKPairedFeatureAttributes *, NSError *, void*
- (void)remote_getRegionAvailabilityWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HKRegionAvailability *, NSError *, void*
- (void)remote_onboardedCountryCodeSupportedStateWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*
- (void)remote_onboardingEligibilityForCountryCode:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HKFeatureAvailabilityOnboardingEligibility *, NSError *, void*
- (void)remote_removeFeatureSettingValueForKey:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_resetOnboardingWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_saveOnboardingCompletion:(void *)arg1 settings:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: HKOnboardingCompletion *, HKFeatureSettings *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_setCurrentOnboardingVersionCompletedForCountryCode:(void *)arg1 countryCodeProvenance:(void *)arg2 date:(void *)arg3 settings:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 11: NSString *, long long, NSDate *, HKFeatureSettings *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_setFeatureSettingData:(void *)arg1 forKey:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSData *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_setFeatureSettingNumber:(void *)arg1 forKey:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSNumber *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_setFeatureSettingString:(void *)arg1 forKey:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_startObservingChangesWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_stopObservingChanges;

@end
