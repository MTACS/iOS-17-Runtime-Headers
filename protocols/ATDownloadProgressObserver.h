
@protocol ATDownloadProgressObserver <NSObject>

@required

- (void)atcDidDownloadAsset:(ATAsset *)arg1 withError:(NSError *)arg2;
- (void)atcDidEnqueueAsset:(ATAsset *)arg1;
- (void)atcDidUpdateAsset:(ATAsset *)arg1 withProgress:(float)arg2;
- (void)atcDidUpdateDownloadStateForAssets:(NSArray *)arg1;

@end
