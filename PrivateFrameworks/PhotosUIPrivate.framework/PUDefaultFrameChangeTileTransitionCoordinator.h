
@interface PUDefaultFrameChangeTileTransitionCoordinator : PUDefaultTileTransitionCoordinator {
    NSSet * __invisibleTileControllers;
    bool  _shouldCrossFadeTiles;
    PUTilingView * _tilingView;
}

@property (setter=_setInvisibleTileControllers:, nonatomic, copy) NSSet *_invisibleTileControllers;
@property (nonatomic) bool shouldCrossFadeTiles;
@property (nonatomic) PUTilingView *tilingView;

- (void).cxx_destruct;
- (id)_invisibleTileControllers;
- (bool)_isLayoutInfoVisible:(id)arg1;
- (id)_layoutInfoForDisappearedInvisibleTile:(id)arg1;
- (void)_setInvisibleTileControllers:(id)arg1;
- (id)finalLayoutInfoForDisappearingTileController:(id)arg1 fromLayoutInfo:(id)arg2;
- (id)initialLayoutInfoForAppearingTileController:(id)arg1 toLayoutInfo:(id)arg2;
- (void)prepare;
- (void)setShouldCrossFadeTiles:(bool)arg1;
- (void)setTilingView:(id)arg1;
- (bool)shouldCrossFadeTiles;
- (id)tilingView;
- (bool)useDoubleSidedTransitionForUpdatedTileController:(id)arg1 toLayoutInfo:(id)arg2;

@end
