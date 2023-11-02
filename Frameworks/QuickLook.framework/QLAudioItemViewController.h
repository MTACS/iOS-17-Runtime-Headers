
@interface QLAudioItemViewController : QLMediaItemViewController <UIGestureRecognizerDelegate> {
    UIImageView * _backgroundIconImageView;
    QLOverlayPlayButton * _playButton;
    bool  _previewIsVisisble;
    QLVideoScrubberView * _scrubber;
    UIView * _scrubberContainer;
    UIScrollView * _scrubberContainerScrollView;
    double  _scrubberVerticalOffset;
    QLWaveformScrubberViewProvider * _scrubberViewProvider;
    bool  _scrubbing;
    NSLayoutConstraint * _topScrubber;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) UIView *scrubberContainer;
@property double scrubberVerticalOffset;
@property bool scrubbing;
@property (readonly) Class superclass;
@property (retain) NSLayoutConstraint *topScrubber;

- (void).cxx_destruct;
- (void)_tapRecognized:(id)arg1;
- (id)accessoryView;
- (void)addScrubberWithDeferral;
- (bool)canEnterFullScreen;
- (bool)canPerformFirstTimeAppearanceActions:(unsigned long long)arg1;
- (void)dealloc;
- (void)didChangePlayingStatus;
- (id)iconImageWithConfiguration:(id)arg1;
- (id)imageAccessibilityIdentifier;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(id /* block */)arg3;
- (double)maximumWaveformDimension;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)performFirstTimeAppearanceActions:(unsigned long long)arg1;
- (void)previewDidAppear:(bool)arg1;
- (void)previewDidDisappear:(bool)arg1;
- (id)scrubberContainer;
- (double)scrubberVerticalOffset;
- (bool)scrubbing;
- (void)setPlayControlsHidden:(bool)arg1 animated:(bool)arg2;
- (void)setScrubberContainer:(id)arg1;
- (void)setScrubberVerticalOffset:(double)arg1;
- (void)setScrubbing:(bool)arg1;
- (void)setTopScrubber:(id)arg1;
- (void)setupConstraints;
- (id)timeLabelScrollView;
- (id)topScrubber;
- (void)transitionDidFinish:(bool)arg1 didComplete:(bool)arg2;
- (void)transitionDidStart:(bool)arg1;
- (bool)usesScrubber;
- (double)waveformImageDimension;

@end
