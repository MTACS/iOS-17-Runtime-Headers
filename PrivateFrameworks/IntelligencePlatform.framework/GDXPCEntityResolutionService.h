
@interface GDXPCEntityResolutionService : NSObject {
    NSXPCConnection * _connection;
    NSXPCInterface * _serverInterface;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)generateMentionsForQuery:(id)arg1 error:(id*)arg2;
- (id)init;
- (void)locked_establishConnection;
- (id)submitCollectionQuery:(id)arg1 withError:(id*)arg2;
- (id)submitQuery:(id)arg1 withError:(id*)arg2;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (bool)warmupForMode:(long long)arg1 error:(id*)arg2;

@end
