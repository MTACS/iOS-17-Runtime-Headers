
@interface RMSTVRemoteCoreControlSession : NSObject <RMSControlSession, TVRCDeviceDelegate> {
    bool  _allowPairing;
    id /* block */  _connectionResponseBlock;
    <RMSControlSessionDelegate> * _delegate;
    TVRCDevice * _device;
    RMSService * _service;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <RMSControlSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) RMSService *service;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addToWishlist:(unsigned long long)arg1 databaseID:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)beginObservingNowPlaying;
- (void)connectToService:(id)arg1 pairingGUID:(id)arg2 allowPairing:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)dealloc;
- (id)delegate;
- (void)device:(id)arg1 disconnectedForReason:(long long)arg2 error:(id)arg3;
- (void)device:(id)arg1 encounteredAuthenticationChallenge:(id)arg2;
- (void)deviceConnected:(id)arg1;
- (bool)deviceShouldAllowConnectionAuthentication:(id)arg1;
- (void)endObservingNowPlaying;
- (void)logout;
- (void)pickAudioRoute:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)seekToPlaybackTime:(int)arg1 completionHandler:(id /* block */)arg2;
- (void)sendNavigationCommand:(long long)arg1;
- (void)sendPlaybackCommand:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)sendText:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)sendTouchEndWithDirection:(long long)arg1 repeatCount:(unsigned int)arg2;
- (void)sendTouchMoveWithDirection:(long long)arg1 repeatCount:(unsigned int)arg2;
- (id)service;
- (void)setDelegate:(id)arg1;
- (void)setLikedState:(long long)arg1 itemID:(unsigned long long)arg2 databaseID:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (void)setVolume:(float)arg1 completionHandler:(id /* block */)arg2;

@end
