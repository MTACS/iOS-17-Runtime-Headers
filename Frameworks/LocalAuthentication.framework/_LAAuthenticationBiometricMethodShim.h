
@interface _LAAuthenticationBiometricMethodShim : NSObject <LAAuthenticationBiometricMethodObserver> {
    LAAuthenticationBiometricMethod * _biometricMethod;
    LAAuthenticationMethodResult * _biometricMethodResult;
    LAAuthenticationBiometricMethodState * _biometricMethodState;
}

@property (nonatomic, readonly) LAAuthenticationBiometricMethod *biometricMethod;
@property (readonly) LAAuthenticationMethodResult *biometricMethodResult;
@property (readonly) LAAuthenticationBiometricMethodState *biometricMethodState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)authenticationMethod:(id)arg1 didAuthenticateWithResult:(id)arg2;
- (void)authenticationMethod:(id)arg1 didChangeState:(id)arg2;
- (void)authenticationMethod:(id)arg1 didStartWithState:(id)arg2;
- (id)biometricMethod;
- (id)biometricMethodResult;
- (id)biometricMethodState;
- (id)init;

@end
