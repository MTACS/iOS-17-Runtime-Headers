
@interface MTRDeviceOverXPC : MTRBaseDevice {
    MTRDeviceControllerOverXPC * _controller;
    <NSCopying> * _controllerID;
    NSNumber * _nodeID;
    MTRDeviceControllerXPCConnection * _xpcConnection;
}

@property (nonatomic, readonly) MTRDeviceControllerOverXPC *controller;
@property (nonatomic, readonly) <NSCopying> *controllerID;
@property (nonatomic, readonly) NSNumber *nodeID;
@property (nonatomic, readonly) MTRDeviceControllerXPCConnection *xpcConnection;

- (void).cxx_destruct;
- (id)controller;
- (id)controllerID;
- (void)deregisterReportHandlersWithQueue:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchProxyHandleWithQueue:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithControllerOverXPC:(id)arg1 deviceID:(id)arg2 xpcConnection:(id)arg3;
- (void)invokeCommandWithEndpointID:(id)arg1 clusterID:(id)arg2 commandID:(id)arg3 commandFields:(id)arg4 timedInvokeTimeout:(id)arg5 queue:(id)arg6 completion:(id /* block */)arg7;
- (id)nodeID;
- (void)openCommissioningWindowWithDiscriminator:(id)arg1 duration:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
- (void)openCommissioningWindowWithSetupPasscode:(id)arg1 discriminator:(id)arg2 duration:(id)arg3 queue:(id)arg4 completion:(id /* block */)arg5;
- (void)readAttributesWithEndpointID:(id)arg1 clusterID:(id)arg2 attributeID:(id)arg3 params:(id)arg4 queue:(id)arg5 completion:(id /* block */)arg6;
- (void)subscribeToAttributesWithEndpointID:(id)arg1 clusterID:(id)arg2 attributeID:(id)arg3 params:(id)arg4 queue:(id)arg5 reportHandler:(id /* block */)arg6 subscriptionEstablished:(id /* block */)arg7;
- (void)subscribeWithQueue:(id)arg1 params:(id)arg2 clusterStateCacheContainer:(id)arg3 attributeReportHandler:(id /* block */)arg4 eventReportHandler:(id /* block */)arg5 errorHandler:(id /* block */)arg6 subscriptionEstablished:(id /* block */)arg7 resubscriptionScheduled:(id /* block */)arg8;
- (void)writeAttributeWithEndpointID:(id)arg1 clusterID:(id)arg2 attributeID:(id)arg3 value:(id)arg4 timedWriteTimeout:(id)arg5 queue:(id)arg6 completion:(id /* block */)arg7;
- (id)xpcConnection;

@end
