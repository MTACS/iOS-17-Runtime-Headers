
@protocol DMCHTTPAuthenticator <NSObject>

@required

- (bool)authenticateRequest:(NSMutableURLRequest *)arg1 error:(id*)arg2;

@optional

- (bool)prepareTask:(NSURLSessionTask *)arg1 error:(id*)arg2;

@end
