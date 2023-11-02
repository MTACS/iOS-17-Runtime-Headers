
@interface TUUIXPCHostConnection : NSObject <TUUIXPCHost> {
    NSXPCConnection * _connection;
    <TUUIXPCHostConnectionDelegate> * _connectionDelegate;
    <TUUIXPCHostDelegate> * _hostDelegate;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic) <TUUIXPCHostConnectionDelegate> *connectionDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <TUUIXPCHostDelegate> *hostDelegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)connection;
- (id)connectionDelegate;
- (void)dealloc;
- (void)fetchInCallUIState:(id /* block */)arg1;
- (void)handleRedialCommandWhileScreening:(id)arg1;
- (id)hostDelegate;
- (id)init;
- (id)initWithConnection:(id)arg1 hostDelegate:(id)arg2 connectionDelegate:(id)arg3 queue:(id)arg4;
- (void)ping;
- (id)queue;
- (id)remoteObjectProxy;
- (void)setConnection:(id)arg1;
- (void)setConnectionDelegate:(id)arg1;
- (void)setHostDelegate:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)shouldHostHandleMRCommand:(unsigned int)arg1 completion:(id /* block */)arg2;
- (void)shouldHostHandleMRCommand:(unsigned int)arg1 sourceIdentifier:(id)arg2 completion:(id /* block */)arg3;

@end
