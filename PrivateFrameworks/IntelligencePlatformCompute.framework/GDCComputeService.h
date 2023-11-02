
@interface GDCComputeService : NSObject {
    NSXPCConnection * _connection;
    NSXPCInterface * _serverInterface;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)locked_establishConnection;
- (bool)stopWithError:(id*)arg1;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)updateGroupWithName:(id)arg1 namesAndRequests:(id)arg2 error:(id*)arg3;
- (id)updateViewWithName:(id)arg1 viewUpdateSourceRequests:(id)arg2 error:(id*)arg3;

@end
