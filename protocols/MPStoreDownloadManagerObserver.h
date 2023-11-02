
@protocol MPStoreDownloadManagerObserver <NSObject>

@optional

- (void)downloadManager:(MPStoreDownloadManager *)arg1 didAddActiveDownloads:(NSArray *)arg2 removeActiveDownloads:(NSArray *)arg3;
- (void)downloadManager:(MPStoreDownloadManager *)arg1 didAddDownloads:(NSArray *)arg2 removeDownloads:(NSArray *)arg3;
- (void)downloadManager:(MPStoreDownloadManager *)arg1 downloadDidFinish:(MPStoreDownload *)arg2;
- (void)downloadManager:(MPStoreDownloadManager *)arg1 downloadDidProgress:(MPStoreDownload *)arg2;
- (void)downloadManager:(MPStoreDownloadManager *)arg1 downloadPurchaseDidFinish:(MPStoreDownload *)arg2;
- (void)downloadManager:(MPStoreDownloadManager *)arg1 downloadsDidProgress:(NSArray *)arg2;
- (void)downloadManagerNetworkUsageDidChange:(MPStoreDownloadManager *)arg1;

@end
