
@interface NSURLSessionTaskBackgroundHTTPAuthenticator : NSURLSessionTaskHTTPAuthenticator

- (void)dealloc;
- (void)getAuthenticationHeadersForTask:(id)arg1 task:(id)arg2 response:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)initWithStatusCodes:(id)arg1;

@end
