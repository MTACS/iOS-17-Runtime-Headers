
@interface DBNowPlayingWidgetViewController : DBWidgetViewController <CPUINowPlayingObserving, DBNowPlayingDelegate, MPRequestResponseControllerDelegate> {
    UIButton * _artworkButton;
    NSLayoutConstraint * _artworkHorizontalConstraint;
    UILongPressGestureRecognizer * _backLongPressRecognizer;
    DBNowPlayingFocusHighlightButton * _backTransportButton;
    UIFocusContainerGuide * _controlsContainerGuide;
    UIImage * _currentArtwork;
    MPArtworkCatalog * _currentCatalog;
    UIFocusContainerGuide * _focusContainerGuide;
    DBWidgetFocusRingView * _focusRingView;
    long long  _heldAction;
    CPUINowPlayingSnapshot * _lastSnapshot;
    struct CGSize { 
        double width; 
        double height; 
    }  _lastViewSize;
    NSArray * _layoutGuides;
    UIImage * _nextArtwork;
    MPArtworkCatalog * _nextCatalog;
    UILongPressGestureRecognizer * _nextLongPressRecognizer;
    DBNowPlayingFocusHighlightButton * _nextTransportButton;
    DBNowPlayingObserver * _nowPlayingObserver;
    DBNowPlayingFocusHighlightButton * _playTransportButton;
    UIImage * _previousArtwork;
    MPArtworkCatalog * _previousCatalog;
    CPUIProgressView * _progressView;
    bool  _seeking;
    bool  _showArtworkBorder;
    UIActivityIndicatorView * _spinner;
    NSTimer * _spinnerTimer;
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
    NSArray * _widgetConstraints;
}

@property (nonatomic, retain) UIButton *artworkButton;
@property (nonatomic, retain) NSLayoutConstraint *artworkHorizontalConstraint;
@property (nonatomic, retain) UILongPressGestureRecognizer *backLongPressRecognizer;
@property (nonatomic, retain) DBNowPlayingFocusHighlightButton *backTransportButton;
@property (nonatomic, retain) UIFocusContainerGuide *controlsContainerGuide;
@property (nonatomic, retain) UIImage *currentArtwork;
@property (nonatomic, retain) MPArtworkCatalog *currentCatalog;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIFocusContainerGuide *focusContainerGuide;
@property (nonatomic, retain) DBWidgetFocusRingView *focusRingView;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long heldAction;
@property (nonatomic, retain) CPUINowPlayingSnapshot *lastSnapshot;
@property (nonatomic) struct CGSize { double x1; double x2; } lastViewSize;
@property (nonatomic, retain) NSArray *layoutGuides;
@property (nonatomic, retain) UIImage *nextArtwork;
@property (nonatomic, retain) MPArtworkCatalog *nextCatalog;
@property (nonatomic, retain) UILongPressGestureRecognizer *nextLongPressRecognizer;
@property (nonatomic, retain) DBNowPlayingFocusHighlightButton *nextTransportButton;
@property (nonatomic, retain) DBNowPlayingObserver *nowPlayingObserver;
@property (nonatomic, retain) DBNowPlayingFocusHighlightButton *playTransportButton;
@property (nonatomic, retain) UIImage *previousArtwork;
@property (nonatomic, retain) MPArtworkCatalog *previousCatalog;
@property (nonatomic, retain) CPUIProgressView *progressView;
@property (nonatomic) bool seeking;
@property (nonatomic) bool showArtworkBorder;
@property (nonatomic, retain) UIActivityIndicatorView *spinner;
@property (nonatomic, retain) NSTimer *spinnerTimer;
@property (nonatomic, retain) UILabel *subtitleLabel;
@property (readonly) Class superclass;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) NSArray *widgetConstraints;

