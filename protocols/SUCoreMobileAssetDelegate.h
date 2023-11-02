
@protocol SUCoreMobileAssetDelegate <NSObject>

@optional

- (void)maAnomaly:(NSError *)arg1;
- (void)maAssetRemoveFailed:(NSError *)arg1;
- (void)maAssetRemoved;
- (void)maDownloadFailed:(NSError *)arg1;
- (void)maDownloadProgress:(SUCoreProgress *)arg1;
- (void)maDownloadStalled:(SUCoreProgress *)arg1;
- (void)maDownloaded:(SUCoreProgress *)arg1;

@end
