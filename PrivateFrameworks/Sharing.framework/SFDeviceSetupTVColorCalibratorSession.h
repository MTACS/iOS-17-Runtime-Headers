
@interface SFDeviceSetupTVColorCalibratorSession : NSObject {
    bool  _activateCalled;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    int  _finishState;
    bool  _invalidateCalled;
    int  _pairSetupState;
    int  _pairVerifyState;
    SFDevice * _peerDevice;
    id /* block */  _progressHandler;
    id /* block */  _promptForPINHandler;
    bool  _sessionSecured;
    SFSession * _sfSession;
    int  _sfSessionState;
    unsigned long long  _startTicks;
    unsigned long long  _triggerMs;
    TVLDisplayColorCalibrator * _tvColorCalibrator;
    int  _tvLatencySetupState;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, retain) SFDevice *peerDevice;
@property (nonatomic, copy) id /* block */ progressHandler;
@property (nonatomic, copy) id /* block */ promptForPINHandler;
@property (nonatomic) unsigned long long triggerMs;

- (void).cxx_destruct;
- (void)_cleanup;
- (void)_handleSetupActionRequest:(id)arg1 responseHandler:(id /* block */)arg2;
- (void)_reportError:(id)arg1;
- (void)_run;
- (int)_runFinish;
- (int)_runPairSetup;
- (int)_runPairVerify:(bool)arg1;
- (void)_runSFSessionActivated;
- (int)_runSFSessionStart;
- (void)_runTVColorCalibratorProgressEvent:(unsigned long long)arg1 info:(id)arg2;
- (void)_runTVColorCalibratorSetup;
- (int)_runTVLatencySetup;
- (void)_runTVLatencySetupRequest;
- (void)activate;
- (id)dispatchQueue;
- (id)init;
- (void)invalidate;
- (void)pairSetupTryPIN:(id)arg1;
- (id)peerDevice;
- (id /* block */)progressHandler;
- (id /* block */)promptForPINHandler;
- (void)setDispatchQueue:(id)arg1;
- (void)setPeerDevice:(id)arg1;
- (void)setProgressHandler:(id /* block */)arg1;
- (void)setPromptForPINHandler:(id /* block */)arg1;
- (void)setTriggerMs:(unsigned long long)arg1;
- (unsigned long long)triggerMs;
- (void)tryAgain;

@end
