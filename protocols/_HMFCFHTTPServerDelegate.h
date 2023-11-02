
@protocol _HMFCFHTTPServerDelegate <NSObject>

@required

- (void)server:(_HMFCFHTTPServer *)arg1 didCloseConnection:(_HMFCFHTTPServerConnection *)arg2;
- (void)server:(_HMFCFHTTPServer *)arg1 didOpenConnection:(_HMFCFHTTPServerConnection *)arg2;
- (void)serverDidInvalidate:(_HMFCFHTTPServer *)arg1;

@end