- (void).cxx_destruct;
- (void)_cancelHeldAction:(id)arg1;
- (double)_heightForArtwork;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_imageInsetsForTransportButton:(unsigned long long)arg1;
- (bool)_isArtworkVisuallyIdenticalForCatalog:(id)arg1 andCatalog:(id)arg2;
- (bool)_isFocusUI;
- (id)_nowPlayingPlaceholderImage;
- (void)_processArtworks;
- (void)_processArtworksFor:(id)arg1 songType:(unsigned long long)arg2;
- (void)_processLabelsForCurrentlyPlayingSong;
- (void)_processPlaybackControlsForCurrentlyPlayingSong;
- (void)_resetArtworkAndCatalogForSongType:(unsigned long long)arg1;
- (void)_respondToHeldAction;
- (void)_reuseCatalog:(id)arg1 withArtwork:(id)arg2 compareWithCatalog:(id)arg3 forSongType:(unsigned long long)arg4;
- (void)_sendAction:(long long)arg1 withState:(long long)arg2;
- (void)_sendHeldAction;
- (void)_setCurrentArtwork:(id)arg1 withCatalog:(id)arg2;
- (void)_setNotPlaying;
- (void)_setSpinnerVisible:(bool)arg1;
- (void)_setupPlaceholderArtwork;
- (void)_setupTransportControls;
- (bool)_showsBackButton;
- (bool)_showsProgressView;
- (bool)_showsTextLabels;
- (void)_updateAppearanceForWallpaper;
- (void)_updateArtworkBorder;
- (void)_updateArtworkConstraints;
- (void)_updateButton:(id)arg1 withType:(unsigned long long)arg2 variant:(id)arg3;
- (void)_updateProgressView;
- (unsigned long long)_widgetStyle;
- (void)albumArtButtonTapped:(id)arg1;
- (id)artworkButton;
- (id)artworkHorizontalConstraint;
- (void)backButtonLongPress:(id)arg1;
- (void)backButtonTouchDown:(id)arg1;
- (void)backButtonTouchUp:(id)arg1;
- (id)backLongPressRecognizer;
- (id)backTransportButton;
- (id)controlsContainerGuide;
- (id)currentArtwork;
- (id)currentCatalog;
- (void)dealloc;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (bool)entireWidgetFocusable;
- (id)focusContainerGuide;
- (id)focusRingView;
- (long long)heldAction;
- (void)invalidateConstraints;
- (id)lastSnapshot;
- (struct CGSize { double x1; double x2; })lastViewSize;
- (id)layoutGuides;
- (id)linearFocusItems;
- (id)nextArtwork;
- (void)nextButtonLongPress:(id)arg1;
- (void)nextButtonTouchDown:(id)arg1;
- (void)nextButtonTouchUp:(id)arg1;
- (id)nextCatalog;
- (id)nextLongPressRecognizer;
- (id)nextTransportButton;
- (void)nowPlayingManager:(id)arg1 didThrottleUpdateForBundleIdentifier:(id)arg2;
- (void)nowPlayingManager:(id)arg1 didUpdateSnapshot:(id)arg2;
- (id)nowPlayingObserver;
- (void)nowPlayingObserver:(id)arg1 didChangeNowPlayingApplication:(id)arg2;
- (void)playPauseButtonTouchDown:(id)arg1;
- (void)playPauseButtonTouchUp:(id)arg1;
- (id)playTransportButton;
- (id)previousArtwork;
- (id)previousCatalog;
- (id)progressView;
- (bool)seeking;
- (void)setArtworkButton:(id)arg1;
- (void)setArtworkHorizontalConstraint:(id)arg1;
- (void)setBackLongPressRecognizer:(id)arg1;
- (void)setBackTransportButton:(id)arg1;
- (void)setControlsContainerGuide:(id)arg1;
- (void)setCurrentArtwork:(id)arg1;
- (void)setCurrentCatalog:(id)arg1;
- (void)setFocusContainerGuide:(id)arg1;
- (void)setFocusRingView:(id)arg1;
- (void)setHeldAction:(long long)arg1;
- (void)setLastSnapshot:(id)arg1;
- (void)setLastViewSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setLayoutGuides:(id)arg1;
- (void)setNextArtwork:(id)arg1;
- (void)setNextCatalog:(id)arg1;
- (void)setNextLongPressRecognizer:(id)arg1;
- (void)setNextTransportButton:(id)arg1;
- (void)setNowPlayingObserver:(id)arg1;
- (void)setPlayTransportButton:(id)arg1;
- (void)setPreviousArtwork:(id)arg1;
- (void)setPreviousCatalog:(id)arg1;
- (void)setProgressView:(id)arg1;
- (void)setSeeking:(bool)arg1;
- (void)setShowArtworkBorder:(bool)arg1;
- (void)setSpinner:(id)arg1;
- (void)setSpinnerTimer:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setWidgetConstraints:(id)arg1;
- (bool)showArtworkBorder;
- (id)spinner;
- (id)spinnerTimer;
- (id)subtitleLabel;
- (id)titleLabel;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateAppearanceForWallpaper;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)widgetConstraints;
- (void)widgetViewTapped;

@end
