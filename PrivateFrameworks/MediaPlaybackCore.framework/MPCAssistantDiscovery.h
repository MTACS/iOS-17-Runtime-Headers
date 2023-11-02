
@interface MPCAssistantDiscovery : NSObject <HMDMPCAssistantDiscovery> {
    void * _reconSession;
    bool  _waitForCompleteClusters;
}

@property (nonatomic) bool waitForCompleteClusters;

- (void)_discoverAirplayDevices:(id /* block */)arg1;
- (void)dealloc;
- (void)discoverAirplayDevicesMatchingGroupID:(id)arg1 completion:(id /* block */)arg2;
- (void)discoverAirplayDevicesMatchingLogicalDeviceIDs:(id)arg1 expectedCount:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)discoverAirplayDevicesMatchingUIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)discoverRemoteControlEndpointsMatchingUIDs:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)setWaitForCompleteClusters:(bool)arg1;
- (void)stopDiscovery;
- (bool)waitForCompleteClusters;

@end
