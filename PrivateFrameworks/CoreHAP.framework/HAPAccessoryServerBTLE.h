
@interface HAPAccessoryServerBTLE : HAPAccessoryServer <HAPAccessoryServerMetricProtocol> {
    HAPBLEPeripheral * _blePeripheral;
    HAPAccessoryServerBrowserBTLE * _browser;
    unsigned char  _connectReason;
    unsigned char  _connectionIdleTime;
    unsigned long long  _hapBLEProtocolVersion;
    unsigned long long  _metricHAPBTLEConnectionCount;
    unsigned long long  _metricHAPBTLEConnectionPerReasonCount;
    unsigned long long  _metricHAPBTLEDiscoveryCount;
    bool  _notifyingCharacteristicUpdated;
    CBPeripheral * _peripheral;
    unsigned long long  _resumeSessionID;
    bool  _stateChanged;
    NSNumber * _stateNumber;
    NSString * _whbStableIdentifier;
}

@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (nonatomic) HAPBLEPeripheral *blePeripheral;
@property (nonatomic, readonly) HAPAccessoryServerBrowserBTLE *browser;
@property (nonatomic) unsigned char connectReason;
@property (nonatomic) unsigned char connectionIdleTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long hapBLEProtocolVersion;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long metricHAPBTLEConnectionCount;
@property (nonatomic) unsigned long long metricHAPBTLEConnectionPerReasonCount;
@property (nonatomic) unsigned long long metricHAPBTLEDiscoveryCount;
@property (nonatomic) bool notifyingCharacteristicUpdated;
@property (nonatomic, readonly) CBPeripheral *peripheral;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (nonatomic, readonly) unsigned long long resumeSessionID;
@property (readonly, copy) NSString *shortDescription;
@property (nonatomic) bool stateChanged;
@property (nonatomic, copy) NSNumber *stateNumber;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *whbStableIdentifier;

+ (id)hapUUIDFromBTLEUUID:(id)arg1;

- (void).cxx_destruct;
- (id)blePeripheral;
- (id)browser;
- (void)configureCharacteristics:(id)arg1 queue:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (unsigned char)connectReason;
- (unsigned char)connectionIdleTime;
- (void)discoverAccessoriesAndReadCharacteristicTypes:(id)arg1;
- (void)generateBroadcastKey:(unsigned char)arg1 queue:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)handleConnectionWithPeripheral:(id)arg1 withError:(id)arg2;
- (void)handleDisconnectionWithError:(id)arg1 completionHandler:(id /* block */)arg2;
- (unsigned long long)hapBLEProtocolVersion;
- (void)incrementHAPBTLEMetricsConnectionCount;
- (void)incrementHAPBTLEMetricsDiscoveryCount;
- (id)initWithPeripheral:(id)arg1 name:(id)arg2 pairingUsername:(id)arg3 statusFlags:(id)arg4 stateNumber:(id)arg5 stateChanged:(bool)arg6 connectReason:(unsigned char)arg7 configNumber:(id)arg8 category:(id)arg9 setupHash:(id)arg10 connectionIdleTime:(unsigned char)arg11 browser:(id)arg12 keyStore:(id)arg13 whbStableIdentifier:(id)arg14;
- (bool)isCached;
- (bool)isPaired;
- (bool)isReadyForOperation:(long long)arg1;
- (long long)linkLayerType;
- (long long)linkType;
- (unsigned long long)metricHAPBTLEConnectionCount;
- (unsigned long long)metricHAPBTLEConnectionPerReasonCount;
- (unsigned long long)metricHAPBTLEDiscoveryCount;
- (bool)notifyingCharacteristicUpdated;
- (id)peripheral;
- (id)readAndResetHAPMetrics:(bool)arg1;
- (unsigned long long)resumeSessionID;
- (void)setBlePeripheral:(id)arg1;
- (void)setConnectReason:(unsigned char)arg1;
- (void)setConnectionIdleTime:(unsigned char)arg1;
- (void)setMetricHAPBTLEConnectionCount:(unsigned long long)arg1;
- (void)setMetricHAPBTLEConnectionPerReasonCount:(unsigned long long)arg1;
- (void)setMetricHAPBTLEDiscoveryCount:(unsigned long long)arg1;
- (void)setNotifyingCharacteristicUpdated:(bool)arg1;
- (void)setStateChanged:(bool)arg1;
- (void)setStateNumber:(id)arg1;
- (id)shortDescription;
- (bool)stateChanged;
- (id)stateNumber;
- (void)updateConnectionIdleTime:(unsigned char)arg1;
- (void)updatePeripheral:(id)arg1;
- (bool)updatePeripheralIdentifier:(id*)arg1 isPairing:(bool)arg2;
- (bool)updateResumeSessionID:(unsigned long long)arg1;
- (id)whbStableIdentifier;

@end
