
@interface GKNearbyDevice : NSObject {
    NSString * _deviceID;
    NSData * _devicePushToken;
    GKPlayer * _player;
    long long  _state;
    bool  _usePeerDiscovery;
}

@property (nonatomic, retain) NSString *deviceID;
@property (nonatomic, retain) NSData *devicePushToken;
@property (nonatomic, retain) GKPlayer *player;
@property (nonatomic) long long state;
@property (nonatomic) bool usePeerDiscovery;

+ (id)nearbyDeviceWithID:(id)arg1;

- (void).cxx_destruct;
- (id)deviceID;
- (id)devicePushToken;
- (id)player;
- (void)sendDictionary:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)setDeviceID:(id)arg1;
- (void)setDevicePushToken:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setUsePeerDiscovery:(bool)arg1;
- (long long)state;
- (bool)usePeerDiscovery;

@end
