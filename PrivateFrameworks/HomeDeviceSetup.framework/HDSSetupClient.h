
@interface HDSSetupClient : NSObject {
    NSXPCConnection * _connection;
    <SetupEngineDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic) <SetupEngineDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;

- (void).cxx_destruct;
- (void)_activateWithCompletion:(id /* block */)arg1;
- (void)activateWithCompletion:(id /* block */)arg1;
- (id)connection;
- (id)delegate;
- (id)dispatchQueue;
- (id)init;
- (void)invalidate;
- (void)setConnection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)startAdvertisingWithCompletion:(id /* block */)arg1;

@end
