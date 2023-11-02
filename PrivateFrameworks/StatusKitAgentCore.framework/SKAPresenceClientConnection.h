
@interface SKAPresenceClientConnection : NSObject {
    <SKAPresenceClientConnectionLifecycleDelegate> * _connectionLifecycleDelegate;
    NSXPCConnection * _xpcConnection;
}

@property (readonly) NSString *clientID;
@property (nonatomic) <SKAPresenceClientConnectionLifecycleDelegate> *connectionLifecycleDelegate;
@property (readonly) int processIdentifier;
@property (nonatomic, retain) NSXPCConnection *xpcConnection;

+ (id)_clientIDForConnection:(id)arg1;
+ (id)logger;

- (void).cxx_destruct;
- (id)asynchronousRemoteDaemonDelegateWithErrorHandler:(id /* block */)arg1;
- (id)clientID;
- (id)connectionLifecycleDelegate;
- (void)dealloc;
- (id)description;
- (id)initWithXPCConnection:(id)arg1 queue:(id)arg2 daemonProtocolDelegate:(id)arg3 connectionLifecycleDelegate:(id)arg4;
- (int)processIdentifier;
- (void)setConnectionLifecycleDelegate:(id)arg1;
- (void)setXpcConnection:(id)arg1;
- (id)synchronousRemoteDaemonDelegateWithErrorHandler:(id /* block */)arg1;
- (id)xpcConnection;

@end
