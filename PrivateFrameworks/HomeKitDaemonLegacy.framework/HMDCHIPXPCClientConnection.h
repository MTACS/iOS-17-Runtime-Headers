
@interface HMDCHIPXPCClientConnection : HMFObject <HMFLogging> {
    HMDHomeManager * _homeManager;
    int  _pid;
    <MTRDeviceControllerClientProtocol> * _remoteObjectProxy;
    NSMutableSet * _subscribedHomeUUIDs;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMDHomeManager *homeManager;
@property (nonatomic, readonly) int pid;
@property (nonatomic, readonly) <MTRDeviceControllerClientProtocol> *remoteObjectProxy;
@property (nonatomic, readonly) NSMutableSet *subscribedHomeUUIDs;
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_getDeviceControllerWithFabricId:(unsigned long long)arg1 accessories:(id)arg2 home:(id)arg3 remainingHomes:(id)arg4 completion:(id /* block */)arg5;
- (void)_registerReportHandlerWithHomeWithUUID:(id)arg1;
- (void)_sendRemoteMessageUsingHomeUUID:(id)arg1 nodeId:(unsigned long long)arg2 payload:(id)arg3 completion:(id /* block */)arg4;
- (void)deregisterReportHandlers;
- (void)getAnyDeviceControllerWithCompletion:(id /* block */)arg1;
- (void)getDeviceControllerWithFabricId:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (id)homeManager;
- (id)initWithRemoteObjectProxy:(id)arg1 homeManager:(id)arg2 pid:(int)arg3 workQueue:(id)arg4;
- (void)invokeCommandWithController:(id)arg1 nodeId:(unsigned long long)arg2 endpointId:(id)arg3 clusterId:(id)arg4 commandId:(id)arg5 fields:(id)arg6 timedInvokeTimeout:(id)arg7 completion:(id /* block */)arg8;
- (id)logIdentifier;
- (int)pid;
- (void)readAttributeCacheWithController:(id)arg1 nodeId:(unsigned long long)arg2 endpointId:(id)arg3 clusterId:(id)arg4 attributeId:(id)arg5 completion:(id /* block */)arg6;
- (void)readAttributeWithController:(id)arg1 nodeId:(unsigned long long)arg2 endpointId:(id)arg3 clusterId:(id)arg4 attributeId:(id)arg5 params:(id)arg6 completion:(id /* block */)arg7;
- (id)remoteObjectProxy;
- (void)stopReportsWithController:(id)arg1 nodeId:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)subscribeAttributeWithController:(id)arg1 nodeId:(unsigned long long)arg2 endpointId:(id)arg3 clusterId:(id)arg4 attributeId:(id)arg5 minInterval:(id)arg6 maxInterval:(id)arg7 params:(id)arg8 establishedHandler:(id /* block */)arg9;
- (void)subscribeWithController:(id)arg1 nodeId:(unsigned long long)arg2 minInterval:(id)arg3 maxInterval:(id)arg4 params:(id)arg5 shouldCache:(bool)arg6 completion:(id /* block */)arg7;
- (id)subscribedHomeUUIDs;
- (id)workQueue;
- (void)writeAttributeWithController:(id)arg1 nodeId:(unsigned long long)arg2 endpointId:(id)arg3 clusterId:(id)arg4 attributeId:(id)arg5 value:(id)arg6 timedWriteTimeout:(id)arg7 completion:(id /* block */)arg8;

@end
