
@interface HMDHomePodSetupLatencyLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging> {
    unsigned long long  _accessoryAddProcessedTime;
    unsigned long long  _pairingIdentityCreationTime;
    unsigned long long  _settingsCreationTime;
    unsigned long long  _setupEndTime;
    unsigned long long  _setupStartTime;
    unsigned long long  _siriReadinessTime;
}

@property (nonatomic, readonly) unsigned long long accessoryAddProcessedTime;
@property (nonatomic, readonly, copy) NSString *accessoryIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *homeUUID;
@property (nonatomic, readonly) unsigned long long pairingIdentityCreationTime;
@property (nonatomic, readonly) unsigned long long settingsCreationTime;
@property (nonatomic, readonly) unsigned long long setupEndTime;
@property (nonatomic, readonly) unsigned long long setupStartTime;
@property (nonatomic, readonly) unsigned long long siriReadinessTime;
@property (readonly) Class superclass;

+ (bool)submitEventWithHistogrammedAggregateHomeDataCommonDimensions;

- (unsigned long long)accessoryAddProcessedTime;
- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (unsigned long long)coreAnalyticsEventOptions;
- (id)initWithSetupStartTime:(unsigned long long)arg1 setupEndTime:(unsigned long long)arg2 settingsCreationTime:(unsigned long long)arg3 pairingIdentityCreationTime:(unsigned long long)arg4 accessoryAddProcessedTime:(unsigned long long)arg5 siriReadinessTime:(unsigned long long)arg6;
- (unsigned long long)pairingIdentityCreationTime;
- (unsigned long long)settingsCreationTime;
- (unsigned long long)setupEndTime;
- (unsigned long long)setupStartTime;
- (unsigned long long)siriReadinessTime;

@end
