
@interface FLDaemon : NSObject {
    NSXPCConnection * _conn;
    NSLock * _connLock;
    NSXPCListenerEndpoint * _daemonXPCEndpoint;
}

@property (nonatomic, retain) NSXPCListenerEndpoint *daemonXPCEndpoint;

+ (id)daemonWithErrorHandler:(id /* block */)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)connection;
- (id)daemonWithErrorHandler:(id /* block */)arg1;
- (id)daemonXPCEndpoint;
- (void)dealloc;
- (id)init;
- (void)invalidateConnection;
- (id)remoteObjectInterface;
- (void)setDaemonXPCEndpoint:(id)arg1;
- (id)synchronousDaemonWithErrorHandler:(id /* block */)arg1;

@end
