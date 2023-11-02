
@interface IPXPCClient : NSObject <IPXPCServerInterface> {
    NSXPCConnection * _connection;
    <IPXPCClientDelegate> * _delegate;
    IPServerXPCTransport * _transport;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <IPXPCClientDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)actionBarrier:(id /* block */)arg1;
- (id)asyncProxy:(id /* block */)arg1;
- (id)delegate;
- (id)description;
- (void)getActiveInstallations:(id /* block */)arg1;
- (void)getAllInstallableStates:(id /* block */)arg1;
- (void)getProgressForIdentity:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithConnection:(id)arg1 serviceQueue:(id)arg2;
- (void)registerAsProgressObserver:(id /* block */)arg1;
- (void)resume;
- (void)sendProgressEndForIdentity:(id)arg1 reason:(unsigned long long)arg2;
- (void)sendUpdateForIdentity:(id)arg1 currentProgress:(id)arg2;
- (void)setDelegate:(id)arg1;

@end
