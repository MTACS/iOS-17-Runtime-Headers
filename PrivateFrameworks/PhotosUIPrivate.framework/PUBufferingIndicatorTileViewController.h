
@interface PUBufferingIndicatorTileViewController : PUTileViewController <PUBrowsingVideoPlayerChangeObserver, PUBrowsingViewModelChangeObserver, PXChangeObserver> {
    UIButton * __errorButton;
    long long  __indicatorStyle;
    UIActivityIndicatorView * __spinner;
    PUBrowsingVideoPlayer * __videoPlayer;
    PUAssetViewModel * _assetViewModel;
    PUBrowsingViewModel * _browsingViewModel;
    id /* block */  _errorAlertControllerDisplayer;
    PUOneUpMergedVideoProvider * _mergedVideoProvider;
}

@property (setter=_setErrorButton:, nonatomic, retain) UIButton *_errorButton;
@property (setter=_setIndicatorStyle:, nonatomic) long long _indicatorStyle;
@property (setter=_setSpinner:, nonatomic, retain) UIActivityIndicatorView *_spinner;
@property (setter=_setVideoPlayer:, nonatomic, retain) PUBrowsingVideoPlayer *_videoPlayer;
@property (nonatomic, retain) PUAssetViewModel *assetViewModel;
@property (nonatomic, retain) PUBrowsingViewModel *browsingViewModel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ errorAlertControllerDisplayer;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PUOneUpMergedVideoProvider *mergedVideoProvider;
@property (readonly) Class superclass;

+ (struct CGSize { double x1; double x2; })bufferingIndicatorTileSize;
+ (bool)canShowBufferingIndicatorTileForAsset:(id)arg1;

- (void).cxx_destruct;
- (id)_errorButton;
- (void)_handleErrorButton:(id)arg1;
- (long long)_indicatorStyle;
- (void)_setErrorButton:(id)arg1;
- (void)_setIndicatorStyle:(long long)arg1;
- (void)_setIndicatorStyle:(long long)arg1 animated:(bool)arg2;
- (void)_setSpinner:(id)arg1;
- (void)_setVideoPlayer:(id)arg1;
- (id)_spinner;
- (void)_updateIndicator;
- (id)_videoPlayer;
- (id)assetViewModel;
- (void)becomeReusable;
- (id)browsingViewModel;
- (id /* block */)errorAlertControllerDisplayer;
- (id)mergedVideoProvider;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)setAssetViewModel:(id)arg1;
- (void)setBrowsingViewModel:(id)arg1;
- (void)setErrorAlertControllerDisplayer:(id /* block */)arg1;
- (void)setMergedVideoProvider:(id)arg1;
- (void)viewModel:(id)arg1 didChange:(id)arg2;

@end
