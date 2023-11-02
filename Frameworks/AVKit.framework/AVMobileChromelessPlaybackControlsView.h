
@interface AVMobileChromelessPlaybackControlsView : AVView <UIPointerInteractionDelegate> {
    AVMobileChromelessPlaybackControlButton * _backwardSecondaryButton;
    bool  _backwardSecondaryControlEnabled;
    unsigned long long  _backwardSecondaryControlIcon;
    <AVMobileChromelessPlaybackControlsViewDelegate> * _delegate;
    AVMobileChromelessPlaybackControlButton * _forwardSecondaryButton;
    bool  _forwardSecondaryControlEnabled;
    unsigned long long  _forwardSecondaryControlIcon;
    AVMobileChromelessPlaybackControlButton * _playPauseButton;
    bool  _playPauseButtonShowsPlayIcon;
    bool  _showsBackwardSecondaryPlaybackButton;
    bool  _showsForwardSecondaryPlaybackButton;
    bool  _showsPlayPauseButton;
    AVMobileChromelessControlsStyleSheet * _styleSheet;
}

@property (nonatomic, readonly) AVMobileChromelessPlaybackControlButton *backwardSecondaryButton;
@property (nonatomic) bool backwardSecondaryControlEnabled;
@property (nonatomic) unsigned long long backwardSecondaryControlIcon;
@property (readonly, copy) NSString *debugDescription;
@property <AVMobileChromelessPlaybackControlsViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) AVMobileChromelessPlaybackControlButton *forwardSecondaryButton;
@property (nonatomic) bool forwardSecondaryControlEnabled;
@property (nonatomic) unsigned long long forwardSecondaryControlIcon;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool playPauseButtonShowsPlayIcon;
@property (nonatomic) bool showsBackwardSecondaryPlaybackButton;
@property (nonatomic) bool showsForwardSecondaryPlaybackButton;
@property (nonatomic) bool showsPlayPauseButton;
@property (nonatomic, retain) AVMobileChromelessControlsStyleSheet *styleSheet;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addPlaybackControlViews:(id)arg1;
- (void)_updateBackwardSecondaryControlIcon;
- (void)_updateForwardSecondaryControlIcon;
- (void)avkit_intrinsicContentSizeOfSubviewWasInvalidated:(id)arg1;
- (id)backwardSecondaryButton;
- (bool)backwardSecondaryControlEnabled;
- (unsigned long long)backwardSecondaryControlIcon;
- (void)backwardsSecondaryControlWasPressed;
- (id)delegate;
- (void)didMoveToWindow;
- (id)forwardSecondaryButton;
- (bool)forwardSecondaryControlEnabled;
- (unsigned long long)forwardSecondaryControlIcon;
- (void)forwardSecondaryControlWasPressed;
- (id)initWithStyleSheet:(id)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (bool)playPauseButtonShowsPlayIcon;
- (void)playPauseButtonWasPressed;
- (void)setBackwardSecondaryControlEnabled:(bool)arg1;
- (void)setBackwardSecondaryControlIcon:(unsigned long long)arg1;
- (void)setBackwardsSecondaryControlEnabled:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setForwardSecondaryControlEnabled:(bool)arg1;
- (void)setForwardSecondaryControlIcon:(unsigned long long)arg1;
- (void)setPlayPauseButtonShowsPlayIcon:(bool)arg1;
- (void)setShowsBackwardSecondaryPlaybackButton:(bool)arg1;
- (void)setShowsForwardSecondaryPlaybackButton:(bool)arg1;
- (void)setShowsPlayPauseButton:(bool)arg1;
- (void)setStyleSheet:(id)arg1;
- (bool)showsBackwardSecondaryPlaybackButton;
- (bool)showsForwardSecondaryPlaybackButton;
- (bool)showsPlayPauseButton;
- (id)styleSheet;

@end
