
@interface AVMobileChromeControlsViewController : AVMobileControlsViewController {
    AVMobileChromeControlsView * _controlsView;
    NSValue * _embeddedInlineLayoutMargins;
    AVPlaybackControlsController * _playbackControlsController;
    AVPlaybackControlsView * _playbackControlsView;
    AVPlayerViewController * _playerViewController;
    bool  _prefersCompactFullScreenControls;
    AVMobileChromeControlsStyleSheet * _styleSheet;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _transformForProminentPlayButton;
    AVTurboModePlaybackControlsPlaceholderView * _turboModeControlsView;
}

@property (nonatomic, retain) NSValue *embeddedInlineLayoutMargins;
@property (nonatomic, readonly) AVPlaybackControlsController *playbackControlsController;
@property (nonatomic, readonly) AVPlaybackControlsView *playbackControlsView;
@property (nonatomic) bool prefersCompactFullScreenControls;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } transformForProminentPlayButton;
@property (nonatomic, readonly) AVTurboModePlaybackControlsPlaceholderView *turboModeControlsView;

- (void).cxx_destruct;
- (void)_updateStyleSheet;
- (id)controlsViewControllerIfChromed;
- (void)dealloc;
- (void)didBeginIndirectUserInteraction;
- (void)didEndIndirectUserInteraction;
- (id)displayModeControlsLayoutItem;
- (id)embeddedInlineLayoutMargins;
- (void)flashControlsWithDuration:(double)arg1;
- (id)initWithPlayerViewController:(id)arg1;
- (void)loadView;
- (id)playbackControlsController;
- (id)playbackControlsView;
- (bool)prefersCompactFullScreenControls;
- (void)setControlItems:(id)arg1;
- (void)setEmbeddedInlineLayoutMargins:(id)arg1;
- (void)setIncludedControls:(unsigned long long)arg1;
- (void)setOptimizeForPerformance:(bool)arg1;
- (void)setPrefersCompactFullScreenControls:(bool)arg1;
- (void)setRoutingConfiguration:(id)arg1;
- (void)setShowsFullScreenControl:(bool)arg1;
- (void)setTransformForProminentPlayButton:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setTransportBarCustomMenuItems:(id)arg1;
- (void)setVolumeController:(id)arg1;
- (bool)showsFullScreenControl;
- (void)toggleVisibility:(id)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformForProminentPlayButton;
- (id)transportControlsLayoutItem;
- (id)turboModeControlsView;
- (void)viewDidLoad;
- (id)volumeControlsLayoutItem;

@end
