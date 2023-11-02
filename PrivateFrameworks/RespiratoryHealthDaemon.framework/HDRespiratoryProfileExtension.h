
@interface HDRespiratoryProfileExtension : NSObject <HDFeatureAvailabilityExtensionObserver, HDFeatureAvailabilityExtensionProvider, HDProfileExtension, HDProfileReadyObserver> {
    HDRPRespiratoryDailyAnalytics * _dailyAnalytics;
    <HDFeatureAvailabilityExtension> * _featureAvailabilityManager;
    HDBackgroundFeatureDeliveryManager * _featureDeliveryManager;
    HKRPOxygenSaturationOnboardingCacher * _onboardingCacher;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    HKRPOxygenSaturationSettings * _settings;
    id /* block */  _unitTesting_healthLiteSessionWithDelegateHandler;
}

@property (nonatomic, readonly) HDRPRespiratoryDailyAnalytics *dailyAnalytics;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <HDFeatureAvailabilityExtension> *featureAvailabilityManager;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HDProfile *profile;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ unitTesting_healthLiteSessionWithDelegateHandler;

- (void).cxx_destruct;
- (void)_setupOrResetSettingsIfNeededWithFeatureAvailabilityManager:(id)arg1;
- (void)_updateBackgroundMeasurmentsSettings;
- (id)dailyAnalytics;
- (void)featureAvailabilityExtensionDidUpdateRegionAvailability:(id)arg1;
- (id)featureAvailabilityExtensionForFeatureIdentifier:(id)arg1;
- (void)featureAvailabilityExtensionOnboardingCompletionDataDidBecomeAvailable:(id)arg1;
- (id)featureAvailabilityManager;
- (void)featureAvailabilityProvidingDidUpdateOnboardingCompletion:(id)arg1;
- (void)featureAvailabilityProvidingDidUpdatePairedDeviceCapability:(id)arg1;
- (id)initWithProfile:(id)arg1;
- (id)initWithProfile:(id)arg1 featureAvailabilityManager:(id)arg2;
- (id)oxygenSaturationSessionWithDelegate:(id)arg1 queue:(id)arg2;
- (id)profile;
- (void)profileDidBecomeReady:(id)arg1;
- (void)setFeatureAvailabilityManager:(id)arg1;
- (void)setUnitTesting_healthLiteSessionWithDelegateHandler:(id /* block */)arg1;
- (id /* block */)unitTesting_healthLiteSessionWithDelegateHandler;

@end
