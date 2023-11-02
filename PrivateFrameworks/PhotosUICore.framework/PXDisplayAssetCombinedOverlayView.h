
@interface PXDisplayAssetCombinedOverlayView : UIView <PXChangeObserver, PXLivePhotoBadgeViewDelegate> {
    bool  _canShowLoadingProgress;
    PXDisplayAssetImageAnalysisOverlayView * _imageAnalysisOverlayView;
    bool  _isPerformingLayout;
    PXLivePhotoBadgeView * _livePhotoBadgeView;
    <PXDisplayAsset> * _loadingAsset;
    PXLoadingFailureBadgeView * _loadingFailureBadgeView;
    PXRoundProgressView * _loadingProgressBadgeView;
    PXUpdater * _updater;
    PXDisplayAssetViewModel * _viewModel;
    struct CGSize { 
        double width; 
        double height; 
    }  _viewportSize;
}

@property (nonatomic) bool canShowLoadingProgress;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PXDisplayAssetImageAnalysisOverlayView *imageAnalysisOverlayView;
@property (nonatomic, readonly) PXLivePhotoBadgeView *livePhotoBadgeView;
@property (nonatomic, retain) <PXDisplayAsset> *loadingAsset;
@property (nonatomic, readonly) PXLoadingFailureBadgeView *loadingFailureBadgeView;
@property (nonatomic, readonly) PXRoundProgressView *loadingProgressBadgeView;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PXUpdater *updater;
@property (nonatomic, readonly) PXDisplayAssetViewModel *viewModel;
@property (nonatomic) struct CGSize { double x1; double x2; } viewportSize;

- (void).cxx_destruct;
- (void)_ensureImageAnalysisOverlayView;
- (void)_ensureLivePhotoBadgeView;
- (void)_ensureLoadingFailureBadgeView;
- (void)_ensureLoadingProgressBadgeView;
- (void)_invalidateCanShowLoadingProgress;
- (void)_invalidateImageAnalysisOverlay;
- (void)_invalidateLayout;
- (void)_invalidateLivePhotoBadge;
- (void)_invalidateLoadingFailureBadgeView;
- (void)_invalidateLoadingProgressBadgeView;
- (void)_loadingProgressDelayElapsed;
- (void)_setNeedsUpdate;
- (void)_updateCanShowLoadingProgress;
- (void)_updateImageAnalysisOverlay;
- (void)_updateLayout;
- (void)_updateLivePhotoBadge;
- (void)_updateLoadingFailureBadgeView;
- (void)_updateLoadingProgressBadgeView;
- (bool)canShowLoadingProgress;
- (id)imageAnalysisOverlayView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithViewModel:(id)arg1;
- (void)layoutSubviews;
- (id)livePhotoBadgeView;
- (void)livePhotoBadgeView:(id)arg1 wantsPlayback:(bool)arg2;
- (id)loadingAsset;
- (id)loadingFailureBadgeView;
- (id)loadingProgressBadgeView;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)setCanShowLoadingProgress:(bool)arg1;
- (void)setLoadingAsset:(id)arg1;
- (void)setViewportSize:(struct CGSize { double x1; double x2; })arg1;
- (id)updater;
- (id)viewModel;
- (struct CGSize { double x1; double x2; })viewportSize;

@end
