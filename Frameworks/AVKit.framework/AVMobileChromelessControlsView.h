
@interface AVMobileChromelessControlsView : AVView {
    AVMobileAuxiliaryControlsView * _auxiliaryControlsView;
    AVMobileChromelessBackgroundGradientView * _backgroundView;
    CAGradientLayer * _bottomFadeoutMaskLayer;
    AVMobileContentTabSelectionView * _contentTabSelectionView;
    UIView * _contentTabView;
    <AVMobileChromelessControlsViewDelegate> * _delegate;
    AVMobileChromelessDisplayModeControlsView * _displayModeControlsView;
    bool  _layoutAllowed;
    struct AVMobileChromelessControlsLayoutConfiguration { 
        unsigned long long includedControls; 
        bool expanded; 
        double controlsPadding; 
        unsigned long long auxiliaryControlsPlacement; 
        NSArray *pinnedAuxiliaryControls; 
        bool contentTabPresented; 
        double contentTabPresentationHeight; 
    }  _layoutConfiguration;
    AVMobileContentTagView * _liveEdgeContentTagView;
    AVMobileChromelessPlaybackControlsView * _playbackControlsView;
    AVMobileChromelessTimelineView * _timelineView;
    AVMobileTitlebarView * _titlebarView;
    AVMobileChromelessVolumeControlsView * _volumeControlsView;
}

@property (nonatomic, retain) AVMobileAuxiliaryControlsView *auxiliaryControlsView;
@property (nonatomic, retain) AVMobileChromelessBackgroundGradientView *backgroundView;
@property (nonatomic, retain) AVMobileContentTabSelectionView *contentTabSelectionView;
@property (nonatomic, retain) UIView *contentTabView;
@property (nonatomic) <AVMobileChromelessControlsViewDelegate> *delegate;
@property (nonatomic, retain) AVMobileChromelessDisplayModeControlsView *displayModeControlsView;
@property (nonatomic) bool layoutAllowed;
@property (nonatomic) struct AVMobileChromelessControlsLayoutConfiguration { unsigned long long x1; bool x2; double x3; unsigned long long x4; id x5; bool x6; double x7; } layoutConfiguration;
@property (nonatomic, retain) AVMobileContentTagView *liveEdgeContentTagView;
@property (nonatomic, retain) AVMobileChromelessPlaybackControlsView *playbackControlsView;
@property (nonatomic, retain) AVMobileChromelessTimelineView *timelineView;
@property (nonatomic, retain) AVMobileTitlebarView *titlebarView;
@property (nonatomic, retain) AVMobileChromelessVolumeControlsView *volumeControlsView;

- (void).cxx_destruct;
- (id)auxiliaryControlsView;
- (void)avkit_intrinsicContentSizeOfSubviewWasInvalidated:(id)arg1;
- (id)backgroundView;
- (id)contentTabSelectionView;
- (id)contentTabView;
- (id)delegate;
- (void)didMoveToWindow;
- (id)displayModeControlsView;
- (id)init;
- (bool)layoutAllowed;
- (struct AVMobileChromelessControlsLayoutConfiguration { unsigned long long x1; bool x2; double x3; unsigned long long x4; id x5; bool x6; double x7; })layoutConfiguration;
- (void)layoutSubviews;
- (id)liveEdgeContentTagView;
- (id)playbackControlsView;
- (void)setAuxiliaryControlsView:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setContentTabSelectionView:(id)arg1;
- (void)setContentTabView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayModeControlsView:(id)arg1;
- (void)setLayoutAllowed:(bool)arg1;
- (void)setLayoutConfiguration:(struct AVMobileChromelessControlsLayoutConfiguration { unsigned long long x1; bool x2; double x3; unsigned long long x4; id x5; bool x6; double x7; })arg1;
- (void)setLiveEdgeContentTagView:(id)arg1;
- (void)setPlaybackControlsView:(id)arg1;
- (void)setTimelineView:(id)arg1;
- (void)setTitlebarView:(id)arg1;
- (void)setVolumeControlsView:(id)arg1;
- (id)timelineView;
- (id)titlebarView;
- (id)volumeControlsView;

@end
