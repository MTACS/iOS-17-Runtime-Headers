
@interface GDXPCLighthouseService : NSObject {
    NSXPCConnection * _connection;
    NSXPCInterface * _serverInterface;
}

- (void).cxx_destruct;
- (id)collectDBStats:(id*)arg1;
- (id)collectDBStatus:(id*)arg1;
- (void)dealloc;
- (id)init;
- (void)locked_establishConnection;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;

@end
