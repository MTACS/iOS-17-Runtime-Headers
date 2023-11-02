
@protocol NDDownloadConsumer <NSObject>

@required

- (void)downloadFinishedForRequest:(NDDownloadRequest *)arg1 error:(NSError *)arg2;
- (void)downloadProgressedForRequest:(NDDownloadRequest *)arg1 contentArchive:(FCContentArchive *)arg2;
- (void)downloadProgressedForRequest:(NDDownloadRequest *)arg1 progress:(double)arg2;

@end
