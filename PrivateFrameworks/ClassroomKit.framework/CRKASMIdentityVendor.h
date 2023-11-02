
@interface CRKASMIdentityVendor : NSObject {
    NSString * _commonNamePrefix;
    CRKASMCredentialStore * _credentialStore;
    NSString * _userIdentifier;
}

@property (nonatomic, readonly, copy) NSString *commonNamePrefix;
@property (nonatomic, readonly) CRKASMCredentialStore *credentialStore;
@property (nonatomic, readonly) <CRKIdentity> *identity;
@property (nonatomic, readonly, copy) NSString *userIdentifier;

- (void).cxx_destruct;
- (id)commonNamePrefix;
- (id)credentialStore;
- (id)description;
- (id)existingIdentity;
- (unsigned long long)hash;
- (id)identity;
- (id)initWithUserIdentifier:(id)arg1 commonNamePrefix:(id)arg2 credentialStore:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)makeIdentity;
- (id)makeIdentityAndAddToKeychain;
- (id)userIdentifier;

@end
