
@interface AKAuthorizationAppSignInDiscovery : NSObject {
    AKAuthorizationDaemonConnection * _daemonConnection;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)startDiscoveryWithCompletion:(id /* block */)arg1;

@end
