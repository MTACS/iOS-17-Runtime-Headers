
@protocol AXAssetControllerObserver <NSObject>

@optional

- (void)assetController:(AXAssetController *)arg1 asset:(AXAsset *)arg2 downloadProgressTotalWritten:(long long)arg3 totalExpected:(long long)arg4 isStalled:(bool)arg5 expectedTimeRemaining:(double)arg6;
- (void)assetController:(AXAssetController *)arg1 didFinishDownloadingAsset:(AXAsset *)arg2 wasSuccessful:(bool)arg3 error:(NSError *)arg4 hasRemainingDownloads:(bool)arg5;
- (void)assetController:(AXAssetController *)arg1 didFinishPurgingAssets:(NSArray *)arg2 wasSuccessful:(bool)arg3 error:(NSError *)arg4;
- (void)assetController:(AXAssetController *)arg1 didFinishRefreshingAssets:(NSArray *)arg2 wasSuccessful:(bool)arg3 error:(NSError *)arg4;
- (void)assetController:(AXAssetController *)arg1 didUpdateCatalogForPolicy:(AXAssetPolicy *)arg2 wasSuccessful:(bool)arg3 error:(NSError *)arg4;
- (void)assetController:(AXAssetController *)arg1 willUpdateCatalogForPolicy:(AXAssetPolicy *)arg2;

@end
