
@interface HMDCharacteristicRequest : HMFObject <HMFLogging> {
    HMDCharacteristic * _characteristic;
    bool  _completed;
    id  _previousValue;
}

@property (nonatomic, readonly) HMDHAPAccessory *accessory;
@property (nonatomic, readonly) HMDCharacteristic *characteristic;
@property (getter=isCompleted, nonatomic) bool completed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) id previousValue;
@property (nonatomic, readonly) HMDService *service;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (id)requestWithCharacteristic:(id)arg1;

- (void).cxx_destruct;
- (id)accessory;
- (id)attributeDescriptions;
- (id)characteristic;
- (id)initWithCharacteristic:(id)arg1;
- (bool)isCompleted;
- (bool)isEqual:(id)arg1;
- (id)previousValue;
- (id)service;
- (void)setCompleted:(bool)arg1;

@end
