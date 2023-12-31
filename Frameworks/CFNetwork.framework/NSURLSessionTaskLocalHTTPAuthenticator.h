
@interface NSURLSessionTaskLocalHTTPAuthenticator : NSURLSessionTaskHTTPAuthenticator {
    <NSURLSessionAppleIDContext> * _externalAuthenticator;
}

@property (copy) <NSURLSessionAppleIDContext> *externalAuthenticator;

- (void)dealloc;
- (id)externalAuthenticator;
- (void)getAuthenticationHeadersForTask:(id)arg1 task:(id)arg2 response:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)initWithSessionAuthenticator:(id)arg1 statusCodes:(id)arg2;
- (void)setExternalAuthenticator:(id)arg1;

@end
