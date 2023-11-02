
@protocol MSASAssetDownloaderDelegate <NSObject>

@required

- (void)MSASAssetDownloader:(MSASAssetDownloader *)arg1 didFinishDownloadingAsset:(MSAsset *)arg2 inAlbumGUID:(NSString *)arg3 error:(NSError *)arg4;
- (void)MSASAssetDownloader:(MSASAssetDownloader *)arg1 willBeginBatchCount:(unsigned long long)arg2;
- (void)MSASAssetDownloaderDidFinishBatch:(MSASAssetDownloader *)arg1;

@end