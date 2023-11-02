
@interface HMDHAPAccessoryNotificationEvent : HMMLogEvent <HMMCoreAnalyticsLogging> {
    HMDHAPAccessory * _accessory;
    HMDCharacteristic * _characteristic;
}

@property (nonatomic, readonly) HMDHAPAccessory *accessory;
@property (nonatomic, readonly, copy) NSString *accessoryIdentifier;
@property (nonatomic, readonly) HMDCharacteristic *characteristic;
@property (nonatomic, readonly, copy) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *homeUUID;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)accessory;
- (id)accessoryIdentifier;
- (id)characteristic;
- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (unsigned long long)coreAnalyticsEventOptions;
- (id)initWithAccessory:(id)arg1 characteristic:(id)arg2;
- (bool)isThreadAccessory:(id)arg1;

@end
