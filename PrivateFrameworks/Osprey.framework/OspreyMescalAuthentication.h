
@interface OspreyMescalAuthentication : NSObject <OspreyDeviceAuthenticating> {
    OspreyAuthService * _authService;
    NSData * _certificateData;
    OspreyConnectionPreferences * _connectionPreferences;
    OspreyGRPCChannel * _grpcChannel;
    OspreyMescalSession * _mescalSession;
    NSDate * _sessionExpiration;
    unsigned long long  _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_continuePreparationWithCompletion:(id /* block */)arg1;
- (unsigned long long)authenticationStrategyVersion;
- (id)initWithChannel:(id)arg1 connectionPreferences:(id)arg2;
- (bool)isSessionExpired;
- (id)mescalSession;
- (void)moveToState:(unsigned long long)arg1;
- (void)signData:(id)arg1 success:(id /* block */)arg2 failure:(id /* block */)arg3;
- (unsigned long long)state;

@end
