
@protocol VUIMediaEntityAssetController <NSObject>

@required

- (void)cancelAndRemoveDownload;
- (void)cancelKeyFetch;
- (NSObject<OS_dispatch_queue> *)completionDispatchQueue;
- (bool)contentAllowsCellularDownload;
- (void)deleteAndRedownloadAllowingCellular:(void *)arg1 quality:(void *)arg2 shouldMarkAsDeletedOnCancellationOrFailure:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: bool, long long, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)fetchNewKeysForDownloadedVideo;
- (void)invalidate;
- (void)pauseDownload;
- (void)resumeDownload;
- (void)setCompletionDispatchQueue:(NSObject<OS_dispatch_queue> *)arg1;
- (void)startDownloadAllowingCellular:(void *)arg1 quality:(void *)arg2 shouldMarkAsDeletedOnCancellationOrFailure:(void *)arg3 preferEnhancedDownload:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 11: bool, long long, bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (VUIMediaEntityAssetControllerState *)state;
- (bool)supportsRedownloadingContent;
- (bool)supportsStartingDownload;

@optional

- (bool)allowsManualDownloadRenewal;
- (NSString *)brandID;
- (NSString *)brandName;
- (VUIContentRating *)contentRating;

@end
