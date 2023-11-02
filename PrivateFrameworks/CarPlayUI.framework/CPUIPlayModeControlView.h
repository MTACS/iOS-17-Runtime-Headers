
@interface CPUIPlayModeControlView : UIView {
    NSArray * _activeButtonLayoutConstraints;
    CPUIModernButton * _addToLibraryButton;
    double  _buttonSpacing;
    double  _buttonWidth;
    <CPUIPlayModeControlViewDelegate> * _delegate;
    bool  _fuseSubscriberLayout;
    NSArray * _mediaButtons;
    CPUIModernButton * _moreButton;
    CPUIModernButton * _playbackRateButton;
    CPUIRepeatButton * _repeatButton;
    bool  _showsArtwork;
    CPUIModernButton * _shuffleButton;
    UIStackView * _stackView;
}

@property (nonatomic, retain) NSArray *activeButtonLayoutConstraints;
@property (nonatomic, readonly) CPUIModernButton *addToLibraryButton;
@property (nonatomic) double buttonSpacing;
@property (nonatomic) double buttonWidth;
@property (nonatomic) <CPUIPlayModeControlViewDelegate> *delegate;
@property (nonatomic) bool fuseSubscriberLayout;
@property (nonatomic, retain) NSArray *mediaButtons;
@property (nonatomic, readonly) CPUIModernButton *moreButton;
@property (nonatomic, readonly) CPUIModernButton *playbackRateButton;
@property (nonatomic, readonly) CPUIRepeatButton *repeatButton;
@property (nonatomic) bool showsArtwork;
@property (nonatomic, readonly) CPUIModernButton *shuffleButton;
@property (nonatomic, readonly) UIStackView *stackView;

- (void).cxx_destruct;
- (void)_updateButtonLayouts;
- (id)_visibleControlButtons;
- (id)activeButtonLayoutConstraints;
- (id)addToLibraryButton;
- (double)buttonSpacing;
- (double)buttonWidth;
- (id)defaultPlayModeButtons;
- (id)delegate;
- (bool)fuseSubscriberLayout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)mediaButtons;
- (id)moreButton;
- (void)playModeButtonTapped:(id)arg1;
- (id)playbackRateButton;
- (id)repeatButton;
- (void)setActiveButtonLayoutConstraints:(id)arg1;
- (void)setButtonSpacing:(double)arg1;
- (void)setButtonWidth:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFuseSubscriberLayout:(bool)arg1;
- (void)setMediaButtons:(id)arg1;
- (void)setShowsArtwork:(bool)arg1;
- (bool)showsArtwork;
- (id)shuffleButton;
- (id)stackView;
- (void)traitCollectionDidChange:(id)arg1;

@end
