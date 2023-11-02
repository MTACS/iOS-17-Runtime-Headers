
@interface HAPAccessoryReachabilityProfile : HMFObject <HAPAccessoryReachabilityProfile> {
    HAPCharacteristic * _pollCharacteristic;
    double  _sleepInterval;
    HAPCharacteristic * _sleepIntervalCharacteristic;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HAPCharacteristic *pollCharacteristic;
@property (nonatomic) double sleepInterval;
@property (nonatomic, retain) HAPCharacteristic *sleepIntervalCharacteristic;
@property (readonly) Class superclass;

+ (id)shortDescription;
+ (double)timeIntervalFromMillisecondNumberValue:(id)arg1;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithDiscoveredServices:(id)arg1;
- (id)initWithProfile:(id)arg1;
- (id)pollCharacteristic;
- (void)setPollCharacteristic:(id)arg1;
- (void)setSleepInterval:(double)arg1;
- (void)setSleepIntervalCharacteristic:(id)arg1;
- (double)sleepInterval;
- (id)sleepIntervalCharacteristic;

@end
