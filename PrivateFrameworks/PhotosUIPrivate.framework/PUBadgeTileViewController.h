
@interface PUBadgeTileViewController : PUTileViewController <PUAssetViewModelChangeObserver, PXActionPerformerDelegate, PXChangeObserver, PXUIAssetBadgeViewDelegate> {
    struct PXAssetBadgeInfo { 
        unsigned long long badges; 
        double duration; 
        long long count; 
        long long fileSize; 
    }  __badgeInfo;
    PUBadgeInfoProvider * __badgeInfoProvider;
    PXUIAssetBadgeView * __badgeView;
    double  __contentWidth;
    bool  __isOverContent;
    bool  __needsUpdateBadgeInfo;
    bool  __needsUpdateBadgeProvider;
    bool  __needsUpdateBadgeView;
    PUAssetViewModel * _assetViewModel;
    <PUBadgeTileViewControllerDelegate> * _delegate;
    struct { 
        bool userDidTapBadgeView; 
        bool badgeVisibilityDidChange; 
        bool undoManager; 
    }  _delegateRespondsTo;
}

@property (setter=_setBadgeInfo:, nonatomic) struct PXAssetBadgeInfo { unsigned long long x1; double x2; long long x3; long long x4; } _badgeInfo;
@property (nonatomic, retain) PUBadgeInfoProvider *_badgeInfoProvider;
@property (nonatomic, readonly) PXUIAssetBadgeView *_badgeView;
@property (setter=_setContentWidth:, nonatomic) double _contentWidth;
@property (setter=_setOverContent:, nonatomic) bool _isOverContent;
@property (setter=_setNeedsUpdateBadgeInfo:, nonatomic) bool _needsUpdateBadgeInfo;
@property (setter=_setNeedsUpdateBadgeProvider:, nonatomic) bool _needsUpdateBadgeProvider;
@property (setter=_setNeedsUpdateBadgeView:, nonatomic) bool _needsUpdateBadgeView;
@property (nonatomic, retain) PUAssetViewModel *assetViewModel;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUBadgeTileViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isBadgeVisible;
@property (nonatomic, readonly) UIView *livePhotoBadgeContainerView;
@property (nonatomic, readonly) <PXMemoryAssetsActionFactory> *memoryAssetsActionFactory;
@property (readonly) Class superclass;

+ (id)_adjustmentDataLoadingQueue;
+ (void)_configureBadgeView:(id)arg1 withBadgeInfo:(struct PXAssetBadgeInfo { unsigned long long x1; double x2; long long x3; long long x4; })arg2 isOverContent:(bool)arg3 contentWidth:(double)arg4 animated:(bool)arg5;
+ (void)_logEffectNameApplied:(id)arg1 toAsset:(id)arg2;
+ (void)_toggleDepthForAsset:(id)arg1 enable:(bool)arg2 undoManager:(id)arg3;
+ (void)applyLivePhotoEffect:(long long)arg1 toAsset:(id)arg2 undoManager:(id)arg3;
+ (struct CGSize { double x1; double x2; })badgeTileSizeForAssetViewModel:(id)arg1 contentWidth:(double)arg2;
+ (void)disableLivePhotoForAsset:(id)arg1 undoManager:(id)arg2;
+ (struct CGSize { double x1; double x2; })leadingBadgesSizeForAssetViewModel:(id)arg1 contentWidth:(double)arg2;
+ (void)logAppliedLivePhotoEffect:(long long)arg1 toAsset:(id)arg2;
+ (void)logToggledDepthEffect:(bool)arg1 onAsset:(id)arg2;

- (void).cxx_destruct;
- (struct PXAssetBadgeInfo { unsigned long long x1; double x2; long long x3; long long x4; })_badgeInfo;
- (id)_badgeInfoProvider;
- (id)_badgeView;
- (double)_contentWidth;
- (id)_depthMenuElementsForDepthEnabled:(bool)arg1 depthControllerExists:(bool)arg2;
- (id)_depthToggleActionForEnable:(bool)arg1 handler:(id /* block */)arg2;
- (id)_depthToggleMenuForBadges:(unsigned long long)arg1;
- (id)_disabledDepthMenuElementsDepthEnabled:(bool)arg1;
- (void)_invalidateBadgeInfo;
- (void)_invalidateBadgeProvider;
- (void)_invalidateBadgeView;
- (bool)_isOverContent;
- (id)_liveVariationsMenuForBadges:(unsigned long long)arg1;
- (id)_menuForBadges:(unsigned long long)arg1;
- (bool)_needsUpdate;
- (bool)_needsUpdateBadgeInfo;
- (bool)_needsUpdateBadgeProvider;
- (bool)_needsUpdateBadgeView;
- (void)_setBadgeInfo:(struct PXAssetBadgeInfo { unsigned long long x1; double x2; long long x3; long long x4; })arg1;
- (void)_setContentWidth:(double)arg1;
- (void)_setNeedsUpdate;
- (void)_setNeedsUpdateBadgeInfo:(bool)arg1;
- (void)_setNeedsUpdateBadgeProvider:(bool)arg1;
- (void)_setNeedsUpdateBadgeView:(bool)arg1;
- (void)_setOverContent:(bool)arg1;
- (void)_updateBadgeInfoIfNeeded;
- (void)_updateBadgeProviderIfNeeded;
- (void)_updateBadgeViewIfNeeded;
- (void)_updateIfNeeded;
- (void)applyLayoutInfo:(id)arg1;
- (void)assetBadgeView:(id)arg1 dismissAnyPresentedViewControllerWithCompletion:(id /* block */)arg2;
- (id)assetBadgeView:(id)arg1 menuForBadges:(unsigned long long)arg2;
- (id)assetViewModel;
- (void)becomeReusable;
- (id)delegate;
- (void)didChangeActive;
- (bool)isBadgeVisible;
- (id)livePhotoBadgeContainerView;
- (id)loadView;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)prepareForReuse;
- (void)setAssetViewModel:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)set_badgeInfoProvider:(id)arg1;
- (id)undoManagerForActionPerformer:(id)arg1;
- (void)viewDidLoad;
- (void)viewModel:(id)arg1 didChange:(id)arg2;

@end
