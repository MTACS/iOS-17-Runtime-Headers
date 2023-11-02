
@interface SFClient : NSObject <SFXPCInterface> {
    NSMutableSet * _assertions;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _enableEnhancedDiscovery;
    id /* block */  _interruptionHandler;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _invalidationHandler;
    NSXPCConnection * _syncXPCCnx;
    id /* block */  _wristStateMonitorCompletionHandler;
    NSXPCConnection * _xpcCnx;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, copy) id /* block */ wristStateMonitorCompletionHandler;

- (void).cxx_destruct;
- (void)_ensureXPCStarted;
- (void)_interrupted;
- (void)_invalidate;
- (void)_invalidated;
- (void)activateAssertionWithIdentifier:(id)arg1;
- (void)activityStateWithCompletion:(id /* block */)arg1;
- (void)appleIDInfoWithCompletion:(id /* block */)arg1;
- (void)broadwayPresentCardWithCode:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (void)clearXPCHelperImageCacheWithCompletion:(id /* block */)arg1;
- (void)contactIDForEmailHash:(id)arg1 phoneHash:(id)arg2 completion:(id /* block */)arg3;
- (void)dealloc;
- (id)dispatchQueue;
- (void)displayNameForEmailHash:(id)arg1 phoneHash:(id)arg2 completion:(id /* block */)arg3;
- (void)displayStringForContactIdentifier:(id)arg1 deviceIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)displayStringForContactIdentifierSync:(id)arg1 deviceIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)ensureSyncXPCStarted;
- (void)findContact:(id)arg1 completion:(id /* block */)arg2;
- (void)findContact:(id)arg1 skipIfContactBlocked:(bool)arg2 completion:(id /* block */)arg3;
- (void)getDeviceAssets:(id)arg1 completion:(id /* block */)arg2;
- (void)getPairedWatchWristStateWithCompletionHandler:(id /* block */)arg1;
- (void)getPeopleSuggestions:(id)arg1 completion:(id /* block */)arg2;
- (void)hashManagerControl:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (void)monitorPairedWatchWristStateWithCompletionHandler:(id /* block */)arg1;
- (void)openSetupURL:(id)arg1 completion:(id /* block */)arg2;
- (void)pairedWatchWristStateChanged:(long long)arg1;
- (void)preventExitForLocaleReason:(id)arg1;
- (void)reenableProxCardType:(unsigned char)arg1 completion:(id /* block */)arg2;
- (void)repairDevice:(id)arg1 completion:(id /* block */)arg2;
- (void)repairDevice:(id)arg1 flags:(unsigned int)arg2 completion:(id /* block */)arg3;
- (void)retriggerProximityPairing:(id /* block */)arg1;
- (void)retriggerProximitySetup:(id /* block */)arg1;
- (void)setAudioRoutingScore:(int)arg1 completion:(id /* block */)arg2;
- (void)setDispatchQueue:(id)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setWristStateMonitorCompletionHandler:(id /* block */)arg1;
- (void)setupDevice:(id)arg1 home:(id)arg2 completion:(id /* block */)arg3;
- (void)showDevicePickerWithInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)startProxCardTransactionWithOptions:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)subCredentialPresentCardWithParams:(id)arg1 completion:(id /* block */)arg2;
- (id)syncRemoteProxyWithError:(id*)arg1;
- (void)testContinuityKeyboardBegin:(bool)arg1;
- (void)triggerHomeKitDeviceDetectedWithURL:(id)arg1 completion:(id /* block */)arg2;
- (void)triggerProximityAutoFillDetectedWithURL:(id)arg1 completion:(id /* block */)arg2;
- (void)wifiPasswordSharingAvailabilityWithCompletion:(id /* block */)arg1;
- (id /* block */)wristStateMonitorCompletionHandler;

@end
