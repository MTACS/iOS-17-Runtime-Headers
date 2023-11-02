
@interface LAACLCoder : NSObject {
    long long  _authType;
    NSMutableDictionary * _constraints;
    NSMutableDictionary * _credentials;
    long long  _fallbackAuthType;
}

- (void).cxx_destruct;
- (void)addConstraint:(id)arg1;
- (void)addCredential:(id)arg1 credentialType:(long long)arg2;
- (id)encode;
- (id)init;
- (void)setAuthenticationType:(long long)arg1;
- (void)setFallbackAuthenticationType:(long long)arg1;

@end
