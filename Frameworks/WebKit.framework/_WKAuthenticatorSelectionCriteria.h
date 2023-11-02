
@interface _WKAuthenticatorSelectionCriteria : NSObject {
    long long  _authenticatorAttachment;
    bool  _requireResidentKey;
    long long  _residentKey;
    long long  _userVerification;
}

@property (nonatomic) long long authenticatorAttachment;
@property (nonatomic) bool requireResidentKey;
@property (nonatomic) long long residentKey;
@property (nonatomic) long long userVerification;

- (long long)authenticatorAttachment;
- (id)init;
- (bool)requireResidentKey;
- (long long)residentKey;
- (void)setAuthenticatorAttachment:(long long)arg1;
- (void)setRequireResidentKey:(bool)arg1;
- (void)setResidentKey:(long long)arg1;
- (void)setUserVerification:(long long)arg1;
- (long long)userVerification;

@end
