
@interface WBSSafariSandboxBrokerConnection : NSObject <WBSSafariSandboxBrokerProtocol> {
    NSXPCConnection * _connection;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (void)_connectionWithCompletionHandler:(id /* block */)arg1;
- (void)ensureConnected:(id /* block */)arg1;

@end
