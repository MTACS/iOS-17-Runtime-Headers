
@interface IRSessionConnection : NSObject <IRXPCSessionServer> {
    IRSessionClientProxy * _client;
    long long  _mode;
    IRSessionServer * _server;
    <IRServiceHandling> * _serviceHandler;
    NSString * _serviceIdentifier;
}

@property (nonatomic, retain) IRSessionClientProxy *client;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long mode;
@property (nonatomic) IRSessionServer *server;
@property (nonatomic) <IRServiceHandling> *serviceHandler;
@property (nonatomic, retain) NSString *serviceIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addEvent:(id)arg1 forCandidateIdentifier:(id)arg2;
- (void)_createServiceWithParameters:(id)arg1 reply:(id /* block */)arg2;
- (void)_databaseExportwithReply:(id /* block */)arg1;
- (void)_deleteCandidate:(id)arg1;
- (void)_deleteDatabaseWithReply:(id /* block */)arg1;
- (void)_deleteService:(id)arg1;
- (void)_getServiceTokensWithReply:(id /* block */)arg1;
- (void)_invalidate;
- (void)_requestCurrentContext;
- (void)_runWithConfiguration:(id)arg1;
- (void)_updateCandidates:(id)arg1;
- (id)client;
- (void)didUpdateContexts:(id)arg1 withReason:(id)arg2;
- (id)initWithServer:(id)arg1 client:(id)arg2;
- (long long)mode;
- (id)server;
- (id)serviceHandler;
- (id)serviceIdentifier;
- (void)setClient:(id)arg1;
- (void)setMode:(long long)arg1;
- (void)setServer:(id)arg1;
- (void)setServiceHandler:(id)arg1;
- (void)setServiceIdentifier:(id)arg1;
- (void)xpcInterruptionHandler;
- (void)xpcInvalidationHandler;

@end
