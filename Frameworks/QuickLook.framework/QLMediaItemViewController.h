
@interface QLMediaItemViewController : QLMediaItemBaseViewController <QLMediaScrubberGestureDelegate, UIGestureRecognizerDelegate> {
    NSNumber * _isSeeking;
    long long  _playbackTimeFormat;
    NSTimer * _playbackTimeHiddenTimer;
    NSMutableDictionary * _playingInfo;
    QLMediaScrubberGesture * _scrubGesture;
    UIScrollView * _scrubberScrollView;
    UITapGestureRecognizer * _tapToPlayGesture;
    UILabel * _timeLabel;
    UIView * _timeLabelBackground;
    NSLayoutConstraint * _timeLabelConstraintX;
    NSLayoutConstraint * _timeLabelConstraintY;
    bool  _wasPlayingBeforeStartScrubbing;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) QLMediaScrubberGesture *scrubGesture;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITapGestureRecognizer *tapToPlayGesture;

- (void).cxx_destruct;
- (id)_playingInfoWithPlaybackDuration:(double)arg1 elapsedTime:(double)arg2;
- (void)_registerForCommandCenterHandlers;
- (void)_unregisterForCommandCenterHandlers;
- (void)_updateCommandCenterPlayingInfoWithCurrentPlaybackTimeInformation;
- (void)dealloc;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handlePerformedKeyCommandIfNeeded:(id)arg1;
- (void)hideTimeLabel;
- (void)hideTimeLabelAfterDelay;
- (void)hideTimeLabelAnimated:(bool)arg1;
- (void)hostApplicationDidEnterBackground:(id)arg1;
- (id)labelTextWithFormat:(long long)arg1 elapsedInterval:(double)arg2 remainingInterval:(double)arg3;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)observePlayingTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (long long)playbackTimeFormat;
- (void)previewBecameFullScreen:(bool)arg1 animated:(bool)arg2;
- (void)previewDidAppear:(bool)arg1;
- (void)previewDidDisappear:(bool)arg1;
- (void)previewIsAppearingWithProgress:(double)arg1;
- (void)previewWillDisappear:(bool)arg1;
- (id)registeredKeyCommands;
- (void)removeTimeLabel;
- (id)scrubGesture;
- (void)scrubber:(id)arg1 didChangeValue:(float)arg2;
- (void)scrubberDidEndScrubbing:(id)arg1;
- (void)scrubberDidStartScrubbing:(id)arg1;
- (void)setAppearance:(id)arg1 animated:(bool)arg2;
- (void)setScrubGesture:(id)arg1;
- (void)setTapToPlayGesture:(id)arg1;
- (void)setTimeLabelNeedsUpdate;
- (void)setUpTimeLabelIfNeeded;
- (bool)shouldHandleRegisteringForCommandCenterHandlers;
- (void)showTimeLabel;
- (void)showTimeLabelIfNeeded;
- (id)stringFromTimeInterval:(double)arg1;
- (id)tapToPlayGesture;
- (void)tapToPlayGestureChanged:(id)arg1;
- (id)timeLabelScrollView;
- (long long)togglePlaybackFromControlCenter:(id)arg1;
- (void)transitionDidFinish:(bool)arg1 didComplete:(bool)arg2;
- (long long)userScrubbedInControlCenter:(id)arg1;
- (long long)userTappedPauseInControlCenter:(id)arg1;
- (long long)userTappedPlayInControlCenter:(id)arg1;

@end
