
@interface LSDatabaseBlockingFetchClient : NSObject <LSDatabaseBlockingFetchProtocol> {
    NSXPCConnection * _connection;
}

- (void).cxx_destruct;
- (void)getServerStoreBlockingWithCompletionHandler:(id /* block */)arg1;
- (id)initWithXPCConnection:(id)arg1;

@end
