
@protocol SSDownloadManagerObserver <NSObject>

@optional

- (void)downloadManager:(SSDownloadManager *)arg1 downloadStatesDidChange:(NSArray *)arg2;
- (void)downloadManagerActiveDownloadsDidChange:(SSDownloadManager *)arg1;
- (void)downloadManagerDownloadsDidChange:(SSDownloadManager *)arg1;
- (void)downloadManagerNetworkUsageDidChange:(SSDownloadManager *)arg1;

@end
