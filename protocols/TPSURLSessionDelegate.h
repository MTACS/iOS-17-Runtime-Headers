
@protocol TPSURLSessionDelegate <NSObject>

@optional

- (void)sessionTask:(TPSURLSessionTask *)arg1 didCompleteWithError:(NSError *)arg2;
- (void)sessionTask:(TPSURLSessionTask *)arg1 didFinishDownloadingToURL:(NSURL *)arg2;
- (void)sessionTask:(void *)arg1 didReceiveChallenge:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: TPSURLSessionTask *, NSURLAuthenticationChallenge *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, NSURLCredential *, void*
- (void)sessionTask:(void *)arg1 didReceiveResponse:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: TPSURLSessionTask *, NSURLResponse *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, bool, void*
- (void)sessionTask:(void *)arg1 willCacheResponse:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: TPSURLSessionTask *, NSCachedURLResponse *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSCachedURLResponse *, void*

@end
