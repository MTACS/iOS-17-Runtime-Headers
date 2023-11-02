
@interface HMDHouseholdNetworkStabilityLogEvent : HMMHomeLogEvent <HMMCoreAnalyticsLogging> {
    unsigned long long  _numAPChanges;
    unsigned long long  _numGatewayChanges;
    unsigned long long  _numNetworkSignatures;
    unsigned long long  _numReadErrors;
    unsigned long long  _numReadWrites;
    unsigned long long  _numSessionErrors;
    unsigned long long  _numStabilityReporters;
    unsigned long long  _numWifiAssociations;
    unsigned long long  _numWifiDisassociations;
    unsigned long long  _numWriteErrors;
}

@property (nonatomic, readonly, copy) NSString *accessoryIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *homeUUID;
@property (nonatomic, readonly) unsigned long long numAPChanges;
@property (nonatomic, readonly) unsigned long long numGatewayChanges;
@property (nonatomic, readonly) unsigned long long numNetworkSignatures;
@property (nonatomic, readonly) unsigned long long numReadErrors;
@property (nonatomic, readonly) unsigned long long numReadWrites;
@property (nonatomic, readonly) unsigned long long numSessionErrors;
@property (nonatomic, readonly) unsigned long long numStabilityReporters;
@property (nonatomic, readonly) unsigned long long numWifiAssociations;
@property (nonatomic, readonly) unsigned long long numWifiDisassociations;
@property (nonatomic, readonly) unsigned long long numWriteErrors;
@property (readonly) Class superclass;

- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (unsigned long long)coreAnalyticsEventOptions;
- (id)initWithHomeUUID:(id)arg1 numStabilityReporters:(unsigned long long)arg2 WifiAssociations:(unsigned long long)arg3 wifiDisassociations:(unsigned long long)arg4 apChanges:(unsigned long long)arg5 gatewayChanges:(unsigned long long)arg6 numReadWrites:(unsigned long long)arg7 numReadErrors:(unsigned long long)arg8 numWriteErrors:(unsigned long long)arg9 numSessionErrors:(unsigned long long)arg10 numNetworkSignatures:(unsigned long long)arg11;
- (unsigned long long)numAPChanges;
- (unsigned long long)numGatewayChanges;
- (unsigned long long)numNetworkSignatures;
- (unsigned long long)numReadErrors;
- (unsigned long long)numReadWrites;
- (unsigned long long)numSessionErrors;
- (unsigned long long)numStabilityReporters;
- (unsigned long long)numWifiAssociations;
- (unsigned long long)numWifiDisassociations;
- (unsigned long long)numWriteErrors;
- (id)submitEventWithHistogrammedHomeDataCommonDimensionsForSpecifiedHome;

@end
