
@interface NANowPlayingPlaybackControls : UIView {
    UIView * _contentView;
    <NANowPlayingPlaybackControlsDelegate> * _delegate;
    UIButton * _forwardButton;
    double  _inset;
    bool  _isPlaying;
    <NANowPlayingPlaybackControlsLayoutSpecProvider> * _layoutSpecProvider;
    bool  _nextTrackButtonEnabled;
    UIButton * _playPauseButton;
    UIButton * _rewindButton;
    bool  _skipForwardButtonEnabled;
}

@property (nonatomic, retain) UIView *contentView;
@property (nonatomic) <NANowPlayingPlaybackControlsDelegate> *delegate;
@property (nonatomic, retain) UIButton *forwardButton;
@property (nonatomic) double inset;
@property (nonatomic) bool isPlaying;
@property (nonatomic) <NANowPlayingPlaybackControlsLayoutSpecProvider> *layoutSpecProvider;
@property (nonatomic) bool nextTrackButtonEnabled;
@property (nonatomic, retain) UIButton *playPauseButton;
@property (nonatomic, retain) UIButton *rewindButton;
@property (nonatomic) bool skipForwardButtonEnabled;

- (void).cxx_destruct;
- (id)buttonColor;
- (id)contentView;
- (id)delegate;
- (id)disabledButtonColor;
- (id)forwardButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inset:(double)arg2 layoutSpecProvider:(id)arg3;
- (double)inset;
- (bool)isPlaying;
- (id)layoutSpecProvider;
- (void)layoutSubviews;
- (bool)nextTrackButtonEnabled;
- (void)nextTrackButtonTapped:(id)arg1;
- (void)pauseButtonTapped:(id)arg1;
- (void)playButtonTapped:(id)arg1;
- (id)playPauseButton;
- (id)rewindButton;
- (void)rewindButtonTapped:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setForwardButton:(id)arg1;
- (void)setInset:(double)arg1;
- (void)setIsPlaying:(bool)arg1;
- (void)setLayoutSpecProvider:(id)arg1;
- (void)setNextTrackButtonEnabled:(bool)arg1;
- (void)setPlayPauseButton:(id)arg1;
- (void)setRewindButton:(id)arg1;
- (void)setSkipForwardButtonEnabled:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)skipForwardButtonEnabled;
- (void)skipForwardButtonTapped:(id)arg1;
- (void)updateForwardButton;

@end
