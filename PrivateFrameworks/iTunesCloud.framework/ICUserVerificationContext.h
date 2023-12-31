
@interface ICUserVerificationContext : NSObject <NSCopying> {
    ACAccount * _ACAccount;
    ACAccountStore * _ACAccountStore;
    NSString * _debugReason;
    ICUserIdentityProperties * _identityProperties;
    ICUserIdentityStore * _identityStore;
    long long  _interactionLevel;
    long long  _verificationStyle;
}

@property (nonatomic, retain) ACAccount *ACAccount;
@property (nonatomic, retain) ACAccountStore *ACAccountStore;
@property (nonatomic, copy) NSString *debugReason;
@property (nonatomic, copy) ICUserIdentityProperties *identityProperties;
@property (nonatomic, retain) ICUserIdentityStore *identityStore;
@property (nonatomic) long long interactionLevel;
@property (nonatomic) long long verificationStyle;

+ (id)contextWithACAccount:(id)arg1 accountStore:(id)arg2;

- (void).cxx_destruct;
- (id)ACAccount;
- (id)ACAccountStore;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugReason;
- (id)identityProperties;
- (id)identityStore;
- (long long)interactionLevel;
- (void)setACAccount:(id)arg1;
- (void)setACAccountStore:(id)arg1;
- (void)setDebugReason:(id)arg1;
- (void)setIdentityProperties:(id)arg1;
- (void)setIdentityStore:(id)arg1;
- (void)setInteractionLevel:(long long)arg1;
- (void)setVerificationStyle:(long long)arg1;
- (long long)verificationStyle;

@end
