
@protocol HUComfortSoundsAssetManagerDelegate <NSObject>

@required

- (void)assetDownloadDidUpdate;
- (void)availableAssetsDidUpdate;

@end
