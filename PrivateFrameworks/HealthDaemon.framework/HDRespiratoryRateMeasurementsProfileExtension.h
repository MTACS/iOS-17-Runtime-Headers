
@interface HDRespiratoryRateMeasurementsProfileExtension : NSObject <HDFeatureAvailabilityExtensionProvider> {
    HDFeatureAvailabilityManager * _featureAvailabilityManager;
    HDBackgroundFeatureDeliveryManager * _featureDeliveryManager;
    NSString * _featureIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)featureAvailabilityExtensionForFeatureIdentifier:(id)arg1;
- (id)initWithProfile:(id)arg1;
- (id)initWithProfile:(id)arg1 featureIdentifier:(id)arg2 isBackgroundDeliveryEnabled:(bool)arg3 loggingCategory:(id)arg4;

@end
