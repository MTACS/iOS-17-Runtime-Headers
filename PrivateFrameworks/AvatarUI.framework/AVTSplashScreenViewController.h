
@interface AVTSplashScreenViewController : OBWelcomeFullCenterContentController {
    AVTSplashScreenConfiguration * _configuration;
    OBBoldTrayButton * _continueButton;
    <AVTSplashScreenViewControllerDelegate> * _delegate;
    bool  _isPlayingVideos;
    AVPlayerLooper * _playerLooper;
    AVPlayerViewController * _playerViewController;
    AVQueuePlayer * _queuePlayer;
    AVPlayerLooper * _secondaryPlayerLooper;
    AVPlayerViewController * _secondaryPlayerViewController;
    AVQueuePlayer * _secondaryQueuePlayer;
    NSLayoutConstraint * _videoContentHeightConstraint;
    UIView * _videoContentView;
    NSLayoutConstraint * _videoContentWidthConstraint;
}

@property (nonatomic, retain) AVTSplashScreenConfiguration *configuration;
@property (nonatomic, retain) OBBoldTrayButton *continueButton;
@property (nonatomic) <AVTSplashScreenViewControllerDelegate> *delegate;
@property (nonatomic) bool isPlayingVideos;
@property (nonatomic, retain) AVPlayerLooper *playerLooper;
@property (nonatomic, retain) AVPlayerViewController *playerViewController;
@property (nonatomic, readonly) AVPlayerViewController *primaryVideoController;
@property (nonatomic, readonly) AVPlayerLooper *primaryVideoLooper;
@property (nonatomic, retain) AVQueuePlayer *queuePlayer;
@property (nonatomic, retain) AVPlayerLooper *secondaryPlayerLooper;
@property (nonatomic, retain) AVPlayerViewController *secondaryPlayerViewController;
@property (nonatomic, retain) AVQueuePlayer *secondaryQueuePlayer;
@property (nonatomic, retain) NSLayoutConstraint *videoContentHeightConstraint;
@property (nonatomic, retain) UIView *videoContentView;
@property (nonatomic, retain) NSLayoutConstraint *videoContentWidthConstraint;

- (void).cxx_destruct;
- (id)configuration;
- (id)continueButton;
- (id)delegate;
- (double)desiredHeightForVideoContent;
- (void)detachVideoControllerAndLooper;
- (void)didTapContinueButton:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithConfiguration:(id)arg1 styleProvider:(id)arg2;
- (id)initWithDefaultConfiguration;
- (bool)isPlayingVideos;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)playerLooper;
- (id)playerViewController;
- (id)primaryVideoController;
- (id)primaryVideoLooper;
- (id)queuePlayer;
- (id)secondaryPlayerLooper;
- (id)secondaryPlayerViewController;
- (id)secondaryQueuePlayer;
- (void)setConfiguration:(id)arg1;
- (void)setContinueButton:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsPlayingVideos:(bool)arg1;
- (void)setPlayerLooper:(id)arg1;
- (void)setPlayerViewController:(id)arg1;
- (void)setQueuePlayer:(id)arg1;
- (void)setSecondaryPlayerLooper:(id)arg1;
- (void)setSecondaryPlayerViewController:(id)arg1;
- (void)setSecondaryQueuePlayer:(id)arg1;
- (void)setVideoContentHeightConstraint:(id)arg1;
- (void)setVideoContentView:(id)arg1;
- (void)setVideoContentWidthConstraint:(id)arg1;
- (void)startPlayingVideos;
- (void)stopPlayingVideos;
- (id)videoContentHeightConstraint;
- (id)videoContentView;
- (id)videoContentWidthConstraint;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
