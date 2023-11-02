
@interface AFBridgeConnectionListener : NSObject <NSXPCListenerDelegate> {
    NSString * _bridgeName;
    id  _bridgeProxy;
    NSXPCConnection * _connection;
    <AFBridgeConnectionListenerDelegate> * _delegate;
    NSXPCInterface * _exportedInterface;
    NSXPCListener * _listener;
    NSString * _machServiceName;
    NSObject<OS_dispatch_queue> * _queue;
    NSXPCInterface * _remoteInterface;
}

@property (nonatomic, retain) NSString *bridgeName;
@property (readonly, copy) NSString *debugDescription;
@property <AFBridgeConnectionListenerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)bridgeName;
- (id)delegate;
- (id)initWithBridgeName:(id)arg1 machService:(id)arg2 withServiceInterface:(id)arg3 withDelegateInterface:(id)arg4;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)notifyClientWithBlock:(id /* block */)arg1;
- (void)resumeConnectionWithBridgeProxy:(id)arg1;
- (void)setBridgeName:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
