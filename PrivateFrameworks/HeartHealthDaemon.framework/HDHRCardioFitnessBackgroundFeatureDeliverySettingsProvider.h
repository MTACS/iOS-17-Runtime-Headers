
@interface HDHRCardioFitnessBackgroundFeatureDeliverySettingsProvider : NSObject <HDBackgroundFeatureDeliverySettingsProviding> {
    NSUserDefaults * _heartRateSettingsDefaults;
}

- (void).cxx_destruct;
- (id)featureSettingsUponBackgroundDelivery;
- (id)initWithHeartRateSettingsDefaults:(id)arg1;

@end
