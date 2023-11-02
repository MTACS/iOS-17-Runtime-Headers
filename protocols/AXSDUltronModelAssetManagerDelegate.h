
@protocol AXSDUltronModelAssetManagerDelegate <NSObject>

@required

- (void)assetsNotReadyForUltronManager:(AXUltronModelAssetManager *)arg1;
- (void)assetsReadyForUltronManager:(AXUltronModelAssetManager *)arg1;

@optional

- (void)assetManager:(AXUltronModelAssetManager *)arg1 didFinishRefreshingAssets:(NSArray *)arg2 wasSuccessful:(bool)arg3 error:(NSError *)arg4;
- (void)assetManager:(AXUltronModelAssetManager *)arg1 totalSizeExpected:(long long)arg2 downloadProgressTotalWritten:(long long)arg3 remainingTimeExpected:(double)arg4 isStalled:(bool)arg5;

@end
