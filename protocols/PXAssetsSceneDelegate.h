
@protocol PXAssetsSceneDelegate <NSObject>

@required

- (PXAssetsTilingLayout *)assetsScene:(PXAssetsScene *)arg1 layoutForDataSource:(PXAssetsDataSource *)arg2;

@optional

- (void)assetsScene:(PXAssetsScene *)arg1 didTransitionToDataSource:(PXAssetsDataSource *)arg2;
- (<PXTileIdentifierConverter> *)assetsScene:(PXAssetsScene *)arg1 tileIdentifierConverterForChange:(PXTilingChange *)arg2;
- (<PXTileTransitionAnimationCoordinator> *)assetsScene:(PXAssetsScene *)arg1 transitionAnimationCoordinatorForChange:(PXTilingChange *)arg2;
- (void)assetsScene:(PXAssetsScene *)arg1 willTransitionToDataSource:(PXAssetsDataSource *)arg2;

@end
