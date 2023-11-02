
@interface PUPlayButtonTileViewController : PUTileViewController <PUAssetViewModelChangeObserver, PUBrowsingVideoPlayerChangeObserver, PUBrowsingViewModelChangeObserver> {
    PUBrowsingVideoPlayer * __browsingVideoPlayer;
    UIView<PXVideoOverlayButton> * __playButton;
    bool  __shouldShowPlayButton;
    bool  __shouldSuppressButtonUpdates;
    PUAssetViewModel * _assetViewModel;
    PUBrowsingViewModel * _browsingViewModel;
    <PUPlayButtonTileViewControllerDelegate> * _delegate;
    struct { 
        bool respondsToShouldShowPauseButton; 
        bool respondsToShouldShowPlayButtonWhileActivated; 
        bool respondsToDidTapButton; 
        bool respondsToDelayForButtonAnimation; 
    }  _delegateFlags;
}

@property (setter=_setBrowsingVideoPlayer:, nonatomic, retain) PUBrowsingVideoPlayer *_browsingVideoPlayer;
@property (setter=_setPlayButton:, nonatomic, retain) UIView<PXVideoOverlayButton> *_playButton;
@property (setter=_setShouldShowPlayButton:, nonatomic) bool _shouldShowPlayButton;
@property (setter=_setShouldSuppressButtonUpdates:, nonatomic) bool _shouldSuppressButtonUpdates;
@property (nonatomic, retain) PUAssetViewModel *assetViewModel;
@property (nonatomic, retain) PUBrowsingViewModel *browsingViewModel;
@property (nonatomic, readonly) bool canShowPauseButton;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUPlayButtonTileViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool showPlayButtonWhileActivated;
@property (readonly) Class superclass;

+ (struct CGSize { double x1; double x2; })playButtonTileSize;

- (void).cxx_destruct;
- (id)_browsingVideoPlayer;
- (id)_playButton;
- (void)_playButtonTapped:(id)arg1;
- (void)_setBrowsingVideoPlayer:(id)arg1;
- (void)_setPlayButton:(id)arg1;
- (void)_setShouldShowPlayButton:(bool)arg1;
- (void)_setShouldShowPlayButton:(bool)arg1 animated:(bool)arg2;
- (void)_setShouldSuppressButtonUpdates:(bool)arg1;
- (bool)_shouldShowPlayButton;
- (bool)_shouldSuppressButtonUpdates;
- (void)_updateButtonAnimated:(bool)arg1;
- (id)assetViewModel;
- (void)becomeReusable;
- (id)browsingViewModel;
- (bool)canShowPauseButton;
- (void)dealloc;
- (id)delegate;
- (id)loadView;
- (void)setAssetViewModel:(id)arg1;
- (void)setBrowsingViewModel:(id)arg1;
- (void)setDelegate:(id)arg1;
- (bool)showPlayButtonWhileActivated;
- (void)viewModel:(id)arg1 didChange:(id)arg2;

@end
