
@protocol MFMailWebProcessDelegate <NSObject>

@required

- (void)webProcessDidBlockLoadingResourceWithURL:(NSURL *)arg1;
- (void)webProcessDidCreateBrowserContextControllerLoadDelegate;
- (void)webProcessDidFailLoadingResourceWithURL:(NSURL *)arg1;
- (void)webProcessDidFinishDocumentLoadForURL:(NSURL *)arg1 andRequestedRemoteURLs:(NSArray *)arg2;
- (void)webProcessDidFinishLoadForURL:(NSURL *)arg1;
- (void)webProcessFailedToLoadResourceWithProxyForURL:(NSURL *)arg1 failureReason:(long long)arg2;

@end
