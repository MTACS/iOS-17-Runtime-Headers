
@interface SFDeviceSetupAppleTVService : NSObject {
    bool  _activateCalled;
    bool  _advertiseFast;
    SFDeviceOperationHandlerCNJSetup * _captiveNetworkHandler;
    SFDeviceOperationHandlerCDPSetup * _cdpSetupHandler;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSString * _forcedPasscode;
    HMDeviceSetupOperationHandler * _homeKitSetupHandler;
    bool  _invalidateCalled;
    bool  _isCLIMode;
    bool  _prefCDPEnabled;
    bool  _prefHH2Enabled;
    bool  _prefTVLatency;
    SFClient * _preventExitForLocaleClient;
    id /* block */  _progressHandler;
    SFService * _sfService;
    SFSession * _sfSession;
    TVLAudioLatencyEstimator * _tvLatencyEstimator;
    bool  _tvLatencyFinalReported;
    SFDeviceOperationHandlerWiFiSetup * _wifiSetupHandler;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) NSString *forcedPasscode;
@property (nonatomic) bool isCLIMode;
@property (nonatomic, copy) id /* block */ progressHandler;

- (void).cxx_destruct;
- (void)_activate;
- (void)_cleanup;
- (void)_handleBasicConfigRequest:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)_handleFinishRequest:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)_handlePreAuthRequest:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)_handleSessionEnded:(id)arg1;
- (void)_handleSessionStarted:(id)arg1;
- (void)_handleTVLatencyProgressEvent:(unsigned long long)arg1 info:(id)arg2;
- (void)_handleTVLatencyRequest:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)_invalidate;
- (void)_reportProgress:(unsigned int)arg1 info:(id)arg2;
- (void)_sfServiceStart;
- (void)activate;
- (void)dealloc;
- (id)dispatchQueue;
- (id)forcedPasscode;
- (id)init;
- (void)invalidate;
- (bool)isCLIMode;
- (id /* block */)progressHandler;
- (void)setDispatchQueue:(id)arg1;
- (void)setForcedPasscode:(id)arg1;
- (void)setIsCLIMode:(bool)arg1;
- (void)setProgressHandler:(id /* block */)arg1;

@end
