
@interface SafariSandboxBrokerConnection : WBSUISafariSandboxBrokerConnection {
    NSXPCConnection * _connection;
}

- (void).cxx_destruct;
- (void)_connectionWithCompletionHandler:(id /* block */)arg1;

@end
