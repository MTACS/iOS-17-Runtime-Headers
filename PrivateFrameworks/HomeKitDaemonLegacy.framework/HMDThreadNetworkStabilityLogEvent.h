
@interface HMDThreadNetworkStabilityLogEvent : HMMHomeLogEvent <HMMCoreAnalyticsLogging> {
    NSString * _logTriggerReason;
    unsigned long long  _numReadErrors;
    unsigned long long  _numReadWrites;
    unsigned long long  _numSessionErrors;
    unsigned long long  _numWriteErrors;
    unsigned long long  _threadNetworkDowntime;
    HMDThreadNetworkStatusReport * _threadNetworkStatusReport;
    unsigned long long  _threadNetworkUptime;
    NSString * _topReadWriteError;
    NSString * _topSessionError;
}

@property (nonatomic, readonly, copy) NSString *accessoryIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *homeUUID;
@property (nonatomic, readonly) NSString *logTriggerReason;
@property (nonatomic, readonly) unsigned long long numReadErrors;
@property (nonatomic, readonly) unsigned long long numReadWrites;
@property (nonatomic, readonly) unsigned long long numSessionErrors;
@property (nonatomic, readonly) unsigned long long numWriteErrors;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long threadNetworkDowntime;
@property (nonatomic, readonly) HMDThreadNetworkStatusReport *threadNetworkStatusReport;
@property (nonatomic, readonly) unsigned long long threadNetworkUptime;
@property (nonatomic, readonly) NSString *topReadWriteError;
@property (nonatomic, readonly) NSString *topSessionError;

- (void).cxx_destruct;
- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (unsigned long long)coreAnalyticsEventOptions;
- (id)initWithDictionary:(id)arg1;
- (id)initWithHomeUUID:(id)arg1 threadNetworkStatusReport:(id)arg2 threadNetworkUptime:(unsigned long long)arg3 threadNetworkDowntime:(unsigned long long)arg4 numReadWrites:(unsigned long long)arg5 numReadErrors:(unsigned long long)arg6 numWriteErrors:(unsigned long long)arg7 topReadWriteError:(id)arg8 topSessionError:(id)arg9 numSessionErrors:(unsigned long long)arg10 logTriggerReason:(id)arg11;
- (id)logTriggerReason;
- (unsigned long long)numReadErrors;
- (unsigned long long)numReadWrites;
- (unsigned long long)numSessionErrors;
- (unsigned long long)numWriteErrors;
- (id)serializedLogEvent;
- (id)submitEventWithHistogrammedHomeDataCommonDimensionsForSpecifiedHome;
- (unsigned long long)threadNetworkDowntime;
- (id)threadNetworkStatusReport;
- (unsigned long long)threadNetworkUptime;
- (id)topReadWriteError;
- (id)topSessionError;

@end
