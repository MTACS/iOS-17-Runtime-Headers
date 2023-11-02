
@protocol BADownloaderExtensionSyncProtocol <NSObject>

@required

- (void)backgroundDownload:(void *)arg1 failedWithError:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: BADownload *, NSError *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)backgroundDownload:(void *)arg1 finishedWithSandboxToken:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: BADownload *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)downloadsForRequest:(void *)arg1 manifestURL:(void *)arg2 manifestToken:(void *)arg3 extensionInfo:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 11: long long, NSURL *, NSString *, BAAppExtensionInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSSet *, void*
- (void)extensionWillTerminate;
- (void)receivedAuthenticationChallenge:(void *)arg1 download:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSURLAuthenticationChallenge *, BADownload *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, NSURLCredential *, void*
- (void)wakeupForTokenWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
