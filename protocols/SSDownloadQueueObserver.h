
@protocol SSDownloadQueueObserver <NSObject>

@required

- (void)downloadQueue:(SSDownloadQueue *)arg1 changedWithRemovals:(NSSet *)arg2;

@optional

- (void)downloadQueue:(SSDownloadQueue *)arg1 downloadStatusChangedAtIndex:(long long)arg2;
- (void)downloadQueueNetworkUsageChanged:(SSDownloadQueue *)arg1;

@end
