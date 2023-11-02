
@interface GDXPCKnowledgeConstructionService : NSObject {
    NSXPCConnection * _connection;
    NSXPCInterface * _serverInterface;
}

- (void).cxx_destruct;
- (bool)checkInWithError:(id*)arg1;
- (void)dealloc;
- (id)init;
- (void)locked_establishConnection;
- (bool)runFullPipelineWithReason:(unsigned long long)arg1 error:(id*)arg2;
- (bool)stopPipelineWithError:(id*)arg1;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;

@end
