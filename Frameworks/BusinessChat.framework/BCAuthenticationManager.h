
@interface BCAuthenticationManager : NSObject <NSURLSessionDelegate> {
    <BCOAuth2RequestProtocol> * _authenticationRequest;
}

@property (nonatomic, retain) <BCOAuth2RequestProtocol> *authenticationRequest;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)authenticationRequest;
- (void)fetchTokenWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithAuthenticationRequest:(id)arg1;
- (void)setAuthenticationRequest:(id)arg1;

@end
