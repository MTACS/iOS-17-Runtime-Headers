
@interface HDHRIrregularRhythmNotificationsAutomaticUpgradeCriteria : NSObject <HDBackgroundFeatureDeliveryCriteriaProviding> {
    <HDFeatureAvailabilityExtension> * _v1FeatureAvailabilityManager;
}

@property (nonatomic, retain) <HDFeatureAvailabilityExtension> *v1FeatureAvailabilityManager;

- (void).cxx_destruct;
- (id)initWithV1FeatureAvailabilityManager:(id)arg1;
- (long long)isBackgroundDeliverySupportedWithError:(id*)arg1;
- (void)setV1FeatureAvailabilityManager:(id)arg1;
- (id)v1FeatureAvailabilityManager;

@end
