
@interface PUDefaultLayoutToLayoutTileTransitionCoordinator : PUDefaultTileTransitionCoordinator {
    bool  __isZoomingIn;
    bool  __needsUpdateZoomingIn;
    PUAssetReference * _anchorAssetReference;
    PUTilingLayoutTransitionContext * _context;
    <PUTilingCoordinateSystem> * _fixedCoordinateSystem;
    PUTilingLayout * _fromLayout;
    PUTilingLayout * _toLayout;
}

@property (setter=_setZoomingIn:, nonatomic) bool _isZoomingIn;
@property (setter=_setNeedsUpdateZoomingIn:, nonatomic) bool _needsUpdateZoomingIn;
@property (nonatomic, retain) PUAssetReference *anchorAssetReference;
@property (nonatomic, retain) PUTilingLayoutTransitionContext *context;
@property (nonatomic, retain) <PUTilingCoordinateSystem> *fixedCoordinateSystem;
@property (nonatomic, retain) PUTilingLayout *fromLayout;
@property (nonatomic, retain) PUTilingLayout *toLayout;

- (void).cxx_destruct;
- (id)_centerTileLayoutInfoWithDefaultDisappearance:(id)arg1 layoutWhereCenterTileExists:(id)arg2 layoutWhereCenterTileDisappeared:(id)arg3;
- (void)_invalidateIsZoomingIn;
- (bool)_isCenterTileLayoutInfo:(id)arg1;
- (bool)_isZoomingIn;
- (bool)_needsUpdateZoomingIn;
- (void)_setNeedsUpdateZoomingIn:(bool)arg1;
- (void)_setZoomingIn:(bool)arg1;
- (void)_updateIsZoomingInIfNeeded;
- (long long)_zoomLevelForLayout:(id)arg1;
- (id)anchorAssetReference;
- (id)context;
- (id)description;
- (id)finalLayoutInfoForDisappearingTileController:(id)arg1 fromLayoutInfo:(id)arg2;
- (id)fixedCoordinateSystem;
- (id)fromLayout;
- (id)initialLayoutInfoForAppearingTileController:(id)arg1 toLayoutInfo:(id)arg2;
- (id)optionsForAnimatingTileController:(id)arg1 toLayoutInfo:(id)arg2 withAnimationType:(long long)arg3;
- (void)setAnchorAssetReference:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setFixedCoordinateSystem:(id)arg1;
- (void)setFromLayout:(id)arg1;
- (void)setToLayout:(id)arg1;
- (id)toLayout;
- (bool)useDoubleSidedTransitionForUpdatedTileController:(id)arg1 toLayoutInfo:(id)arg2;

@end