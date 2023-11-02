
@interface HKFHIRCredential : HKOAuth2Credential <NSCopying, NSSecureCoding> {
    NSString * _patientID;
}

@property (nonatomic, readonly, copy) NSString *patientID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAccessToken:(id)arg1 refreshToken:(id)arg2 expiration:(id)arg3 requestedScopeString:(id)arg4 scopes:(id)arg5;
- (id)initWithAccessToken:(id)arg1 refreshToken:(id)arg2 patientID:(id)arg3 expiration:(id)arg4 requestedScopeString:(id)arg5 scopeString:(id)arg6;
- (id)initWithAccessToken:(id)arg1 refreshToken:(id)arg2 patientID:(id)arg3 expiration:(id)arg4 requestedScopeString:(id)arg5 scopes:(id)arg6;
- (id)initWithCoder:(id)arg1;
- (bool)isEqualToCredential:(id)arg1 epsilonExpiration:(double)arg2;
- (id)patientID;

@end
