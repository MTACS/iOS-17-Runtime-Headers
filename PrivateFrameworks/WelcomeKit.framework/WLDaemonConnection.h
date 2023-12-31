
@interface WLDaemonConnection : NSObject {
    NSXPCConnection * _daemonConn;
    NSLock * _daemonLock;
    id /* block */  _interruptionHandler;
}

@property (nonatomic, copy) id /* block */ interruptionHandler;

- (void).cxx_destruct;
- (id)daemonConnection;
- (id)daemonWithErrorHandler:(id /* block */)arg1;
- (id)init;
- (id /* block */)interruptionHandler;
- (void)invalidateDaemonConnection;
- (void)setInterruptionHandler:(id /* block */)arg1;

@end
