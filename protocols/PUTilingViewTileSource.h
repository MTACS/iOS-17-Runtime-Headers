
@protocol PUTilingViewTileSource <NSObject>

@required

- (PUTileController *)tilingView:(PUTilingView *)arg1 tileControllerWithIndexPath:(NSIndexPath *)arg2 kind:(NSString *)arg3 dataSource:(PUTilingDataSource *)arg4;

@end
