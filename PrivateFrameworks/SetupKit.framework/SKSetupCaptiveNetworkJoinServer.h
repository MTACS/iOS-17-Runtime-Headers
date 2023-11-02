
@interface SKSetupCaptiveNetworkJoinServer : SKSetupBase <NRDeviceMonitorDelegate> {
    CUBonjourAdvertiser * _awdlAdvertiser;
    CBAdvertiser * _bleAdvertiser;
    CBServer * _bleServer;
    unsigned int  _captiveNetworkCookie;
    NSString * _captiveNetworkInterfaceName;
    bool  _captiveNetworkWebSheetActive;
    bool  _captiveNetworkWebSheetCompleted;
    bool  _cfuCleared;
    FLFollowUpController * _cfuController;
    int  _mode;
    NRDeviceIdentifier * _nrDeviceIdentifier;
    NRDeviceManager * _nrDeviceManager;
    NRDeviceMonitor * _nrDeviceMonitor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) int mode;
@property (readonly) Class superclass;

+ (void)resetWithCompletionHandler:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)_activate;
- (void)_bleAdvertiserEnsureStarted;
- (void)_bleAdvertiserEnsureStopped;
- (bool)_bleAdvertiserShouldRun;
- (void)_bleServerAcceptConnecton:(id)arg1;
- (void)_bleServerEnsureStarted;
- (void)_bleServerEnsureStopped;
- (void)_captiveNetworkLoginInfo:(id)arg1 cookie:(unsigned int)arg2 responseHandler:(id /* block */)arg3;
- (void)_captiveNetworkLoginRequest:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)_captiveNetworkProbeEnsureStopped;
- (void)_captiveNetworkProbeRequest:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)_captiveNetworkProbeResult:(int)arg1 responseHandler:(id /* block */)arg2;
- (void)_cfuEnsuredStarted;
- (void)_cfuEnsuredStopped;
- (void)_connectionEnded:(id)arg1;
- (void)_invalidate;
- (void)_invalidated;
- (void)_networkRelayAWDLStartRequest:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)_networkRelayDeviceEnsureStopped;
- (void)_networkRelaySetupRequest:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)_oobEnsureStarted;
- (void)_run;
- (void)_runDefault;
- (void)_runDetected;
- (void)_runUserRequest;
- (id)descriptionWithLevel:(int)arg1;
- (void)deviceIsConnectedDidChange:(id)arg1 isConnected:(bool)arg2;
- (void)deviceLinkTypeDidChange:(id)arg1 linkType:(unsigned char)arg2 linkSubtype:(unsigned char)arg3;
- (void)deviceProxyServiceInterfaceNameDidChange:(id)arg1 interfaceName:(id)arg2;
- (id)init;
- (int)mode;
- (void)setMode:(int)arg1;

@end
