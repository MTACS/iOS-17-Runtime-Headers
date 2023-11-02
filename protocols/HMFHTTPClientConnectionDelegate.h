
@protocol HMFHTTPClientConnectionDelegate <NSObject>

@required

- (void)connection:(HMFHTTPClientConnection *)arg1 didReceiveRequest:(HMFHTTPRequest *)arg2;

@optional

- (void)connection:(HMFHTTPClientConnection *)arg1 didCloseWithError:(NSError *)arg2;

@end
