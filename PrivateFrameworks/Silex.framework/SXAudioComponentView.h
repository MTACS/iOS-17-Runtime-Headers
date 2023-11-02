
@interface SXAudioComponentView : SXMediaComponentView <AVPlayerViewControllerDelegate_AppStoreOnly, SXMediaPlaybackDelegate> {
    bool  _audioHasPlayed;
    id /* block */  _cancelHandler;
    <SXHost> * _host;
    SXAudioComponentOverlayView * _overlayView;
    SVAVPlayer * _player;
    AVPlayerViewController * _playerViewController;
    <SXResourceDataSource> * _resourceDataSource;
    bool  _startPlaybackWhenReady;
}

@property (nonatomic) bool audioHasPlayed;
@property (nonatomic, copy) id /* block */ cancelHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SXHost> *host;
@property (nonatomic, readonly) SXAudioComponentOverlayView *overlayView;
@property (nonatomic, retain) SVAVPlayer *player;
@property (nonatomic, retain) AVPlayerViewController *playerViewController;
@property (nonatomic, readonly) <SXResourceDataSource> *resourceDataSource;
@property (nonatomic) bool startPlaybackWhenReady;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)allowHierarchyRemoval;
- (unsigned long long)analyticsMediaType;
- (bool)audioHasPlayed;
- (id /* block */)cancelHandler;
- (void)discardContents;
- (void)hidePlaybackControls;
- (id)host;
- (id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4 analyticsReporting:(id)arg5 appStateMonitor:(id)arg6 resourceDataSource:(id)arg7 host:(id)arg8;
- (void)layoutViews;
- (void)loadAudio;
- (void)loadImage;
- (id)overlayView;
- (void)pauseMediaPlayback;
- (void)pauseMediaPlaybackForDisappearance;
- (void)playButtonTapped:(id)arg1;
- (void)playbackFinished;
- (void)playbackPaused;
- (void)playbackResumed;
- (void)playbackStarted;
- (id)player;
- (id)playerViewController;
- (void)playerViewController:(id)arg1 metricsCollectionEventOccured:(long long)arg2;
- (void)presentComponentWithChanges:(struct { bool x1; bool x2; bool x3; })arg1;
- (void)renderContents;
- (id)resourceDataSource;
- (void)setAudioHasPlayed:(bool)arg1;
- (void)setCancelHandler:(id /* block */)arg1;
- (void)setPlayer:(id)arg1;
- (void)setPlayerViewController:(id)arg1;
- (void)setStartPlaybackWhenReady:(bool)arg1;
- (void)setupPlayerViewControllerWithPlayer:(id)arg1;
- (bool)shouldAutoStartPlayback;
- (void)showPlaybackControls;
- (bool)startPlaybackWhenReady;
- (void)submitMediaEngageCompleteEvent;
- (void)submitMediaEngageEventForUserAction:(unsigned long long)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2;

@end
