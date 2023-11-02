
@protocol PUTilingViewTileUseDelegate <NSObject>

@optional

- (void)tilingView:(PUTilingView *)arg1 didStopUsingTileController:(PUTileController *)arg2;
- (void)tilingView:(PUTilingView *)arg1 willStartUsingTileController:(PUTileController *)arg2;
- (void)tilingViewDidEndAnimatingTileControllers:(PUTilingView *)arg1;
- (void)tilingViewDidUpdateTileControllers:(PUTilingView *)arg1;

@end
