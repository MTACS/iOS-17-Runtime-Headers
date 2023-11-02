
@interface MTRDeviceControllerXPCConnection : NSObject {
    id /* block */  _connectBlock;
    MTRDeviceControllerXPCProxyHandle * _proxyHandle;
    MTRDeviceControllerXPCProxyHandle * _proxyRetainerForReports;
    NSXPCInterface * _remoteDeviceClientProtocol;
    NSXPCInterface * _remoteDeviceServerProtocol;
    NSMutableDictionary * _reportRegistry;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) id /* block */ connectBlock;
@property (nonatomic) MTRDeviceControllerXPCProxyHandle *proxyHandle;
@property (nonatomic, retain) MTRDeviceControllerXPCProxyHandle *proxyRetainerForReports;
@property (nonatomic, readonly) NSXPCInterface *remoteDeviceClientProtocol;
@property (nonatomic, readonly) NSXPCInterface *remoteDeviceServerProtocol;
@property (nonatomic, readonly) NSMutableDictionary *reportRegistry;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)connectionWithWorkQueue:(id)arg1 connectBlock:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)callSubscriptionEstablishedHandler:(id /* block */)arg1;
- (id /* block */)connectBlock;
- (void)deregisterReportHandlersWithController:(id)arg1 nodeID:(id)arg2 completion:(id /* block */)arg3;
- (void)getProxyHandleWithCompletion:(id /* block */)arg1;
- (void)handleReportWithController:(id)arg1 nodeId:(unsigned long long)arg2 values:(id)arg3 error:(id)arg4;
- (id)initWithWorkQueue:(id)arg1 connectBlock:(id /* block */)arg2;
- (id)proxyHandle;
- (id)proxyRetainerForReports;
- (void)registerReportHandlerWithController:(id)arg1 nodeID:(id)arg2 handler:(id /* block */)arg3;
- (id)remoteDeviceClientProtocol;
- (id)remoteDeviceServerProtocol;
- (id)reportRegistry;
- (void)setProxyHandle:(id)arg1;
- (void)setProxyRetainerForReports:(id)arg1;
- (id)workQueue;

@end
