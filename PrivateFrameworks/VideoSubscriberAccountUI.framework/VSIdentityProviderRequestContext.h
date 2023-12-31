
@interface VSIdentityProviderRequestContext : NSObject {
    bool  _attemptedVerificationStateReset;
    VSIdentityProviderRequest * _request;
}

@property (nonatomic) bool attemptedVerificationStateReset;
@property (nonatomic, retain) VSIdentityProviderRequest *request;

- (void).cxx_destruct;
- (bool)attemptedVerificationStateReset;
- (id)request;
- (void)setAttemptedVerificationStateReset:(bool)arg1;
- (void)setRequest:(id)arg1;

@end
