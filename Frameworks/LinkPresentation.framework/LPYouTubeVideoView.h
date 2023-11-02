
@interface LPYouTubeVideoView : LPVisualMediaView <LPYouTubePlayerDelegate> {
    bool  _allowingInteractionUntilPlaybackResumes;
    LPYouTubePlayerView * _platformYouTubeView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) LPVideo *media;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)createVideoPlayerView;
- (void)enterCustomFullScreen;
- (id)initWithHost:(id)arg1 video:(id)arg2 style:(id)arg3 posterFrame:(id)arg4 posterFrameStyle:(id)arg5 configuration:(id)arg6;
- (bool)isMuted;
- (void)setAllowsUserInteractionWithVideoPlayer:(bool)arg1;
- (void)setMuted:(bool)arg1;
- (void)setPlaying:(bool)arg1;
- (void)setVolume:(double)arg1;
- (bool)shouldShowMuteButton;
- (bool)usesCustomFullScreenImplementation;
- (bool)usesSharedAudioSession;
- (double)volume;
- (void)youTubePlayer:(id)arg1 didChangeToFullScreen:(bool)arg2;
- (void)youTubePlayer:(id)arg1 didChangeToState:(long long)arg2;
- (void)youTubePlayer:(id)arg1 didReceiveError:(id)arg2;

@end
