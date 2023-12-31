
@interface CUMessageSessionXPCConnection : NSObject <CUMessageSessionXPCServerInterface> {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _invalidated;
    NSMutableSet * _registeredRequestIDs;
    CUMessageSessionServer * _server;
    NSXPCConnection * _xpcCnx;
}

- (void).cxx_destruct;
- (void)connectionInvalidated;
- (void)remoteRegisterRequestID:(id)arg1 options:(id)arg2;
- (void)remoteSendRequestID:(id)arg1 options:(id)arg2 request:(id)arg3 responseHandler:(id /* block */)arg4;

@end
