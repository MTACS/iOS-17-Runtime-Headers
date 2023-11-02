
@interface HMDCurrentAppleMediaAccessoryConfigurationLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging> {
    NSNumber * _numMediaAutomations;
    NSNumber * _numPairedSensorAutomations;
    NSNumber * _numPairedSensors;
    NSNumber * _sensorStatus;
}

@property (nonatomic, readonly, copy) NSString *accessoryIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *homeUUID;
@property (readonly, copy) NSNumber *numMediaAutomations;
@property (readonly, copy) NSNumber *numPairedSensorAutomations;
@property (readonly, copy) NSNumber *numPairedSensors;
@property (readonly, copy) NSNumber *sensorStatus;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (unsigned long long)coreAnalyticsEventOptions;
- (id)initWithNumPairedSensors:(id)arg1 sensorStatus:(id)arg2 numPairedSensorAutomations:(id)arg3 numMediaAutomations:(id)arg4;
- (id)numMediaAutomations;
- (id)numPairedSensorAutomations;
- (id)numPairedSensors;
- (id)sensorStatus;

@end
