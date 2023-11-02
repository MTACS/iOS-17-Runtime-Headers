
@protocol BLDownloadQueueNonUIObserving <NSObject>

@optional

- (void)downloadQueue:(BLDownloadQueueNonUI *)arg1 downloadStates:(NSArray *)arg2 didCompleteWithError:(NSError *)arg3;
- (void)downloadQueue:(BLDownloadQueueNonUI *)arg1 downloadStatesDidChange:(NSArray *)arg2;
- (void)downloadQueue:(BLDownloadQueueNonUI *)arg1 purchaseAttemptForID:(NSString *)arg2 buyParams:(NSString *)arg3 isAudioBook:(bool)arg4;
- (void)downloadQueue:(BLDownloadQueueNonUI *)arg1 purchaseAttemptForRequest:(BLPurchaseRequest *)arg2;
- (void)downloadQueue:(BLDownloadQueueNonUI *)arg1 purchasedDidCompleteWithResponse:(BLPurchaseResponse *)arg2;
- (void)downloadQueue:(BLDownloadQueueNonUI *)arg1 purchasedDidFailWithResponse:(BLPurchaseResponse *)arg2;
- (void)downloadQueueDownloadsDidChange:(BLDownloadQueueNonUI *)arg1;

@end
