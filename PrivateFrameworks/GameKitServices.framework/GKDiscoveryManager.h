
@interface GKDiscoveryManager : NSObject {
    GKDiscoveryBonjour * _bonjour;
    NSString * _deviceID;
    NSMutableDictionary * _peers;
    NSObject<OS_dispatch_queue> * _peersQueue;
    id /* block */  _playerFoundHandler;
    NSString * _playerID;
    id /* block */  _playerLostHandler;
    id /* block */  _receiveDataHandler;
}

@property (nonatomic, retain) GKDiscoveryBonjour *bonjour;
@property (nonatomic, copy) NSString *deviceID;
@property (nonatomic, retain) NSMutableDictionary *peers;
@property (nonatomic, copy) id /* block */ playerFoundHandler;
@property (nonatomic, copy) NSString *playerID;
@property (nonatomic, copy) id /* block */ playerLostHandler;
@property (nonatomic, copy) id /* block */ receiveDataHandler;

+ (id)parseDeviceIDFromServiceName:(id)arg1;

- (void)addInterface:(unsigned int)arg1 withDiscoveryInfo:(id)arg2 forPeerWithServiceName:(id)arg3;
- (id)bonjour;
- (void)cleanUpPeersForBrowse;
- (void)connectToSockAddr:(struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg1 port:(unsigned short)arg2 forPeer:(id)arg3;
- (void)dealloc;
- (id)deviceID;
- (void)didLosePeer:(id)arg1;
- (void)forgetParticipant:(id)arg1 deviceID:(id)arg2;
- (id)generateDeviceID;
- (id)init;
- (id)initWithDomain:(id)arg1 type:(id)arg2;
- (id)localServiceName;
- (void)passDataToGKLayer:(id)arg1 fromPeer:(id)arg2;
- (id)peers;
- (id)peersList;
- (id /* block */)playerFoundHandler;
- (id)playerID;
- (id /* block */)playerLostHandler;
- (void)processEvent:(int)arg1 forPeer:(id)arg2 withUserInfo:(id)arg3;
- (id /* block */)receiveDataHandler;
- (void)removeInterface:(unsigned int)arg1 forPeerWithServiceName:(id)arg2;
- (void)resolveForPeer:(id)arg1;
- (void)sendDataToParticipant:(id)arg1 deviceID:(id)arg2 data:(id)arg3 withCompletionHandler:(id /* block */)arg4;
- (id)serviceNameforDeviceID:(id)arg1 playerID:(id)arg2;
- (void)setBonjour:(id)arg1;
- (void)setDeviceID:(id)arg1;
- (void)setPeers:(id)arg1;
- (void)setPlayerFoundHandler:(id /* block */)arg1;
- (void)setPlayerID:(id)arg1;
- (void)setPlayerLostHandler:(id /* block */)arg1;
- (void)setReceiveDataHandler:(id /* block */)arg1;
- (id)startAdvertisingLocalPlayer:(id)arg1 discoveryInfo:(id)arg2;
- (void)startBrowsingLocalPlayer:(id)arg1;
- (void)stopAdvertising;
- (void)stopBrowsing;

@end
