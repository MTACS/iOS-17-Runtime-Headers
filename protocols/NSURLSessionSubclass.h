
@protocol NSURLSessionSubclass <NSObject>

@required

- (NSURLSessionAVAggregateAssetDownloadTask *)AVAggregateAssetDownloadTaskForURLAsset:(AVURLAsset *)arg1 mediaSelections:(NSArray *)arg2 assetTitle:(NSString *)arg3 assetArtworkData:(NSData *)arg4 options:(NSDictionary *)arg5;
- (NSURLSessionAVAssetDownloadTask *)AVAssetDownloadTaskForURLAsset:(AVURLAsset *)arg1 assetTitle:(NSString *)arg2 assetArtworkData:(NSData *)arg3 options:(NSDictionary *)arg4 downloadConfiguration:(AVAssetDownloadConfiguration *)arg5;
- (NSURLSessionAVAssetDownloadTask *)AVAssetDownloadTaskForURLAsset:(AVURLAsset *)arg1 destinationURL:(NSURL *)arg2 options:(NSDictionary *)arg3;
- (NSURLSessionAVAssetDownloadTask *)_AVAssetDownloadTaskForURL:(NSURL *)arg1 destinationURL:(NSURL *)arg2 options:(NSDictionary *)arg3;
- (NSURLSessionDataTask *)_dataTaskWithTaskForClass:(__NSCFTaskForClass *)arg1;
- (NSURLSessionDownloadTask *)_downloadTaskWithTaskForClass:(__NSCFTaskForClass *)arg1;
- (void)_onqueue_completeInvalidation:(bool)arg1;
- (void)_onqueue_flushWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)_onqueue_getTasksWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)_onqueue_resetStorageWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (NSURLSessionUploadTask *)_uploadTaskWithTaskForClass:(__NSCFTaskForClass *)arg1;
- (NSURLSessionWebSocketTask *)webSocketTaskForRequest:(NSMutableURLRequest *)arg1;
- (NSURLSessionWebSocketTask *)webSocketTaskForURL:(NSURL *)arg1 protocols:(NSArray *)arg2;

@end
