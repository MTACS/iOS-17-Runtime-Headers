
@protocol _WKDownloadDelegate <NSObject>

@optional

- (NSString *)_download:(_WKDownload *)arg1 decideDestinationWithSuggestedFilename:(NSString *)arg2 allowOverwrite:(bool*)arg3;
- (void)_download:(void *)arg1 decideDestinationWithSuggestedFilename:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: _WKDownload *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSString *, void*
- (void)_download:(_WKDownload *)arg1 didCreateDestination:(NSString *)arg2;
- (void)_download:(_WKDownload *)arg1 didFailWithError:(NSError *)arg2;
- (void)_download:(void *)arg1 didReceiveAuthenticationChallenge:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: _WKDownload *, NSURLAuthenticationChallenge *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, NSURLCredential *, void*
- (void)_download:(_WKDownload *)arg1 didReceiveData:(unsigned long long)arg2;
- (void)_download:(_WKDownload *)arg1 didReceiveResponse:(NSURLResponse *)arg2;
- (void)_download:(_WKDownload *)arg1 didReceiveServerRedirectToURL:(NSURL *)arg2;
- (void)_download:(_WKDownload *)arg1 didWriteData:(unsigned long long)arg2 totalBytesWritten:(unsigned long long)arg3 totalBytesExpectedToWrite:(unsigned long long)arg4;
- (bool)_download:(_WKDownload *)arg1 shouldDecodeSourceDataOfMIMEType:(NSString *)arg2;
- (void)_downloadDidCancel:(_WKDownload *)arg1;
- (void)_downloadDidFinish:(_WKDownload *)arg1;
- (void)_downloadDidStart:(_WKDownload *)arg1;
- (void)_downloadProcessDidCrash:(_WKDownload *)arg1;

@end
