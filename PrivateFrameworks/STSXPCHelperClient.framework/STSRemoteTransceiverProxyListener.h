
@interface STSRemoteTransceiverProxyListener : NSObject <NSXPCListenerDelegate, STSRemoteTransceiverProxyListenerProtocol> {
    NSObject<STSRemoteTransceiverProtocol> * _delegate;
    bool  _disableEntitlements;
    NSObject<OS_dispatch_queue> * _workQueue;
    NSMutableArray * _xpcConnections;
    NSXPCListener * _xpcListener;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (oneway void)transceive:(id)arg1 completion:(id /* block */)arg2;

@end
