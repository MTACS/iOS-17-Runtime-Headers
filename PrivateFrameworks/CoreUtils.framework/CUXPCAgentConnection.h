
@interface CUXPCAgentConnection : NSObject {
    CUXPCAgent * _agent;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSXPCConnection * _xpcCnx;
}

- (void).cxx_destruct;
- (void)connectionInvalidated;
- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)arg1;

@end
