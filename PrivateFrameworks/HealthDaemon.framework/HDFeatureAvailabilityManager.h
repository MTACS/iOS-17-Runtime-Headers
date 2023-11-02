
@interface HDFeatureAvailabilityManager : NSObject <HDFeatureAvailabilityExtension, HDFeatureDisableAndExpiryProvidingDelegate, HDFeatureSettingsManagerObserver, HDOnboardingCompletionManagerObserver, HDPairedDeviceCapabilityProvidingObserver, HDRegionAvailabilityProvidingDelegate> {
    long long  _currentOnboardingVersion;
    <HDFeatureDisableAndExpiryProviding> * _disableAndExpiryProvider;
    NSString * _featureIdentifier;
    <HDFeatureSettingsValidating> * _featureSettingsAtOnboardingTimeValidator;
    NSObject<OS_os_log> * _loggingCategory;
    HKObserverSet * _observers;
    HDFeatureAvailabilityOnboardingEligibilityDeterminer * _onboardingEligibilityDeterminer;
    NSUUID * _pairedDeviceCapability;
    <HDPairedDeviceCapabilityProviding> * _pairedDeviceCapabilityProvider;
    <HDPairedFeatureAttributesProviding> * _pairedFeatureAttributesProvider;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    <HDRegionAvailabilityProviding> * _regionAvailabilityProvider;
    HKFeatureAvailabilityRequirementSet * _requirements;
    id /* block */  _unitTest_didTriggerImmediateSync;
}

@property (nonatomic) long long currentOnboardingVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *featureIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy) id /* block */ unitTest_didTriggerImmediateSync;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

