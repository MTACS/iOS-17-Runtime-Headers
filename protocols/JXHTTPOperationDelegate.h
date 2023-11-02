
@protocol JXHTTPOperationDelegate <NSObject>

@optional

- (NSCachedURLResponse *)httpOperation:(JXHTTPOperation *)arg1 willCacheResponse:(NSCachedURLResponse *)arg2;
- (NSURLRequest *)httpOperation:(JXHTTPOperation *)arg1 willSendRequest:(NSURLRequest *)arg2 redirectResponse:(NSURLResponse *)arg3;
- (void)httpOperationDidFail:(JXHTTPOperation *)arg1;
- (void)httpOperationDidFinishLoading:(JXHTTPOperation *)arg1;
- (void)httpOperationDidReceiveData:(JXHTTPOperation *)arg1;
- (void)httpOperationDidReceiveResponse:(JXHTTPOperation *)arg1;
- (void)httpOperationDidSendData:(JXHTTPOperation *)arg1;
- (void)httpOperationDidStart:(JXHTTPOperation *)arg1;
- (void)httpOperationWillNeedNewBodyStream:(JXHTTPOperation *)arg1;
- (void)httpOperationWillSendRequestForAuthenticationChallenge:(JXHTTPOperation *)arg1;
- (void)httpOperationWillStart:(JXHTTPOperation *)arg1;

@end
