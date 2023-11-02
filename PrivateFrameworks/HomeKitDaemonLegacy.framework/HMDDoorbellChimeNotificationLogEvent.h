
@interface HMDDoorbellChimeNotificationLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging> {
    NSError * _coordinationError;
    unsigned long long  _coordinationLatency;
    unsigned long long  _coordinationMode;
    bool  _coordinationPathTriggered;
    unsigned long long  _coreUtilsDestinationCount;
    unsigned long long  _coreUtilsLatency;
    unsigned long long  _numHomePodsWithDoorbellChimeEnabled;
}

@property (nonatomic, readonly, copy) NSString *accessoryIdentifier;
@property (copy) NSError *coordinationError;
@property unsigned long long coordinationLatency;
@property unsigned long long coordinationMode;
@property bool coordinationPathTriggered;
@property (nonatomic, readonly, copy) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;
@property unsigned long long coreUtilsDestinationCount;
@property unsigned long long coreUtilsLatency;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *homeUUID;
@property unsigned long long numHomePodsWithDoorbellChimeEnabled;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)coordinationError;
- (unsigned long long)coordinationLatency;
- (unsigned long long)coordinationMode;
- (bool)coordinationPathTriggered;
- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (unsigned long long)coreAnalyticsEventOptions;
- (unsigned long long)coreUtilsDestinationCount;
- (unsigned long long)coreUtilsLatency;
- (unsigned long long)numHomePodsWithDoorbellChimeEnabled;
- (void)setCoordinationError:(id)arg1;
- (void)setCoordinationLatency:(unsigned long long)arg1;
- (void)setCoordinationMode:(unsigned long long)arg1;
- (void)setCoordinationPathTriggered:(bool)arg1;
- (void)setCoreUtilsDestinationCount:(unsigned long long)arg1;
- (void)setCoreUtilsLatency:(unsigned long long)arg1;
- (void)setNumHomePodsWithDoorbellChimeEnabled:(unsigned long long)arg1;

@end
