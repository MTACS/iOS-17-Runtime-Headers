
@protocol CLSAssetDownloadObservable <NSObject>

@required

- (void)addDownloadObserver:(CLSAssetDownloadObserver *)arg1;
- (NSError *)downloadError;
- (double)fractionDownloaded;
- (bool)isDownloaded;
- (void)removeDownloadObserver:(CLSAssetDownloadObserver *)arg1;

@end
