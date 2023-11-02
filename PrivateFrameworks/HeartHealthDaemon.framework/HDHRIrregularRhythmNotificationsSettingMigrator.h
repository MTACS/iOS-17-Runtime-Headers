
@interface HDHRIrregularRhythmNotificationsSettingMigrator : NSObject <HDFeatureAvailabilityExtensionObserver> {
    NSObject<OS_dispatch_queue> * _queue;
    <HDFeatureAvailabilityExtension> * _v1FeatureAvailabilityManager;
    <HDFeatureAvailabilityExtension> * _v2FeatureAvailabilityManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <HDFeatureAvailabilityExtension> *v1FeatureAvailabilityManager;
@property (nonatomic, readonly) <HDFeatureAvailabilityExtension> *v2FeatureAvailabilityManager;

- (void).cxx_destruct;
- (void)_startObservingSettingChanges;
- (void)_syncSettingIfPossibleFromManager:(id)arg1 toManager:(id)arg2;
- (void)_syncSettingIfPossibleFromSource:(id)arg1;
- (void)featureAvailabilityExtensionDidUpdateRegionAvailability:(id)arg1;
- (void)featureAvailabilityExtensionOnboardingCompletionDataDidBecomeAvailable:(id)arg1;
- (void)featureAvailabilityProvidingDidUpdateOnboardingCompletion:(id)arg1;
- (void)featureAvailabilityProvidingDidUpdateSettings:(id)arg1;
- (id)initWithV1FeatureAvailabilityManager:(id)arg1 v2FeatureAvailabilityManager:(id)arg2;
- (id)queue;
- (id)v1FeatureAvailabilityManager;
- (id)v2FeatureAvailabilityManager;

@end
