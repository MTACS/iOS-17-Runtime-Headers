
@interface MRUActivityNowPlayingView : UIView {
    NSArray * _artworkViews;
    MRUActivityAccessoryView * _detachedMinimalView;
    MRUEqualizerView * _equalizerView;
    MRUActivityNowPlayingHeaderView * _headerView;
    MRUActivityAccessoryView * _leadingView;
    bool  _showWaveform;
    MRUVisualStylingProvider * _stylingProvider;
    MRUNowPlayingTimeControlsView * _timeControlsView;
    MRUActivityAccessoryView * _trailingView;
    MRUNowPlayingTransportControlsView * _transportControlsView;
    MRUWaveformView * _waveformView;
}

@property (nonatomic, readonly) NSArray *artworkViews;
@property (nonatomic, readonly) MRUActivityAccessoryView *detachedMinimalView;
@property (nonatomic, readonly) MRUEqualizerView *equalizerView;
@property (nonatomic, readonly) MRUActivityNowPlayingHeaderView *headerView;
@property (nonatomic, readonly) MRUActivityAccessoryView *leadingView;
@property (nonatomic) bool showWaveform;
@property (nonatomic, retain) MRUVisualStylingProvider *stylingProvider;
@property (nonatomic, readonly) MRUNowPlayingTimeControlsView *timeControlsView;
@property (nonatomic, readonly) MRUActivityAccessoryView *trailingView;
@property (nonatomic, readonly) MRUNowPlayingTransportControlsView *transportControlsView;
@property (nonatomic, readonly) MRUWaveformView *waveformView;

- (void).cxx_destruct;
- (id)artworkViews;
- (id)detachedMinimalView;
- (id)equalizerView;
- (id)headerView;
- (id)initWithWaveformView:(id)arg1;
- (void)layoutSubviews;
- (id)leadingView;
- (double)preferredHeightForBottomSafeArea;
- (void)setShowWaveform:(bool)arg1;
- (void)setStylingProvider:(id)arg1;
- (bool)showWaveform;
- (id)stylingProvider;
- (id)timeControlsView;
- (id)trailingView;
- (id)transportControlsView;
- (void)updateVisibilty;
- (id)waveformView;

@end
