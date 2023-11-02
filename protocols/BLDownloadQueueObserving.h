
@protocol BLDownloadQueueObserving <BLDownloadQueueNonUIObserving>

@optional

- (void)downloadQueue:(BLDownloadQueue *)arg1 downloadStates:(NSArray *)arg2 didCompleteWithError:(NSError *)arg3;
- (void)downloadQueue:(BLDownloadQueue *)arg1 downloadStatesDidChange:(NSArray *)arg2;
- (void)downloadQueue:(BLDownloadQueue *)arg1 purchaseAttemptForID:(NSString *)arg2 buyParams:(NSString *)arg3 isAudioBook:(bool)arg4;
- (void)downloadQueue:(BLDownloadQueue *)arg1 purchaseAttemptForRequest:(BLPurchaseRequest *)arg2;
- (void)downloadQueue:(BLDownloadQueue *)arg1 purchasedDidCompleteWithResponse:(BLPurchaseResponse *)arg2;
- (void)downloadQueue:(BLDownloadQueue *)arg1 purchasedDidFailWithResponse:(BLPurchaseResponse *)arg2;
- (void)downloadQueueDownloadsDidChange:(BLDownloadQueue *)arg1;

@end
