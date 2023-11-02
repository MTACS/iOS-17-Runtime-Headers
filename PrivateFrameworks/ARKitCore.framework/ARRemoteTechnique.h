
@interface ARRemoteTechnique : ARTechnique <ARRemoteTechniqueClient, ARServerConnectionDelegate> {
    NSMutableArray * _inflightContexts;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _inflightContextsLock;
    ARServerConnection * _serverConnection;
}

@property (getter=isActive, nonatomic) bool active;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) ARServerConnection *serverConnection;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)captureBehavior;
- (void)dealloc;
- (id)initWithListenerEndpoint:(id)arg1;
- (id)initWithServerConnection:(id)arg1;
- (id)initWithServiceName:(id)arg1;
- (bool)isActive;
- (long long)numberOfActiveConnections;
- (void)prepare:(bool)arg1;
- (id)processData:(id)arg1;
- (void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2;
- (unsigned long long)requiredSensorDataTypes;
- (double)requiredTimeInterval;
- (id)resultDataClasses;
- (id)serverConnection;
- (void)serverConnectionInterrupted:(id)arg1;
- (void)serverConnectionInvalidated:(id)arg1;
- (id)serviceProxy;
- (void)setActive:(bool)arg1;
- (void)techniqueDidFailWithError:(id)arg1;
- (void)techniqueDidOutputResultData:(id)arg1 timestamp:(double)arg2 context:(id)arg3;

@end
