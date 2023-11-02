
@interface SVXDeviceSetupManager : NSObject <SVXModuleInstance, SVXSessionActivationListening> {
    SVXDeviceSetupFlowScene * _activatedDeviceSetupFlowScene;
    SVXDeviceSetupAnnouncer * _announcer;
    NSDate * _beginDate;
    NSMutableDictionary * _contextsByUUID;
    SVXDeviceSetupContext * _effectiveContext;
    NSDate * _endDate;
    SVXModule * _module;
    SVXSessionManager * _sessionManager;
    SVXSpeechSynthesizer * _speechSynthesizer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_prepareForSetupWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)_setContext:(id)arg1 forUUID:(id)arg2;
- (void)_setEffectiveContext:(id)arg1;
- (void)_updateEffectiveContext;
- (void)addListener:(id)arg1;
- (void)getContextWithCompletion:(id /* block */)arg1;
- (id)initWithModule:(id)arg1;
- (void)prepareForSetupWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)removeListener:(id)arg1;
- (void)sessionManager:(id)arg1 didActivateWithContext:(id)arg2;
- (void)setContext:(id)arg1 forUUID:(id)arg2;
- (void)startWithModuleInstanceProvider:(id)arg1 platformDependencies:(id)arg2;
- (void)stopWithModuleInstanceProvider:(id)arg1;

@end
