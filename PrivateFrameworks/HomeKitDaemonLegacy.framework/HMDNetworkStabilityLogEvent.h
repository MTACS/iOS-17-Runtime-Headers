
@interface HMDNetworkStabilityLogEvent : HMMHomeLogEvent <HMMCoreAnalyticsLogging> {
    NSString * _apOUI;
    unsigned long long  _collectionDurationMinutes;
    NSString * _gatewayMACAddress;
    long long  _localHourOfDay;
    unsigned long long  _numAPChanges;
    unsigned long long  _numGatewayChanges;
    unsigned long long  _numReadErrors;
    unsigned long long  _numReadWrites;
    unsigned long long  _numSessionErrors;
    unsigned long long  _numWifiAssociations;
    unsigned long long  _numWifiDisassociations;
    unsigned long long  _numWriteErrors;
    NSString * _ssid;
    NSString * _topReadWriteError;
    NSString * _topSessionError;
}

@property (nonatomic, readonly, copy) NSString *accessoryIdentifier;
@property (nonatomic, readonly) NSString *apOUI;
@property (nonatomic, readonly) unsigned long long collectionDurationMinutes;
@property (nonatomic, readonly, copy) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *gatewayMACAddress;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *homeUUID;
@property (nonatomic, readonly) long long localHourOfDay;
@property (nonatomic, readonly) unsigned long long numAPChanges;
@property (nonatomic, readonly) unsigned long long numGatewayChanges;
@property (nonatomic, readonly) unsigned long long numReadErrors;
@property (nonatomic, readonly) unsigned long long numReadWrites;
@property (nonatomic, readonly) unsigned long long numSessionErrors;
@property (nonatomic, readonly) unsigned long long numWifiAssociations;
@property (nonatomic, readonly) unsigned long long numWifiDisassociations;
@property (nonatomic, readonly) unsigned long long numWriteErrors;
@property (nonatomic, readonly) NSString *ssid;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *topReadWriteError;
@property (nonatomic, readonly) NSString *topSessionError;

- (void).cxx_destruct;
- (id)apOUI;
- (unsigned long long)collectionDurationMinutes;
- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (unsigned long long)coreAnalyticsEventOptions;
- (id)gatewayMACAddress;
- (id)initWithDictionary:(id)arg1;
- (id)initWithHomeUUID:(id)arg1 numWifiAssociations:(unsigned long long)arg2 wifiDisassociations:(unsigned long long)arg3 apChanges:(unsigned long long)arg4 gatewayChanges:(unsigned long long)arg5 numReadWrites:(unsigned long long)arg6 numReadErrors:(unsigned long long)arg7 numWriteErrors:(unsigned long long)arg8 topReadWriteError:(id)arg9 topSessionError:(id)arg10 numSessionErrors:(unsigned long long)arg11 apOUI:(id)arg12 ssid:(id)arg13 gatewayMACAddress:(id)arg14 localHourOfDay:(long long)arg15 collectionDurationMinutes:(unsigned long long)arg16;
- (long long)localHourOfDay;
- (unsigned long long)numAPChanges;
- (unsigned long long)numGatewayChanges;
- (unsigned long long)numReadErrors;
- (unsigned long long)numReadWrites;
- (unsigned long long)numSessionErrors;
- (unsigned long long)numWifiAssociations;
- (unsigned long long)numWifiDisassociations;
- (unsigned long long)numWriteErrors;
- (id)serializedLogEvent;
- (id)ssid;
- (id)submitEventWithHistogrammedHomeDataCommonDimensionsForSpecifiedHome;
- (id)topReadWriteError;
- (id)topSessionError;

@end
