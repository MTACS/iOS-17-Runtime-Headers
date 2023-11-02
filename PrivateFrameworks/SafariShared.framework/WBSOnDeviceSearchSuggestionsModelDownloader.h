
@interface WBSOnDeviceSearchSuggestionsModelDownloader : NSObject {
    id /* block */  _completionHandler;
    NSURLSessionDownloadTask * _downloadTask;
    WBSOnDeviceSearchSuggestionsModelEndpointFetcher * _endpointFetcher;
    NSURLSession * _urlSession;
}

- (void).cxx_destruct;
- (void)_callCompletionHandlerWithError:(id)arg1;
- (void)_cancelPendingDownload;
- (void)_downloadModelAtEndpoint:(id)arg1 forLocale:(id)arg2;
- (void)downloadOnDeviceSearchSuggestionsModelForLocale:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)init;

@end
