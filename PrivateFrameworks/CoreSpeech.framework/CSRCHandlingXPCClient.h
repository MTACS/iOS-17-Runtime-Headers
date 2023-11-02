
@interface CSRCHandlingXPCClient : NSObject {
    NSXPCConnection * _rcXPCConnection;
    id  _remoteObjectProxy;
    NSObject<OS_dispatch_queue> * _xpcConnectionQueue;
}

@property (nonatomic, retain) NSXPCConnection *rcXPCConnection;
@property (nonatomic, retain) id remoteObjectProxy;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *xpcConnectionQueue;

- (void).cxx_destruct;
- (void)_createClientConnection;
- (id)_getRemoteServiceProxyObject;
- (void)dealloc;
- (void)getMitigationDecisionForRCIdWithCompletion:(unsigned long long)arg1 requestId:(id)arg2 completion:(id /* block */)arg3;
- (id)init;
- (void)invalidate;
- (void)processRCWithId:(unsigned long long)arg1 requestId:(id)arg2 speechPackage:(id)arg3 taskId:(id)arg4 forceAccept:(bool)arg5 completionHandler:(id /* block */)arg6;
- (id)rcXPCConnection;
- (id)remoteObjectProxy;
- (void)setRcXPCConnection:(id)arg1;
- (void)setRemoteObjectProxy:(id)arg1;
- (void)setXpcConnectionQueue:(id)arg1;
- (id)xpcConnectionQueue;

@end
