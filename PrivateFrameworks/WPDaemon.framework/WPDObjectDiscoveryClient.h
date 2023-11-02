
@interface WPDObjectDiscoveryClient : WPDClient {
    WPDObjectDiscoveryData * _keyAddressAndPayload;
    unsigned long long  _keyRequestID;
    WPDObjectDiscoveryManager * _objectDiscoveryManager;
    bool  _pendingSent;
    WPDSearchPartyAgent * _spAgent;
    NSNumber * _testBeaconingInterval;
    unsigned long long  _tokenRequestID;
}

@property (readonly) WPDObjectDiscoveryData *keyAddressAndPayload;
@property unsigned long long keyRequestID;
@property WPDObjectDiscoveryManager *objectDiscoveryManager;
@property bool pendingSent;
@property (retain) WPDSearchPartyAgent *spAgent;
@property (retain) NSNumber *testBeaconingInterval;
@property unsigned long long tokenRequestID;

- (void).cxx_destruct;
- (void)completeSPBeaconingWithSuccess:(bool)arg1;
- (void)completeSPNearbyTockensWithSuccess:(bool)arg1;
- (void)dealloc;
- (void)destroy;
- (void)endTestMode;
- (void)generateStateDump;
- (id)initWithXPCConnection:(id)arg1 server:(id)arg2;
- (id)keyAddressAndPayload;
- (unsigned long long)keyRequestID;
- (void)notifyClientObjectDiscoveryStateChange:(long long)arg1;
- (void)notifyClientStateChange:(long long)arg1 Restricted:(bool)arg2;
- (id)objectDiscoveryManager;
- (bool)pendingSent;
- (void)registerWithDaemon:(id)arg1 forProcess:(id)arg2 machName:(id)arg3 holdVouchers:(long long)arg4;
- (void)sendRegisteredWithDaemonAndContinuingSession:(bool)arg1;
- (void)sendTestRequest:(id)arg1;
- (void)setKeyRequestID:(unsigned long long)arg1;
- (void)setObjectDiscoveryManager:(id)arg1;
- (void)setPendingSent:(bool)arg1;
- (void)setSpAgent:(id)arg1;
- (void)setTestBeaconingInterval:(id)arg1;
- (void)setTokenRequestID:(unsigned long long)arg1;
- (id)spAgent;
- (void)startAdvertising:(id)arg1;
- (void)startSPBeaconing;
- (void)stopAdvertising:(id)arg1;
- (void)stopSPBeaconing;
- (id)testBeaconingInterval;
- (unsigned long long)tokenRequestID;
- (void)updateSPBeaconing;
- (void)updateSPNearbyTokens;

@end
