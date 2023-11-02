
@protocol TVRMSDAAPControlSession <NSObject>

@required

- (void)addToWishlist:(void *)arg1 databaseID:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: unsigned long long, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)beginObservingNowPlaying;
- (void)clearKeyboardText;
- (void)connectToService:(void *)arg1 pairingGUID:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: TVRMSService *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, TVRMSControlInterface *, void*
- (<TVRMSDAAPControlSessionDelegate> *)delegate;
- (void)endObservingNowPlaying;
- (void)logout;
- (void)pickAudioRoute:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: TVRMSAudioRoute *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)seekToPlaybackTime:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)sendKeyboardReturnCommand;
- (void)sendNavigationCommand:(long long)arg1;
- (void)sendPlaybackCommand:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)sendTouchEndWithDirection:(long long)arg1 repeatCount:(unsigned int)arg2;
- (void)sendTouchMoveWithDirection:(long long)arg1 repeatCount:(unsigned int)arg2;
- (TVRMSService *)service;
- (void)setDelegate:(id <TVRMSDAAPControlSessionDelegate>)arg1;
- (void)setKeyboardText:(NSString *)arg1;
- (void)setLikedState:(void *)arg1 itemID:(void *)arg2 databaseID:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: long long, unsigned long long, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)setVolume:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: float, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*

@end
