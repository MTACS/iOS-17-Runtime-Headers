
@interface MPAVEndpointRoutingDataSource : MPAVRoutingDataSource {
    id  _callbackToken;
    bool  _didReceiveDiscoveryResults;
    MRAVRoutingDiscoverySession * _discoverySession;
    NSMutableDictionary * _endpoints;
    NSString * _routingContextUID;
    NSObject<OS_dispatch_queue> * _serialQueue;
    bool  _suppressNotifications;
    unsigned int  _targetSessionID;
}

@property (nonatomic) bool didReceiveDiscoveryResults;
@property (nonatomic, readonly) MRAVRoutingDiscoverySessionConfiguration *discoverySessionConfiguration;
@property (nonatomic, retain) NSMutableDictionary *endpoints;
@property (nonatomic, copy) NSString *routingContextUID;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serialQueue;
@property (nonatomic) bool suppressNotifications;

- (void).cxx_destruct;
- (void)_clearDiscoverySessionCallback;
- (void)_endpointsDidChange:(id)arg1;
- (void)_setDiscoverySessionCallback;
- (void)dealloc;
- (bool)devicePresenceDetected;
- (bool)didReceiveDiscoveryResults;
- (long long)discoveryMode;
- (id)discoverySessionConfiguration;
- (id)endpoints;
- (id)getRoutesForCategory:(id)arg1;
- (id)init;
- (id)initWithThrottlingEnabled:(bool)arg1;
- (id)routingContextUID;
- (id)serialQueue;
- (void)setDidReceiveDiscoveryResults:(bool)arg1;
- (void)setDiscoveryMode:(long long)arg1;
- (void)setEndpoints:(id)arg1;
- (void)setPickedRoute:(id)arg1 withPassword:(id)arg2 completion:(id /* block */)arg3;
- (void)setRoutingContextUID:(id)arg1;
- (void)setSerialQueue:(id)arg1;
- (void)setSuppressNotifications:(bool)arg1;
- (void)setTargetSessionID:(unsigned int)arg1;
- (bool)suppressNotifications;
- (unsigned int)targetSessionID;

@end
