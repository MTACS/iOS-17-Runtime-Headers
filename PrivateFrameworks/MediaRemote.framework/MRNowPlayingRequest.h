
@interface MRNowPlayingRequest : NSObject {
    MRDestination * _destination;
}

@property (nonatomic, readonly, copy) MRDestination *destination;

+ (void)homePlatterPreferredRouteIdentifier:(id /* block */)arg1;
+ (bool)isMostRecentMediaPlaybackRelevant;
+ (id)isMostRecentMediaPlaybackRelevantReason;
+ (bool)localIsPlaying;
+ (id)localLastPlayingDate;
+ (id)localNowPlayingItem;
+ (id)localNowPlayingPlayerPath;
+ (id)localPlaybackQueue;
+ (unsigned int)localPlaybackState;
+ (id)localSupportedCommands;
+ (void)shouldUseQuickControlsToDisplayPlatterForRouteIdentifier:(id)arg1 completion:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)destination;
- (id)init;
- (id)initWithDestination:(id)arg1;
- (id)initWithOrigin:(id)arg1;
- (id)initWithPlayerPath:(id)arg1;
- (void)nowPlayingPlayerPathOnQueue:(id)arg1 completion:(id /* block */)arg2;
- (void)requestClientPropertiesOnQueue:(id)arg1 completion:(id /* block */)arg2;
- (void)requestDeviceLastPlayingDateOnQueue:(id)arg1 completion:(id /* block */)arg2;
- (void)requestIsPlayingOnQueue:(id)arg1 completion:(id /* block */)arg2;
- (void)requestLastPlayingDateOnQueue:(id)arg1 completion:(id /* block */)arg2;
- (void)requestNowPlayingInfoOnQueue:(id)arg1 completion:(id /* block */)arg2;
- (void)requestNowPlayingItemArtworkOnQueue:(id)arg1 completion:(id /* block */)arg2;
- (void)requestNowPlayingItemLanguageOptionsOnQueue:(id)arg1 completion:(id /* block */)arg2;
- (void)requestNowPlayingItemMetadataOnQueue:(id)arg1 completion:(id /* block */)arg2;
- (void)requestPlaybackRateOnQueue:(id)arg1 completion:(id /* block */)arg2;
- (void)requestPlaybackStateOnQueue:(id)arg1 completion:(id /* block */)arg2;
- (void)requestProxiableSupportedCommandsOnQueue:(id)arg1 completion:(id /* block */)arg2;
- (void)requestShuffleAndRepeatModeOnQueue:(id)arg1 completion:(id /* block */)arg2;
- (void)requestSupportedCommandsOnQueue:(id)arg1 completion:(id /* block */)arg2;
- (void)sendCommand:(unsigned int)arg1 options:(id)arg2 appOptions:(unsigned int)arg3 queue:(id)arg4 completion:(id /* block */)arg5;
- (void)sendCommand:(unsigned int)arg1 options:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
- (void)suspendDisconnectionPauseForConfiguration:(id)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (void)triggerAudioFadeInWithReplyQueue:(id)arg1 completion:(id /* block */)arg2;
- (void)triggerAudioFadeOutForNowPlayingApplicationWithReplyQueue:(id)arg1 completion:(id /* block */)arg2;

@end
