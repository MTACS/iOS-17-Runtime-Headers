
@protocol HMDMRSetEndpointVolumeOperationExternalObjectInterface

@required

- (NSArray *)copyMRAVEndpointOutputDevices:(HMDMRAVEndpoint *)arg1;
- (<HMDMPCAssistantConnection> *)createAssistantConnection;
- (<HMDMPCAssistantDiscovery> *)createAssistantDiscovery;
- (NAFuture *)getMRAVEndpointOutputDeviceUIDVolumeControlCapabilitiesForEndpoint:(HMDMRAVEndpoint *)arg1 outputDeviceUID:(NSString *)arg2 queue:(NSObject<OS_dispatch_queue> *)arg3;
- (NAFuture *)setMRAVOutputDeviceVolume:(float)arg1 endpoint:(HMDMRAVEndpoint *)arg2 outputDeviceUID:(NSString *)arg3 queue:(NSObject<OS_dispatch_queue> *)arg4;

@end
