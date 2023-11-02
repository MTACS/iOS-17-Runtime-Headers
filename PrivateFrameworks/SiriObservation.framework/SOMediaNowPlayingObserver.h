
@interface SOMediaNowPlayingObserver : NSObject <MRNowPlayingControllerDelegate> {
    AFInstanceContext * _instanceContext;
    bool  _isObserving;
    bool  _isProxyGroupPlayer;
    NSDate * _lastPlayingDate;
    NSHashTable * _listeners;
    MRNowPlayingController * _nowPlayingController;
    long long  _playbackState;
    NSObject<OS_dispatch_group> * _playbackStateGroup;
    long long  _playbackStateGroupDepth;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long playbackState;
@property (readonly) Class superclass;

+ (id)defaultObserver;

- (void).cxx_destruct;
- (void)_beginGroup;
- (void)_endGroup;
- (void)_fetchLastPlayingDateWithCompletion:(id /* block */)arg1;
- (void)_fetchNowPlayingAppPlaybackStateForReason:(id)arg1 completion:(id /* block */)arg2;
- (void)_handleGroupIdentifierUpdatesFromMediaRemoteActiveDeviceInfo:(id)arg1;
- (void)_handleLastPlayingDateChangedTo:(id)arg1;
- (void)_handleNowPlayingApplicationPlaybackStateChange:(long long)arg1;
- (bool)_isProxyGroupPlayer;
- (void)_startObservingNowPlayingAppPlaybackState;
- (void)_stopObservingNowPlayingAppPlaybackState;
- (bool)_supportsProxyGroupPlayer;
- (void)_updateProxyGroupPlayerState;
- (void)addListener:(id)arg1;
- (void)controller:(id)arg1 didFailWithError:(id)arg2;
- (void)controller:(id)arg1 didLoadResponse:(id)arg2;
- (void)controller:(id)arg1 playbackQueueDidChangeFrom:(id)arg2 to:(id)arg3;
- (void)controller:(id)arg1 playbackStateDidChangeFrom:(unsigned int)arg2 to:(unsigned int)arg3;
- (void)controllerWillReloadForInvalidation:(id)arg1;
- (void)dealloc;
- (void)getNowPlayingApplicationBundleIdentifier:(id /* block */)arg1;
- (void)getNowPlayingInfoForCurrentItemWithCompletion:(id /* block */)arg1;
- (void)getPlaybackStateAndLastPlayingDateWithCompletion:(id /* block */)arg1;
- (void)getPlaybackStateWithCompletion:(id /* block */)arg1;
- (void)getProxyGroupPlayerStateWithCompletion:(id /* block */)arg1;
- (id)initWithQueue:(id)arg1;
- (id)initWithQueue:(id)arg1 instanceContext:(id)arg2;
- (void)mediaRemoteActiveDeviceInfoDidChange:(id)arg1;
- (void)mediaRemoteNowPlayingApplicationPlaybackStateDidChange:(id)arg1;
- (void)mediaRemoteNowPlayingInfoDidChange:(id)arg1;
- (long long)playbackState;
- (void)removeListener:(id)arg1;

@end
