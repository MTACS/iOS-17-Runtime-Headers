
@interface MSOAuthTokenHandler : NSObject {
    NSURLSessionConfiguration * _URLSessionConfiguration;
    CMSAuthenticationConfiguration * _authorizationConfiguration;
    CMSAuthenticationCredential * _authorizationCredential;
    CMSNetworkActivity * _networkActivity;
    CMSNetworkActivity * _parentNetworkActivity;
}

@property (readonly) NSURLSessionConfiguration *URLSessionConfiguration;
@property (readonly) CMSAuthenticationConfiguration *authorizationConfiguration;
@property (readonly) CMSAuthenticationCredential *authorizationCredential;
@property (nonatomic, retain) CMSNetworkActivity *networkActivity;
@property (nonatomic, readonly) CMSNetworkActivity *parentNetworkActivity;

+ (id)tokenHandlerWithConfiguration:(id)arg1 existingCredential:(id)arg2 URLSessionConfiguration:(id)arg3 parentNetworkActivity:(id)arg4;

- (void).cxx_destruct;
- (id)URLSessionConfiguration;
- (id)authorizationConfiguration;
- (id)authorizationCredential;
- (void)fetchTokens:(id /* block */)arg1;
- (id)initWithConfiguration:(id)arg1 existingCredential:(id)arg2 URLSessionConfiguration:(id)arg3 parentNetworkActivity:(id)arg4;
- (id)networkActivity;
- (id)parentNetworkActivity;
- (void)performTokenFetchTaskWithSession:(id)arg1 bodyString:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)performTokenGrantRequestWithSession:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)performTokenRefreshWithSession:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setNetworkActivity:(id)arg1;

@end
