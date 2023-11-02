
@interface HUNCCameraScrubberViewController : UIViewController <HFCameraPlaybackEngineObserver, HUCameraPlayerScrubbing> {
    NSDate * _clipStartDate;
    HMCameraClip * _currentClip;
    CADisplayLink * _displayLink;
    bool  _isScrubbing;
    bool  _isVisible;
    UIButton * _liveButton;
    UIView * _panTrackingView;
    UIView * _playPauseBackgroundView;
    UIButton * _playPauseButton;
    HFCameraPlaybackEngine * _playbackEngine;
    UIProgressView * _progressSlider;
}

@property (nonatomic, retain) NSDate *clipStartDate;
@property (nonatomic, retain) HMCameraClip *currentClip;
@property (nonatomic, readonly) double currentScrubberResolution;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CADisplayLink *displayLink;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isScrubbing;
@property (nonatomic) bool isVisible;
@property (nonatomic, readonly) UIButton *liveButton;
@property (nonatomic, retain) UIView *panTrackingView;
@property (nonatomic, retain) UIView *playPauseBackgroundView;
@property (nonatomic, retain) UIButton *playPauseButton;
@property (nonatomic) HFCameraPlaybackEngine *playbackEngine;
@property (nonatomic, retain) UIProgressView *progressSlider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_createAndStartDisplayLink;
- (void)_displayLinkUpdated:(id)arg1;
- (void)_loopPlaybackIfNeeded;
- (double)_playbackLength;
- (void)_removeDisplayLink;
- (void)_seekToCurrentScrubberValue;
- (void)_updateScrubberDisplayLinkState;
- (void)_updateSliderPosition;
- (id)clipStartDate;
- (id)currentClip;
- (double)currentScrubberResolution;
- (void)dealloc;
- (void)didMoveToParentViewController:(id)arg1;
- (id)displayLink;
- (id)initWithPlaybackEngine:(id)arg1 currentClip:(id)arg2 startDate:(id)arg3;
- (bool)isScrubbing;
- (bool)isVisible;
- (id)liveButton;
- (id)panTrackingView;
- (id)playPauseBackgroundView;
- (id)playPauseButton;
- (void)playPauseButtonPressed:(id)arg1;
- (id)playbackEngine;
- (void)playbackEngine:(id)arg1 didUpdateEvents:(id)arg2;
- (void)playbackEngine:(id)arg1 didUpdatePlaybackPosition:(id)arg2;
- (void)playbackEngine:(id)arg1 didUpdateTimeControlStatus:(unsigned long long)arg2;
- (id)progressSlider;
- (void)setClipStartDate:(id)arg1;
- (void)setCurrentClip:(id)arg1;
- (void)setDisplayLink:(id)arg1;
- (void)setIsScrubbing:(bool)arg1;
- (void)setIsVisible:(bool)arg1;
- (void)setPanTrackingView:(id)arg1;
- (void)setPlayPauseBackgroundView:(id)arg1;
- (void)setPlayPauseButton:(id)arg1;
- (void)setPlaybackEngine:(id)arg1;
- (void)setProgressSlider:(id)arg1;
- (void)showClipScrubber;
- (void)toggleLive;
- (void)userDidPan:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
