
@interface SKSetupCaptiveNetworkJoinClient : SKSetupBase <NRDeviceMonitorDelegate> {
    bool  _awdlAdvertiserPeerStarted;
    CUBonjourBrowser * _awdlBrowser;
    NSString * _awdlName;
    CUBonjourDevice * _awdlPeerDevice;
    NSObject<OS_dispatch_source> * _awdlTimer;
    bool  _captiveNetworkLoginDone;
    bool  _captiveNetworkProbingSuccess;
    NSString * _networkRelayPeerIPStr;
    NSString * _networkRelayProxyInterface;
    NSObject<OS_dispatch_source> * _networkRelayTimer;
    NRDeviceIdentifier * _nrDeviceIdentifier;
    NRDeviceManager * _nrDeviceManager;
    NRDeviceMonitor * _nrDeviceMonitor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_captiveProbeRequest;
- (void)_captiveProbeResponse:(id)arg1;
- (void)_invalidate;
- (void)_networkRelayEnsureStopped;
- (void)_postEvent:(id)arg1;
- (void)_run;
- (void)_runAWDLFoundDevice:(id)arg1;
- (void)_runAWDLFoundTimerStart;
- (void)_runAWDLStart;
- (void)_runCaptiveNetworkLoginResponse:(id)arg1;
- (void)_runCaptiveNetworkLoginStart;
- (bool)_runNetworkRelayPeerStart;
- (void)_runNetworkRelaySelfStart;
- (void)deviceIsConnectedDidChange:(id)arg1 isConnected:(bool)arg2;
- (void)deviceLinkTypeDidChange:(id)arg1 linkType:(unsigned char)arg2 linkSubtype:(unsigned char)arg3;
- (void)deviceProxyServiceInterfaceNameDidChange:(id)arg1 interfaceName:(id)arg2;
- (id)init;

@end
