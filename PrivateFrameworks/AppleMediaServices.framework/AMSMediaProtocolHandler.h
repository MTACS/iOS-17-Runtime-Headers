
@interface AMSMediaProtocolHandler : AMSURLProtocolHandler {
    <AMSMediaTokenServiceProtocol> * _tokenService;
}

@property (nonatomic, readonly) <AMSMediaTokenServiceProtocol> *tokenService;

- (void).cxx_destruct;
- (void)handleResponse:(id)arg1 task:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)initWithTokenService:(id)arg1;
- (void)reconfigureNewRequest:(id)arg1 originalTask:(id)arg2 redirect:(bool)arg3 error:(id*)arg4;
- (id)tokenService;

@end
