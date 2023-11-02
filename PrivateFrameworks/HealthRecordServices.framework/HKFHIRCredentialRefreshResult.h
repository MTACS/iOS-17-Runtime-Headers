
@interface HKFHIRCredentialRefreshResult : NSObject <NSCopying, NSSecureCoding> {
    HDFHIRAuthResponse * _authResponse;
    HKFHIRCredential * _credential;
    HKFHIRRequestTaskEndStates * _endStates;
    NSError * _error;
}

@property (nonatomic, readonly, copy) HDFHIRAuthResponse *authResponse;
@property (nonatomic, readonly, copy) HKFHIRCredential *credential;
@property (nonatomic, readonly, copy) HKFHIRRequestTaskEndStates *endStates;
@property (nonatomic, readonly, copy) NSError *error;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)authResponse;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)credential;
- (void)encodeWithCoder:(id)arg1;
- (id)endStates;
- (id)error;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithCredential:(id)arg1 authResponse:(id)arg2 endStates:(id)arg3 error:(id)arg4;
- (bool)isEqual:(id)arg1;

@end
