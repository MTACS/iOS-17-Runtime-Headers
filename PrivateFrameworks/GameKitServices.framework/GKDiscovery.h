
@interface GKDiscovery : NSObject {
    GKDiscoveryManager * _manager;
}

@property (nonatomic, retain) GKDiscoveryManager *manager;
@property (nonatomic, copy) id /* block */ playerFoundHandler;
@property (nonatomic, copy) id /* block */ playerLostHandler;
@property (nonatomic, copy) id /* block */ receiveDataHandler;

- (void)dealloc;
- (void)forgetParticipant:(id)arg1 deviceID:(id)arg2;
- (id)init;
- (id)initWithDomain:(id)arg1 type:(id)arg2;
- (id)manager;
- (id /* block */)playerFoundHandler;
- (id /* block */)playerLostHandler;
- (id /* block */)receiveDataHandler;
- (void)sendDataToParticipant:(id)arg1 deviceID:(id)arg2 data:(id)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)setManager:(id)arg1;
- (void)setPlayerFoundHandler:(id /* block */)arg1;
- (void)setPlayerLostHandler:(id /* block */)arg1;
- (void)setReceiveDataHandler:(id /* block */)arg1;
- (id)startAdvertisingLocalPlayer:(id)arg1 discoveryInfo:(id)arg2;
- (void)startBrowsingLocalPlayer:(id)arg1;
- (void)stopAdvertising;
- (void)stopBrowsing;

@end
