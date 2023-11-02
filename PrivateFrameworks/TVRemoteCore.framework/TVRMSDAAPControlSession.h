
@interface TVRMSDAAPControlSession : NSObject <TVRMSDAAPControlSession, TVRMSDAAPNowPlayingManagerDelegate, TVRMSDAAPRequestManagerDelegate, TVRMSDAAPTouchRemoteManagerDelegate> {
    <TVRMSDAAPControlSessionDelegate> * _delegate;
    TVRMSDAAPLoginManager * _loginManager;
    TVRMSNowPlayingInfo * _nowPlayingInfo;
    TVRMSDAAPNowPlayingManager * _nowPlayingManager;
    TVRMSDAAPRequestManager * _requestManager;
    TVRMSService * _service;
    TVRMSDAAPTouchRemoteManager * _touchRemoteManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <TVRMSDAAPControlSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) TVRMSService *service;
@property (readonly) Class superclass;

+ (id)localControlSession;
+ (id)proxyControlSession;

- (void).cxx_destruct;
- (void)_initializeManagersWithControlInterface:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)_stringFromRMSPlaybackCommand:(long long)arg1;
- (void)addToWishlist:(unsigned long long)arg1 databaseID:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)beginObservingNowPlaying;
- (void)clearKeyboardText;
- (void)connectToService:(id)arg1 pairingGUID:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)dealloc;
- (id)delegate;
- (void)endObservingNowPlaying;
- (id)init;
- (void)logout;
- (void)nowPlayingManager:(id)arg1 artworkDataDidBecomeAvailable:(id)arg2 identifier:(id)arg3;
- (void)nowPlayingManager:(id)arg1 didUpdateAudioRoutes:(id)arg2;
- (void)nowPlayingManager:(id)arg1 didUpdateNowPlayingInfo:(id)arg2;
- (void)nowPlayingManager:(id)arg1 didUpdateVolume:(float)arg2;
- (void)pickAudioRoute:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)requestManagerFailedWithUnauthorizedError:(id)arg1;
- (void)requestManagerFailedWithUnknownError:(id)arg1;
- (void)seekToPlaybackTime:(int)arg1 completionHandler:(id /* block */)arg2;
- (void)sendKeyboardReturnCommand;
- (void)sendNavigationCommand:(long long)arg1;
- (void)sendPlaybackCommand:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)sendTouchEndWithDirection:(long long)arg1 repeatCount:(unsigned int)arg2;
- (void)sendTouchMoveWithDirection:(long long)arg1 repeatCount:(unsigned int)arg2;
- (id)service;
- (void)setDelegate:(id)arg1;
- (void)setKeyboardText:(id)arg1;
- (void)setLikedState:(long long)arg1 itemID:(unsigned long long)arg2 databaseID:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (void)setVolume:(float)arg1 completionHandler:(id /* block */)arg2;
- (void)touchRemoteManagerDidDisconnect:(id)arg1;
- (void)touchRemoteManagerKeyboardEditingSessionDidBegin:(id)arg1;
- (void)touchRemoteManagerKeyboardEditingSessionDidEnd:(id)arg1;
- (void)touchRemoteManagerKeyboardEditingSessionDidUpdate:(id)arg1;

@end
