
@interface ICMovieController : NSObject <AVPlayerViewControllerDelegate> {
    ICMovieAttachmentView * _activeMovieAttachmentView;
    bool  _isFullScreen;
    AVPlayerViewController * _moviePlayerController;
    bool  _playbackForPreview;
}

@property (nonatomic, retain) ICMovieAttachmentView *activeMovieAttachmentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isFullScreen;
@property (nonatomic, retain) AVPlayerViewController *moviePlayerController;
@property (nonatomic) bool playbackForPreview;
@property (readonly) Class superclass;

+ (bool)isFullScreen;
+ (void)pauseIfPlaying;
+ (id)sharedController;
+ (void)stopIfPlaying;

- (void).cxx_destruct;
- (id)activeMovieAttachmentView;
- (void)dealloc;
- (id)ic_viewControllerManager;
- (bool)isFullScreen;
- (id)moviePlayerController;
- (void)moviePlayerTapped;
- (void)pauseIfPlaying;
- (void)play;
- (bool)playbackForPreview;
- (void)playerViewController:(id)arg1 willBeginFullScreenPresentationWithAnimationCoordinator:(id)arg2;
- (void)playerViewController:(id)arg1 willEndFullScreenPresentationWithAnimationCoordinator:(id)arg2;
- (bool)prepareForPlayback;
- (void)setActiveMovieAttachmentView:(id)arg1;
- (void)setIsFullScreen:(bool)arg1;
- (void)setMoviePlayerController:(id)arg1;
- (void)setPlaybackForPreview:(bool)arg1;
- (void)stopIfPlaying;
- (void)updatePlayer;

@end
