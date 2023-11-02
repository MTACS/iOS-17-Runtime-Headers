
@interface ASPasswordCredentialIdentity : NSObject <ASCredentialIdentity, ASCredentialIdentityPrivate, NSCopying, NSSecureCoding> {
    SFExternalCredentialIdentityStoreIdentifier * _credentialIdentityStoreIdentifier;
    long long  _rank;
    NSString * _recordIdentifier;
    ASCredentialServiceIdentifier * _serviceIdentifier;
    NSString * _user;
}

@property (nonatomic, readonly) SFExternalCredentialIdentityStoreIdentifier *credentialIdentityStoreIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long rank;
@property (nonatomic, readonly, copy) NSString *recordIdentifier;
@property (nonatomic, readonly) ASCredentialServiceIdentifier *serviceIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *user;

+ (id)identityWithServiceIdentifier:(id)arg1 user:(id)arg2 recordIdentifier:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithFoundationCredentialIdentity:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)credentialIdentityStoreIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithServiceIdentifier:(id)arg1 user:(id)arg2 recordIdentifier:(id)arg3;
- (long long)rank;
- (id)recordIdentifier;
- (id)serviceIdentifier;
- (void)setRank:(long long)arg1;
- (id)user;

@end
