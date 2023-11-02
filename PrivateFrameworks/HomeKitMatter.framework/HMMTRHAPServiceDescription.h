
@interface HMMTRHAPServiceDescription : HMFObject {
    NSDictionary * _characteristicFeatureMap;
    NSNumber * _endpoint;
    NSString * _name;
    NSArray * _optionalCharacteristics;
    bool  _optionalServiceLabelIndexIncluded;
    NSArray * _requiredCharacteristics;
    NSString * _serviceType;
}

@property (readonly) NSDictionary *characteristicFeatureMap;
@property (retain) NSNumber *endpoint;
@property (retain) NSString *name;
@property (readonly) NSArray *optionalCharacteristics;
@property (readonly) bool optionalServiceLabelIndexIncluded;
@property (readonly) NSArray *requiredCharacteristics;
@property (readonly) NSString *serviceType;

- (void).cxx_destruct;
- (void)addFeatureMapForCharacteristic:(id)arg1 featureMap:(id)arg2;
- (void)addMandatoryCharacteristic:(id)arg1;
- (void)addOptionalCharacteristic:(id)arg1;
- (id)attributeDescriptions;
- (id)characteristicFeatureMap;
- (id)endpoint;
- (id)initWithType:(id)arg1 endpoint:(id)arg2 name:(id)arg3;
- (id)initWithType:(id)arg1 endpoint:(id)arg2 name:(id)arg3 optionalServiceLabelIndexIncluded:(bool)arg4;
- (id)name;
- (id)optionalCharacteristics;
- (bool)optionalServiceLabelIndexIncluded;
- (id)padCharacteristicIDWithZeros:(id)arg1;
- (void)removeCharacteristic:(id)arg1;
- (id)requiredCharacteristics;
- (id)serviceType;
- (void)setEndpoint:(id)arg1;
- (void)setName:(id)arg1;

@end
