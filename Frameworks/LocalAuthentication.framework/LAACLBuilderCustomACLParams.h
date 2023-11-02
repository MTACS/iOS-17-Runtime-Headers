
@interface LAACLBuilderCustomACLParams : NSObject {
    NSDictionary * _apConstraints;
    long long  _authType;
    NSDictionary * _credentials;
    long long  _fallbackAuthType;
}

@property (nonatomic, retain) NSDictionary *apConstraints;
@property (nonatomic) long long authType;
@property (nonatomic, retain) NSDictionary *credentials;
@property (nonatomic) long long fallbackAuthType;

- (void).cxx_destruct;
- (id)apConstraints;
- (long long)authType;
- (id)credentials;
- (long long)fallbackAuthType;
- (id)init;
- (void)setApConstraints:(id)arg1;
- (void)setAuthType:(long long)arg1;
- (void)setCredentials:(id)arg1;
- (void)setFallbackAuthType:(long long)arg1;

@end
