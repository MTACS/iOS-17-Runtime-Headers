
@interface HMDRemoteDeviceInformation : HMFObject {
    NSHashTable * _clients;
    NSMutableArray * _confirmationHandlers;
    HMDDevice * _device;
    bool  _didUpdateReachabilityDueToNonNetworkStateChangeReason;
    bool  _didUpdateReachabilityWithInitialReachablityReason;
    <HMDRemoteDeviceMonitorFactory> * _factory;
    bool  _reachable;
    HMFTimer * _retryTimer;
    long long  _state;
    NSObject<OS_dispatch_queue> * _workQueue;
}

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)init;

@end
