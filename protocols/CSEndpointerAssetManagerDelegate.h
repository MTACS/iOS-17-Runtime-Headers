
@protocol CSEndpointerAssetManagerDelegate <NSObject>

@required

- (void)endpointerAssetManagerDidUpdateAsset:(CSAsset *)arg1;
- (void)endpointerAssetManagerDidUpdateOSDAsset:(CSAsset *)arg1;

@end
