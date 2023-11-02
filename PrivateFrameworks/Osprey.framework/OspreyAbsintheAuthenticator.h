
@interface OspreyAbsintheAuthenticator : NSObject <OspreyDeviceAuthenticating> {
    OspreyAuthService * _authService;
    OspreyGRPCChannel * _channel;
    OspreyConnectionPreferences * _connectionPreferences;
    struct NACContextOpaque_ { } * _nacContext;
    NSDate * _sessionExpireOn;
    NSData * _sessionInfo;
    long long  _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSData *sessionInfo;
@property (nonatomic) long long state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_ensureAuthenticatedWithCompletion:(id /* block */)arg1 failure:(id /* block */)arg2;
- (void)_initializeAbsintheClientWithCertificateData:(id)arg1 success:(id /* block */)arg2 fail:(id /* block */)arg3;
- (bool)_readyToSignClientData;
- (id)_signData:(id)arg1;
- (unsigned long long)authenticationStrategyVersion;
- (void)dealloc;
- (void)didMoveToState:(long long)arg1;
- (id)initWithChannel:(id)arg1 connectionPreferences:(id)arg2;
- (bool)isSessionInfoExpired;
- (id)sessionInfo;
- (void)setSessionInfo:(id)arg1;
- (void)setState:(long long)arg1;
- (void)signData:(id)arg1 success:(id /* block */)arg2 failure:(id /* block */)arg3;
- (long long)state;
- (void)willMoveToState:(long long)arg1;

@end
