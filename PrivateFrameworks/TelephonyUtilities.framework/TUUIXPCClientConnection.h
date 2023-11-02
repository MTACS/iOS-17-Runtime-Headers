
@interface TUUIXPCClientConnection : NSObject <TUUIDataSource, TUUIXPCClient> {
    TUCallCenter * _callCenter;
    NSXPCConnection * _connection;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic) TUCallCenter *callCenter;
@property (nonatomic, retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)callCenter;
- (id)connection;
- (void)dealloc;
- (void)fetchInCallUIState:(id /* block */)arg1;
- (void)handleRedialCommandWhileScreening:(id)arg1;
- (id)host;
- (id)hostWithErrorHandler:(id /* block */)arg1;
- (id)initWithListenerEndpoint:(id)arg1 callCenter:(id)arg2;
- (void)ping;
- (id)queue;
- (void)setCallCenter:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)shouldHostHandleMRCommand:(unsigned int)arg1 completion:(id /* block */)arg2;
- (void)shouldHostHandleMRCommand:(unsigned int)arg1 sourceIdentifier:(id)arg2 completion:(id /* block */)arg3;

@end
