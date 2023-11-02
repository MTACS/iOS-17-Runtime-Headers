
@interface PUSingleAssetLayoutTransitionCoordinator : PUTileTransitionCoordinator {
    <PUTilingCoordinateSystem> * _fixedCoordinateSystem;
}

@property (nonatomic, retain) <PUTilingCoordinateSystem> *fixedCoordinateSystem;

- (void).cxx_destruct;
- (id)_layoutInfoWithDefaultDisappearance:(id)arg1;
- (id)finalLayoutInfoForDisappearingTileController:(id)arg1 fromLayoutInfo:(id)arg2;
- (id)fixedCoordinateSystem;
- (id)initialLayoutInfoForAppearingTileController:(id)arg1 toLayoutInfo:(id)arg2;
- (void)setFixedCoordinateSystem:(id)arg1;

@end
