
@interface AVMusicAppBehaviorContext : NSObject <AVBehaviorContext, AVBehaviorContextInternal, AVMetricsCollectionBehaviorContext, AVPlayerViewControllerBehaviorContext> {
    AVMusicAppBehavior * _behavior;
    AVObservationController * _observationController;
    AVPlayerController * _playerController;
    AVPlayerViewController * _playerViewController;
    bool  _scrubbing;
    NSNumber * _seekTargetTime;
    bool  _showsSkipItemButtons;
    bool  _skipToNextItemButtonEnabled;
    bool  _skipToPreviousItemButtonEnabled;
}

@property (nonatomic) AVMusicAppBehavior *behavior;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) AVObservationController *observationController;
@property (nonatomic, retain) AVPlayerController *playerController;
@property (nonatomic, readonly) AVPlayerViewController *playerViewController;
@property (getter=isScrubbing, nonatomic) bool scrubbing;
@property (nonatomic, retain) NSNumber *seekTargetTime;
@property (nonatomic) bool showsSkipItemButtons;
@property (getter=isSkipToNextItemButtonEnabled, nonatomic) bool skipToNextItemButtonEnabled;
@property (getter=isSkipToPreviousItemButtonEnabled, nonatomic) bool skipToPreviousItemButtonEnabled;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updatePlaybackControlsInclusion;
- (void)_updateSkipItemButtonsEnabled;
- (id)behavior;
- (void)dealloc;
- (void)didAddBehavior:(id)arg1;
- (void)didRemoveBehavior:(id)arg1;
- (id)initWithAVKitOwner:(id)arg1;
- (bool)isScrubbing;
- (bool)isSkipToNextItemButtonEnabled;
- (bool)isSkipToPreviousItemButtonEnabled;
- (id)observationController;
- (id)playerController;
- (id)playerViewController;
- (void)playerViewController:(id)arg1 didCollectMetricsEvent:(long long)arg2;
- (id)seekTargetTime;
- (void)setBehavior:(id)arg1;
- (void)setPlayerController:(id)arg1;
- (void)setScrubbing:(bool)arg1;
- (void)setSeekTargetTime:(id)arg1;
- (void)setShowsSkipItemButtons:(bool)arg1;
- (void)setSkipToNextItemButtonEnabled:(bool)arg1;
- (void)setSkipToPreviousItemButtonEnabled:(bool)arg1;
- (bool)showsSkipItemButtons;
- (void)viewDidLoad;
- (void)willAddBehavior:(id)arg1;
- (void)willRemoveBehavior:(id)arg1;

@end
