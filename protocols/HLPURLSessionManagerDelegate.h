
@protocol HLPURLSessionManagerDelegate <NSObject>

@optional

- (void)URLSessionManagerDidReceiveChallenge:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSURLAuthenticationChallenge *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, NSURLCredential *, void*
- (bool)URLSessionManagerHasConnection:(HLPURLSessionManager *)arg1;
- (void)URLSessionManagerRequestCompleted:(HLPURLSessionManager *)arg1 sessionTask:(HLPURLSessionTask *)arg2;
- (void)URLSessionManagerRequestResumed:(HLPURLSessionManager *)arg1 sessionTask:(HLPURLSessionTask *)arg2;
- (NSURLSessionConfiguration *)URLSessionManagerSessionConfiguration:(HLPURLSessionManager *)arg1;
- (NSOperationQueue *)URLSessionManagerSessionOperationQueue:(HLPURLSessionManager *)arg1;
- (bool)URLSessionManagerShouldCoalesceRequest:(HLPURLSessionManager *)arg1;

@end
