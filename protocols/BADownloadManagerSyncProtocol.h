
@protocol BADownloadManagerSyncProtocol <NSObject>

@required

- (void)downloadIdentifier:(void *)arg1 didFailWithError:(void *)arg2 wasHandled:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSError *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)downloadIdentifier:(void *)arg1 didReceiveChallenge:(void *)arg2 authChallengeHandler:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSURLAuthenticationChallenge *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, NSURLCredential *, void*
- (void)downloadIdentifier:(NSString *)arg1 didWriteBytes:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (void)downloadIdentifierDidBegin:(NSString *)arg1;
- (void)downloadIdentifierDidFinish:(void *)arg1 sandboxExtensionToken:(void *)arg2 wasHandled:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)downloadIdentifierDidPause:(NSString *)arg1;
- (void)removeDownloadIdentifier:(NSString *)arg1;
- (void)syncDownloads:(NSArray *)arg1;

@end
