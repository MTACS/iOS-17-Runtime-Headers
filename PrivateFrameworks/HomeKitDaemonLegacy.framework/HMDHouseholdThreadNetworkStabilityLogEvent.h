
@interface HMDHouseholdThreadNetworkStabilityLogEvent : HMMHomeLogEvent <HMMCoreAnalyticsLogging> {
    unsigned long long  _numNetworkSignatures;
    unsigned long long  _numReadErrors;
    unsigned long long  _numReadWrites;
    unsigned long long  _numSessionErrors;
    unsigned long long  _numStabilityReporters;
    unsigned long long  _numWriteErrors;
    unsigned long long  _threadNetworkDowntime;
    HMDThreadNetworkStatusReport * _threadNetworkStatusReport;
    unsigned long long  _threadNetworkUptime;
}

@property (nonatomic, readonly, copy) NSString *accessoryIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *homeUUID;
@property (nonatomic, readonly) unsigned long long numNetworkSignatures;
@property (nonatomic, readonly) unsigned long long numReadErrors;
@property (nonatomic, readonly) unsigned long long numReadWrites;
@property (nonatomic, readonly) unsigned long long numSessionErrors;
@property (nonatomic, readonly) unsigned long long numStabilityReporters;
@property (nonatomic, readonly) unsigned long long numWriteErrors;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long threadNetworkDowntime;
@property (nonatomic, readonly) HMDThreadNetworkStatusReport *threadNetworkStatusReport;
@property (nonatomic, readonly) unsigned long long threadNetworkUptime;

- (void).cxx_destruct;
- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (unsigned long long)coreAnalyticsEventOptions;
- (id)initWithHomeUUID:(id)arg1 numStabilityReporters:(unsigned long long)arg2 threadNetworkStatusReport:(id)arg3 threadNetworkUptime:(unsigned long long)arg4 threadNetworkDowntime:(unsigned long long)arg5 numReadWrites:(unsigned long long)arg6 numReadErrors:(unsigned long long)arg7 numWriteErrors:(unsigned long long)arg8 numSessionErrors:(unsigned long long)arg9;
- (unsigned long long)numNetworkSignatures;
- (unsigned long long)numReadErrors;
- (unsigned long long)numReadWrites;
- (unsigned long long)numSessionErrors;
- (unsigned long long)numStabilityReporters;
- (unsigned long long)numWriteErrors;
- (id)submitEventWithHistogrammedHomeDataCommonDimensionsForSpecifiedHome;
- (unsigned long long)threadNetworkDowntime;
- (id)threadNetworkStatusReport;
- (unsigned long long)threadNetworkUptime;

@end
