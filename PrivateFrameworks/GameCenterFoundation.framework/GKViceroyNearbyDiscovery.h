
@interface GKViceroyNearbyDiscovery : NSObject {
    GKDiscovery * _discovery;
}

@property (nonatomic, retain) GKDiscovery *discovery;

- (void).cxx_destruct;
- (id)discovery;
- (void)forgetParticipant:(id)arg1 deviceID:(id)arg2;
- (id)init;
- (oneway void)sendDataToParticipant:(id)arg1 deviceID:(id)arg2 data:(id)arg3 handler:(id /* block */)arg4;
- (void)setDiscovery:(id)arg1;
- (void)setupWithPlayerFoundHandler:(id /* block */)arg1 playerLostHandler:(id /* block */)arg2 receiveDataHandler:(id /* block */)arg3;
- (id)startAdvertisingWithDiscoveryInfo:(id)arg1;
- (void)startBrowsingWithPlayerID:(id)arg1;
- (void)stopAdvertising;
- (void)stopBrowsing;

@end
