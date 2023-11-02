
@interface LPStreamingVideoView : LPVisualMediaView {
    bool  _desiredPlayingState;
    float  _desiredVolume;
    bool  _hasCreatedVideoPlayerView;
    bool  _isWaitingToRetryAfterFailingToPlay;
    AVPlayerLooper * _looper;
    unsigned int  _playbackRetryCountWithoutSuccess;
    AVQueuePlayer * _player;
    AVPlayerLayer * _playerLayer;
    id /* block */  _readyForDisplayCallback;
}

@property (nonatomic, readonly) LPVideo *media;

- (void).cxx_destruct;
- (void)beginLoadingMediaForPreroll;
- (id)createFullScreenVideoViewController;
- (void)createPlayerIfNeeded;
- (void)createPlayerItemAdjustedForLoopingWithAsset:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)createVideoPlayerView;
- (void)dealloc;
- (void)destroyPlayer;
- (void)didFailToPlay;
- (void)fullScreenVideoDidPresent;
- (void)fullScreenVideoWillDismiss;
- (id)initWithHost:(id)arg1 video:(id)arg2 style:(id)arg3 posterFrame:(id)arg4 posterFrameStyle:(id)arg5 configuration:(id)arg6;
- (bool)isMuted;
- (void)layoutComponentView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)prepareForDisplayWithCompletionHandler:(id /* block */)arg1;
- (bool)releaseDecodingResourcesIfInactive;
- (void)resetToPlaceholderView;
- (void)setMuted:(bool)arg1;
- (void)setPlaying:(bool)arg1;
- (void)setVolume:(double)arg1;
- (bool)shouldAutoPlay;
- (bool)shouldShowMuteButton;
- (bool)usesCustomFullScreenImplementation;
- (bool)usesSharedAudioSession;
- (double)volume;

@end
