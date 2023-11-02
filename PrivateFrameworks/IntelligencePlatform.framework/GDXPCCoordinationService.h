
@interface GDXPCCoordinationService : NSObject {
    NSXPCConnection * _connection;
    NSXPCInterface * _serverInterface;
}

- (void).cxx_destruct;
- (void)dealloc;
- (bool)graphUpdatedWithSource:(id)arg1 error:(id*)arg2;
- (id)init;
- (void)locked_establishConnection;
- (bool)sourceUpdatedWithSourceType:(id)arg1 sourceIdentifier:(id)arg2 error:(id*)arg3;
- (bool)streamUpdatedWithStreamName:(id)arg1 isDelete:(bool)arg2 error:(id*)arg3;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;

@end
