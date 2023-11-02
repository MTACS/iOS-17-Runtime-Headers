
@interface HMDMRSetEndpointVolumeOperationDefaultExternalObjectInterface : HMFObject <HMDMRSetEndpointVolumeOperationExternalObjectInterface>

- (id)copyMRAVEndpointOutputDevices:(id)arg1;
- (id)createAssistantConnection;
- (id)createAssistantDiscovery;
- (id)getMRAVEndpointOutputDeviceUIDVolumeControlCapabilitiesForEndpoint:(id)arg1 outputDeviceUID:(id)arg2 queue:(id)arg3;
- (id)setMRAVOutputDeviceVolume:(float)arg1 endpoint:(id)arg2 outputDeviceUID:(id)arg3 queue:(id)arg4;

@end
