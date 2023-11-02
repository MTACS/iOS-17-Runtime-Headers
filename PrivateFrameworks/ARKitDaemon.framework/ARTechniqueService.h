
@interface ARTechniqueService : ARDaemonService <ARRemoteTechniqueService, ARTechniqueDelegate> {
    <ARRemoteTechniqueClient> * _clientProxy;
    ARTechnique * _technique;
}

@property (nonatomic, retain) <ARRemoteTechniqueClient> *clientProxy;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) ARTechnique *technique;

+ (id)serviceName;

- (void).cxx_destruct;
- (void)_initCommon:(id)arg1;
- (void)captureBehaviorWithReply:(id /* block */)arg1;
- (id)clientProxy;
- (id)initWithConnection:(id)arg1;
- (id)initWithConnection:(id)arg1 exportedInterface:(id)arg2 remoteObjectInterface:(id)arg3;
- (void)interruptionHandler;
- (void)invalidationHandler;
- (void)isActiveWithReply:(id /* block */)arg1;
- (void)numberOfActiveConnectionsWithReply:(id /* block */)arg1;
- (void)prepare:(bool)arg1;
- (id)processData:(id)arg1;
- (void)processData:(id)arg1 reply:(id /* block */)arg2;
- (void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2;
- (void)requiredSensorDataTypesWithReply:(id /* block */)arg1;
- (void)requiredTimeIntervalWithReply:(id /* block */)arg1;
- (void)resultDataClassesWithReply:(id /* block */)arg1;
- (void)setClientProxy:(id)arg1;
- (void)setTechnique:(id)arg1;
- (id)technique;
- (void)technique:(id)arg1 didFailWithError:(id)arg2;
- (void)technique:(id)arg1 didOutputResultData:(id)arg2 timestamp:(double)arg3 context:(id)arg4;

@end
