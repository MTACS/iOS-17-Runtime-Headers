
@protocol HLPURLSessionDelegate <NSObject>

@optional

- (void)sessionTask:(HLPURLSessionTask *)arg1 didCompleteWithError:(NSError *)arg2;
- (void)sessionTask:(HLPURLSessionTask *)arg1 didFinishDownloadingToURL:(NSURL *)arg2;
- (void)sessionTask:(void *)arg1 didReceiveChallenge:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: HLPURLSessionTask *, NSURLAuthenticationChallenge *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, NSURLCredential *, void*
- (void)sessionTask:(void *)arg1 didReceiveResponse:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: HLPURLSessionTask *, NSURLResponse *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, bool, void*
- (void)sessionTask:(void *)arg1 willCacheResponse:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: HLPURLSessionTask *, NSCachedURLResponse *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSCachedURLResponse *, void*
- (void)sessionTask:(void *)arg1 willPerformHTTPRedirection:(void *)arg2 newRequest:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: HLPURLSessionTask *, NSHTTPURLResponse *, NSURLRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURLRequest *, void*

@end
