
@interface AAUIProxiedTermsRemoteUI : AAUIGenericTermsRemoteUI {
    <AKAnisetteServiceProtocol> * _anisetteDataProvider;
    NSString * _appProvidedContext;
    AKDevice * _proxiedDevice;
}

- (void).cxx_destruct;
- (void)_addHeadersToRequest:(id)arg1;
- (void)_agreeToTermsWithURLString:(id)arg1 preferPassword:(bool)arg2 completion:(id /* block */)arg3;
- (id)_authContextForRenewCredentials;
- (void)_sendAcceptedTermsInfo:(id)arg1;
- (id)_sessionConfiguration;
- (id)initWithAuthResults:(id)arg1;
- (id)initWithAuthResults:(id)arg1 proxiedDevice:(id)arg2 anisetteDataProvider:(id)arg3 appProvidedContext:(id)arg4 termsEntries:(id)arg5;
- (id)initWithAuthResults:(id)arg1 proxiedDevice:(id)arg2 appProvidedContext:(id)arg3;

@end
