
@interface CDPDaemonConnection : NSObject {
    NSXPCConnection * _conn;
    NSLock * _connLock;
    NSXPCListenerEndpoint * _daemonXPCEndpoint;
}

@property (nonatomic, retain) NSXPCListenerEndpoint *daemonXPCEndpoint;

- (void).cxx_destruct;
- (id)connection;
- (id)daemon;
- (id)daemonWithErrorHandler:(id /* block */)arg1;
- (id)daemonXPCEndpoint;
- (void)dealloc;
- (id)init;
- (void)setDaemonXPCEndpoint:(id)arg1;
- (id)synchronousDaemonWithErrorHandler:(id /* block */)arg1;

@end
