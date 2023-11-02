
@protocol MTExternalFeedDownloaderDelegate <NSObject>

@required

- (void)didDownloadFeedWithError:(NSError *)arg1 data:(NSData *)arg2 task:(NSURLSessionTask *)arg3 requestedUrl:(NSURL *)arg4 useBackgroundFetch:(bool)arg5;
- (void)didRestoreFeedUrlTask:(NSURL *)arg1;
- (void)performOnFeedProcessingQueue:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