- (void).cxx_destruct;
- (id)canCompleteOnboardingForCountryCode:(id)arg1 error:(id*)arg2;
- (long long)currentOnboardingVersion;
- (void)dealloc;
- (id)description;
- (void)disableAndExpiryProviderDidUpdate:(id)arg1;
- (id)earliestDateLowestOnboardingVersionCompletedWithError:(id*)arg1;
- (id)featureAvailabilityRequirementsWithError:(id*)arg1;
- (id)featureIdentifier;
- (id)featureOnboardingRecordWithError:(id*)arg1;
- (void)featureSettingsManager:(id)arg1 didUpdateSettingsForFeatureIdentifier:(id)arg2;
- (void)getFeatureOnboardingRecordWithCompletion:(id /* block */)arg1;
- (id)initWithProfile:(id)arg1 featureIdentifier:(id)arg2 availabilityRequirements:(id)arg3 currentOnboardingVersion:(long long)arg4 pairedDeviceCapability:(id)arg5 pairedFeatureAttributesProvider:(id)arg6 regionAvailabilityProvider:(id)arg7 disableAndExpiryProvider:(id)arg8 loggingCategory:(id)arg9;
- (id)initWithProfile:(id)arg1 featureIdentifier:(id)arg2 availabilityRequirements:(id)arg3 currentOnboardingVersion:(long long)arg4 pairedDeviceCapability:(id)arg5 pairedFeatureAttributesProvider:(id)arg6 regionAvailabilityProvider:(id)arg7 disableAndExpiryProvider:(id)arg8 onboardingEligibilityDeterminer:(id)arg9 featureSettingsAtOnboardingTimeValidator:(id)arg10 loggingCategory:(id)arg11;
- (id)initWithProfile:(id)arg1 featureIdentifier:(id)arg2 availabilityRequirements:(id)arg3 currentOnboardingVersion:(long long)arg4 pairedDeviceCapability:(id)arg5 regionAvailabilityProvider:(id)arg6 disableAndExpiryProvider:(id)arg7 loggingCategory:(id)arg8;
- (id)initWithProfile:(id)arg1 featureIdentifier:(id)arg2 currentOnboardingVersion:(long long)arg3 loggingCategory:(id)arg4;
- (id)initWithProfile:(id)arg1 featureIdentifier:(id)arg2 currentOnboardingVersion:(long long)arg3 pairedDeviceCapability:(id)arg4 regionAvailabilityProvider:(id)arg5 loggingCategory:(id)arg6;
- (void)isCurrentOnboardingVersionCompletedWithCompletion:(id /* block */)arg1;
- (id)isCurrentOnboardingVersionCompletedWithError:(id*)arg1;
- (id)isFeatureCapabilitySupportedOnActivePairedDeviceWithError:(id*)arg1;
- (id)onboardedCountryCodeSupportedStateWithError:(id*)arg1;
- (void)onboardingCompletionManager:(id)arg1 didUpdateOnboardingCompletionsForFeatureIdentifier:(id)arg2;
- (id)onboardingEligibilityForCountryCode:(id)arg1 error:(id*)arg2;
- (void)pairedDeviceCapabilitiesDidUpdate:(id)arg1;
- (id)pairedFeatureAttributesWithError:(id*)arg1;
- (void)regionAvailabilityProvidingDidUpdate:(id)arg1;
- (id)regionAvailabilityWithError:(id*)arg1;
- (void)registerObserver:(id)arg1 queue:(id)arg2;
- (void)removeFeatureSettingValueForKey:(id)arg1 completion:(id /* block */)arg2;
- (void)resetOnboardingWithCompletion:(id /* block */)arg1;
- (void)saveOnboardingCompletion:(id)arg1 settings:(id)arg2 completion:(id /* block */)arg3;
- (void)setCurrentOnboardingVersion:(long long)arg1;
- (void)setCurrentOnboardingVersionCompletedForCountryCode:(id)arg1 countryCodeProvenance:(long long)arg2 date:(id)arg3 settings:(id)arg4 completion:(id /* block */)arg5;
- (void)setFeatureSettingData:(id)arg1 forKey:(id)arg2 completion:(id /* block */)arg3;
- (void)setFeatureSettingNumber:(id)arg1 forKey:(id)arg2 completion:(id /* block */)arg3;
- (void)setFeatureSettingString:(id)arg1 forKey:(id)arg2 completion:(id /* block */)arg3;
- (void)setUnitTest_didTriggerImmediateSync:(id /* block */)arg1;
- (id /* block */)unitTest_didTriggerImmediateSync;
- (void)unregisterObserver:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HealthMenstrualCyclesDaemon.framework/HealthMenstrualCyclesDaemon

+ (id)hdmc_deviationsAvailabilityManagerWithProfile:(id)arg1;
+ (id)hdmc_heartRateInputAvailabilityManagerWithProfile:(id)arg1;
+ (id)hdmc_menstrualCyclesAvailabilityManagerWithProfile:(id)arg1;
+ (id)hdmc_wristTemperatureInputAvailabilityManagerWithProfile:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HeartHealthDaemon.framework/HeartHealthDaemon

+ (id)hdhr_irregularRhythmNotificationsV2FeatureAvailabilityManagerWithProfile:(id)arg1 disableAndExpiryProvider:(id)arg2 pairedFeaturePropertiesSyncManager:(id)arg3;

// Image: /System/Library/PrivateFrameworks/MentalHealthDaemon.framework/MentalHealthDaemon

+ (id)_hdmc_availabilityManagerForFeatureIdentifier:(id)arg1 profile:(id)arg2 availabilityRequirements:(id)arg3 localCountrySet:(id)arg4;
+ (id)hdmh_depressionAndAnxietyAssessmentsAvailabilityManagerWithProfile:(id)arg1;
+ (id)hdmh_periodicDepressionAndAnxietyAssessmentPromptsAvailabilityManagerWithProfile:(id)arg1;
+ (id)hdmh_stateOfMindLoggingAvailabilityManagerWithProfile:(id)arg1;
+ (id)hdmh_stateOfMindLoggingPatternEscalationsAvailabilityManagerWithProfile:(id)arg1;

@end
