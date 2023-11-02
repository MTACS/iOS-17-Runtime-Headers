
@interface PKAuthenticatorEvaluationResponse : NSObject {
    bool  _biometricMatch;
    NSData * _credential;
    NSString * _kextBlacklistVersion;
    long long  _result;
}

@property (nonatomic, readonly) bool biometricMatch;
@property (nonatomic, readonly, copy) NSData *credential;
@property (nonatomic, copy) NSString *kextBlacklistVersion;
@property (nonatomic, readonly) long long result;

+ (id)responseWithResult:(long long)arg1;
+ (id)responseWithResult:(long long)arg1 biometricMatch:(bool)arg2 credential:(id)arg3;

- (void).cxx_destruct;
- (bool)biometricMatch;
- (id)credential;
- (id)kextBlacklistVersion;
- (long long)result;
- (void)setKextBlacklistVersion:(id)arg1;

@end
