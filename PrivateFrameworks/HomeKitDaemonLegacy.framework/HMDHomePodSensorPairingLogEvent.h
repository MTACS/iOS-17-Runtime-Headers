
@interface HMDHomePodSensorPairingLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging> {
    unsigned long long  _failureReason;
    bool  _pairingSuccess;
}

@property (nonatomic, readonly, copy) NSString *accessoryIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long failureReason;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *homeUUID;
@property (readonly) bool pairingSuccess;
@property (readonly) Class superclass;

- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (unsigned long long)coreAnalyticsEventOptions;
- (unsigned long long)failureReason;
- (id)initWithPairingSuccess:(bool)arg1 failureReason:(unsigned long long)arg2;
- (bool)pairingSuccess;

@end
