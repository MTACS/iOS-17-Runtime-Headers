
@interface PUVideoHighlightStripTileViewController : PUTileViewController <PUAssetViewModelChangeObserver, PUBrowsingVideoPlayerTimeObserver> {
    PUAssetViewModel * _assetViewModel;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _currentTime;
    UIColor * _highlightColor;
    _PUVideoHighlightStripView * _highlightsView;
    PUBrowsingVideoPlayer * _videoPlayer;
}

@property (nonatomic, retain) PUAssetViewModel *assetViewModel;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } currentTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIColor *highlightColor;
@property (nonatomic, readonly) _PUVideoHighlightStripView *highlightsView;
@property (readonly) Class superclass;
@property (nonatomic, retain) PUBrowsingVideoPlayer *videoPlayer;

+ (double)preferredTileHeight;

- (void).cxx_destruct;
- (void)_updateHighlightsView;
- (void)_updateHighlightsViewCurrentTime;
- (id)assetViewModel;
- (void)becomeReusable;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })currentTime;
- (id)highlightColor;
- (id)highlightsView;
- (void)setAssetViewModel:(id)arg1;
- (void)setCurrentTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setHighlightColor:(id)arg1;
- (void)setVideoPlayer:(id)arg1;
- (id)videoPlayer;
- (void)videoPlayer:(id)arg1 currentTimeDidChange:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)videoPlayer:(id)arg1 desiredSeekTimeDidChange:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)viewDidLoad;
- (void)viewModel:(id)arg1 didChange:(id)arg2;

@end
