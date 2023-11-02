
@interface AppleMediaServicesUIDynamic.VideoView : UIView <AVPlayerViewControllerDelegate, UIGestureRecognizerDelegate> {
    void additionalControlInsets;
    void animatePreviewFrameTransitions;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  configuration;
    void currentTouch;
    void delegate;
    void fullScreenDelegate;
    void isFullScreen;
    void isTransitioningToFullscreen;
    void networkInquiry;
    void objectGraph;
    void playButton;
    void playbackId;
    void playerViewController;
    void preferredUnobscuredArea;
    void prefersMinimalPlaybackControls;
    void previewFrameArtwork;
    void prominentPlayButtonLocationOverride;
    void releaseAssetsAtNextPauseState;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  templateClickEvent;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  templateMediaEvent;
    void unmuteAfterVideoPlayerCreation;
    void video;
    void videoPlayer;
    void videoPlayerDelegate;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  videoUrl;
    void wasAudioOnPreFullScreen;
}

@property (nonatomic, readonly) bool accessibilityIsPlaying;
@property (nonatomic, readonly) _TtC27AppleMediaServicesUIDynamic10PlayButton *accessibilityPlayButton;
@property (nonatomic, readonly) AVPlayerViewController *accessibilityPlayerViewController;
@property (nonatomic, readonly) bool accessibilityShouldBePlaying;
@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;

- (void).cxx_destruct;
- (bool)accessibilityIsPlaying;
- (id)accessibilityPlayButton;
- (id)accessibilityPlayerViewController;
- (bool)accessibilityShouldBePlaying;
- (void)accessibilityUpdatePlayerControllerControls;
- (id)backgroundColor;
- (void)didChangeAutoPlayVideoSetting;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (void)handleMediaServicesReset;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)playerViewController:(id)arg1 willBeginFullScreenPresentationWithAnimationCoordinator:(id)arg2;
- (void)setBackgroundColor:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)updateAudioSessionCategoryWithIsAudioOn:(bool)arg1;

@end
