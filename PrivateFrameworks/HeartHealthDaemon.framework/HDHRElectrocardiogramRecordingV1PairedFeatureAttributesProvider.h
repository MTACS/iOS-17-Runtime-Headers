
@interface HDHRElectrocardiogramRecordingV1PairedFeatureAttributesProvider : NSObject <HDPairedFeatureAttributesProviding> {
    <HDPairedFeatureAttributesProviding> * _attributesProvider;
    <HDPairedDeviceCapabilityProviding> * _pairedDeviceProvider;
}

@property (nonatomic, readonly, copy) HKPairedFeatureAttributes *currentPairedFeatureAttributes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)currentPairedFeatureAttributes;
- (id)initWithPairedFeatureAttributesProvider:(id)arg1 pairedDeviceCapabilityProvider:(id)arg2;

@end
