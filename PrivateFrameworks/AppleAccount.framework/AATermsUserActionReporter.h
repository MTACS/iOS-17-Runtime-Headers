
@interface AATermsUserActionReporter : NSObject {
    ACAccount * _account;
    AKAppleIDAuthenticationController * _authController;
    <AARemoteServerProtocol> * _remoteServer;
    unsigned long long  _requestCount;
    NSDictionary * _requestDictionary;
}

- (void).cxx_destruct;
- (id)_authController;
- (void)_createRequestForAccount:(id)arg1 requestHandler:(id /* block */)arg2;
- (id)initWithAccount:(id)arg1 parameters:(id)arg2;
- (id)initWithAccount:(id)arg1 parameters:(id)arg2 remoteServer:(id)arg3;
- (void)reportEvent;

@end
