
@interface _SFDownloadDispatcher : NSObject <_WKDownloadDelegate> {
    NSMapTable * _activeDownloadMap;
    NSMapTable * _pendingDownloadMap;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedDownloadDispatcher;

- (void).cxx_destruct;
- (void)_download:(id)arg1 decideDestinationWithSuggestedFilename:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_download:(id)arg1 didFailWithError:(id)arg2;
- (void)_download:(id)arg1 didReceiveResponse:(id)arg2;
- (void)_download:(id)arg1 didWriteData:(unsigned long long)arg2 totalBytesWritten:(unsigned long long)arg3 totalBytesExpectedToWrite:(unsigned long long)arg4;
- (void)_downloadDidCancel:(id)arg1;
- (void)_downloadDidFinish:(id)arg1;
- (void)_downloadDidStart:(id)arg1;
- (void)_downloadProcessDidCrash:(id)arg1;
- (id)downloadFromWKDownload:(id)arg1 userInitiatedAction:(id)arg2;
- (id)init;
- (id)prepareForDownloadFromWebView:(id)arg1 request:(id)arg2 MIMEType:(id)arg3 uti:(id)arg4 userInitiatedAction:(id)arg5;
- (void)registerResumedDownload:(id)arg1;
- (void)setPendingDownload:(id)arg1 forWebView:(id)arg2;
- (id)startDownloadForCurrentURLFromWebView:(id)arg1;
- (id)startDownloadFromWebView:(id)arg1 URL:(id)arg2;

@end
