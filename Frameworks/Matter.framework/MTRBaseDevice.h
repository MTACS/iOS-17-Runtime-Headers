
@interface MTRBaseDevice : NSObject {
    MTRDeviceController * _deviceController;
    bool  _isPASEDevice;
    unsigned long long  _nodeID;
}

@property (nonatomic, readonly) MTRDeviceController *deviceController;
@property (nonatomic, readonly) bool isPASEDevice;
@property (nonatomic, readonly) unsigned long long nodeID;
@property (readonly) unsigned char sessionTransportType;

// Image: /System/Library/Frameworks/Matter.framework/Matter

+ (id)CHIPEncodeAndDecodeNSObject:(id)arg1;
+ (struct PacketBufferHandle { struct PacketBuffer {} *x1; })_responseDataForCommand:(id)arg1 clusterID:(unsigned int)arg2 commandID:(unsigned int)arg3 error:(id*)arg4;
+ (id)deviceWithNodeID:(id)arg1 controller:(id)arg2;
+ (id)eventReportForHeader:(const struct EventHeader { struct ConcreteEventPath { unsigned short x_1_1_1; bool x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; } x1; unsigned long long x2; unsigned char x3; struct Timestamp { unsigned char x_4_1_1; unsigned long long x_4_1_2; } x4; }*)arg1 andData:(id)arg2;

- (void).cxx_destruct;
- (void)_openCommissioningWindowWithSetupPasscode:(id)arg1 discriminator:(id)arg2 duration:(id)arg3 queue:(id)arg4 completion:(id /* block */)arg5;
- (void)deregisterReportHandlersWithClientQueue:(id)arg1 completion:(id /* block */)arg2;
- (void)deregisterReportHandlersWithQueue:(id)arg1 completion:(id /* block */)arg2;
- (id)deviceController;
- (id)initWithNodeID:(id)arg1 controller:(id)arg2;
- (id)initWithPASEDevice:(void*)arg1 controller:(id)arg2;
- (void)invalidateCASESession;
- (void)invokeCommandWithEndpointID:(id)arg1 clusterID:(id)arg2 commandID:(id)arg3 commandFields:(id)arg4 timedInvokeTimeout:(id)arg5 queue:(id)arg6 completion:(id /* block */)arg7;
- (void)invokeCommandWithEndpointId:(id)arg1 clusterId:(id)arg2 commandId:(id)arg3 commandFields:(id)arg4 timedInvokeTimeout:(id)arg5 clientQueue:(id)arg6 completion:(id /* block */)arg7;
- (bool)isPASEDevice;
- (unsigned long long)nodeID;
- (void)openCommissioningWindowWithDiscriminator:(id)arg1 duration:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
- (void)openCommissioningWindowWithSetupPasscode:(id)arg1 discriminator:(id)arg2 duration:(id)arg3 queue:(id)arg4 completion:(id /* block */)arg5;
- (void)readAttributePaths:(id)arg1 eventPaths:(id)arg2 params:(id)arg3 queue:(id)arg4 completion:(id /* block */)arg5;
- (void)readAttributeWithEndpointId:(id)arg1 clusterId:(id)arg2 attributeId:(id)arg3 params:(id)arg4 clientQueue:(id)arg5 completion:(id /* block */)arg6;
- (void)readAttributesWithEndpointID:(id)arg1 clusterID:(id)arg2 attributeID:(id)arg3 params:(id)arg4 queue:(id)arg5 completion:(id /* block */)arg6;
- (void)readEventsWithEndpointID:(id)arg1 clusterID:(id)arg2 eventID:(id)arg3 params:(id)arg4 queue:(id)arg5 completion:(id /* block */)arg6;
- (unsigned char)sessionTransportType;
- (void)subscribeAttributeWithEndpointId:(id)arg1 clusterId:(id)arg2 attributeId:(id)arg3 minInterval:(id)arg4 maxInterval:(id)arg5 params:(id)arg6 clientQueue:(id)arg7 reportHandler:(id /* block */)arg8 subscriptionEstablished:(id /* block */)arg9;
- (void)subscribeToAttributePaths:(id)arg1 eventPaths:(id)arg2 params:(id)arg3 queue:(id)arg4 reportHandler:(id /* block */)arg5 subscriptionEstablished:(id /* block */)arg6 resubscriptionScheduled:(id /* block */)arg7;
- (void)subscribeToAttributesWithEndpointID:(id)arg1 clusterID:(id)arg2 attributeID:(id)arg3 params:(id)arg4 queue:(id)arg5 reportHandler:(id /* block */)arg6 subscriptionEstablished:(id /* block */)arg7;
- (void)subscribeToEventsWithEndpointID:(id)arg1 clusterID:(id)arg2 eventID:(id)arg3 params:(id)arg4 queue:(id)arg5 reportHandler:(id /* block */)arg6 subscriptionEstablished:(id /* block */)arg7;
- (void)subscribeWithQueue:(id)arg1 minInterval:(unsigned short)arg2 maxInterval:(unsigned short)arg3 params:(id)arg4 cacheContainer:(id)arg5 attributeReportHandler:(id /* block */)arg6 eventReportHandler:(id /* block */)arg7 errorHandler:(id /* block */)arg8 subscriptionEstablished:(id /* block */)arg9 resubscriptionScheduled:(id /* block */)arg10;
- (void)subscribeWithQueue:(id)arg1 params:(id)arg2 clusterStateCacheContainer:(id)arg3 attributeReportHandler:(id /* block */)arg4 eventReportHandler:(id /* block */)arg5 errorHandler:(id /* block */)arg6 subscriptionEstablished:(id /* block */)arg7 resubscriptionScheduled:(id /* block */)arg8;
- (void)writeAttributeWithEndpointID:(id)arg1 clusterID:(id)arg2 attributeID:(id)arg3 value:(id)arg4 timedWriteTimeout:(id)arg5 queue:(id)arg6 completion:(id /* block */)arg7;
- (void)writeAttributeWithEndpointId:(id)arg1 clusterId:(id)arg2 attributeId:(id)arg3 value:(id)arg4 timedWriteTimeout:(id)arg5 clientQueue:(id)arg6 completion:(id /* block */)arg7;

// Image: /System/Library/PrivateFrameworks/HomeKitMatter.framework/HomeKitMatter

- (void)_fetchPairingsWithCallbackQueue:(id)arg1 filtered:(bool)arg2 vendorMetadataStore:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_removeFabricWithIndex:(id)arg1 callbackQueue:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)_retrieveFabricClusterWithQueue:(id)arg1;
- (id)_vendorNameForVendorID:(id)arg1 vendorMetadataStore:(id)arg2;
- (void)fetchCurrentFabricIndexWithCallbackQueue:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchCurrentPairingWithCallbackQueue:(id)arg1 vendorMetadataStore:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)fetchFabricDescriptorsWithCallbackQueue:(id)arg1 filtered:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)fetchPairingsWithCallbackQueue:(id)arg1 vendorMetadataStore:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)fetchSerialNumberWithCallbackQueue:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeAllPairingsForCallbackQueue:(id)arg1 vendorMetadataStore:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)removePairing:(id)arg1 callbackQueue:(id)arg2 vendorMetadataStore:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)unpairDevice:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateFabricLabel:(id)arg1 callbackQueue:(id)arg2 completionHandler:(id /* block */)arg3;

@end
