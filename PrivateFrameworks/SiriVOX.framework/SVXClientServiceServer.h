
@interface SVXClientServiceServer : NSObject <SVXModuleInstance> {
    NSMutableDictionary * _connectionsByUUID;
    SVXDeviceSetupManager * _deviceSetupManager;
    SVXModule * _module;
    SVXSessionManager * _sessionManager;
    SVXSpeechSynthesizer * _speechSynthesizer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addConnection:(id)arg1;
- (void)_removeAllConnections;
- (void)_removeConnection:(id)arg1;
- (void)addConnection:(id)arg1;
- (void)dealloc;
- (id)initWithModule:(id)arg1;
- (void)removeConnection:(id)arg1;
- (void)startWithModuleInstanceProvider:(id)arg1 platformDependencies:(id)arg2;
- (void)stopWithModuleInstanceProvider:(id)arg1;

@end
