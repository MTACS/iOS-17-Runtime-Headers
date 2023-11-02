
@interface SKAStatusSubscriptionServiceClientConnection : NSObject {
    <SKAStatusSubscriptionServiceClientConnectionLifecycleDelegate> * _connectionLifecycleDelegate;
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic) <SKAStatusSubscriptionServiceClientConnectionLifecycleDelegate> *connectionLifecycleDelegate;
@property (readonly) int processIdentifier;
@property (nonatomic, retain) NSXPCConnection *xpcConnection;

+ (bool)_connection:(id)arg1 isEntitledForSubscriptionWithStatusTypeIdentifier:(id)arg2;
+ (bool)clientIsEntitledForAtLeastOneSubscriptionServiceType:(id)arg1;
+ (id)logger;

- (void).cxx_destruct;
- (id)asynchronousRemoteDaemonDelegateWithErrorHandler:(id /* block */)arg1;
- (bool)clientIsEntitledForAtLeastOneSubscriptionServiceType;
- (bool)clientIsEntitledForSubscriptionWithStatusTypeIdentifier:(id)arg1;
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
