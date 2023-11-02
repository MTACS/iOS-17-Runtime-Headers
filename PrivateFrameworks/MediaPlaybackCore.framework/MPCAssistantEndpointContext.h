
@interface MPCAssistantEndpointContext : MPCAssistantContext {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    MPCAssistantDiscovery * _discoveryAudio;
    MPCAssistantDiscovery * _discoveryEndpoint;
    MPCAssistantDiscovery * _discoveryLogical;
}

- (void).cxx_destruct;
- (void)_discoverLocalEndpointFromClusterUsingDeviceInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)_discoverLocalEndpointFromDeviceInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)_discoverLocalEndpointFromHomeTheaterUsingDeviceInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)_discoverLocalEndpointFromMultiplayerUsingDeviceInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)_modifyOutputDevices:(id)arg1 onEndpoint:(id)arg2 completion:(id /* block */)arg3;
- (void)_updateDiscoverableDeviceList:(id)arg1 deviceInfo:(id)arg2 completion:(id /* block */)arg3;
- (id)init;
- (void)modifySystemMusicContextForDestination:(id)arg1 completion:(id /* block */)arg2;
- (void)modifySystemMusicContextForEndpointDestination:(id)arg1 completion:(id /* block */)arg2;
- (void)modifySystemMusicContextForEndpointDestination:(id)arg1 discoveryHandler:(id /* block */)arg2 completion:(id /* block */)arg3;
- (bool)shouldSearchForLogicalDevices;

@end
