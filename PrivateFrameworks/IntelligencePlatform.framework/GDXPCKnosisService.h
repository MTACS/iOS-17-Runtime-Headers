
@interface GDXPCKnosisService : NSObject {
    NSXPCConnection * _connection;
    NSXPCInterface * _serverInterface;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)executeIntent:(id)arg1 error:(id*)arg2;
- (id)executeKGQ:(id)arg1 error:(id*)arg2;
- (id)init;
- (bool)iteratingExecuteKGQ:(id)arg1 error:(id*)arg2 block:(id /* block */)arg3;
- (void)locked_establishConnection;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;

@end
