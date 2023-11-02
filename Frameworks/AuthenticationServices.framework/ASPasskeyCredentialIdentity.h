
@interface ASPasskeyCredentialIdentity : NSObject <ASCredentialIdentity, ASCredentialIdentityPrivate, NSCopying, NSSecureCoding> {
    NSData * _credentialID;
    SFExternalCredentialIdentityStoreIdentifier * _credentialIdentityStoreIdentifier;
    long long  _rank;
    NSString * _recordIdentifier;
    NSString * _relyingPartyIdentifier;
    NSData * _userHandle;
    NSString * _userName;
}

@property (nonatomic, readonly, copy) NSData *credentialID;
@property (nonatomic, readonly) SFExternalCredentialIdentityStoreIdentifier *credentialIdentityStoreIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long rank;
@property (nonatomic, readonly, copy) NSString *recordIdentifier;
@property (nonatomic, readonly, copy) NSString *relyingPartyIdentifier;
@property (nonatomic, readonly) ASCredentialServiceIdentifier *serviceIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *user;
@property (nonatomic, readonly, copy) NSData *userHandle;
@property (nonatomic, readonly, copy) NSString *userName;

+ (id)identityWithRelyingPartyIdentifier:(id)arg1 userName:(id)arg2 credentialID:(id)arg3 userHandle:(id)arg4 recordIdentifier:(id)arg5;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithLoginChoice:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)credentialID;
- (id)credentialIdentityStoreIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRelyingPartyIdentifier:(id)arg1 userName:(id)arg2 credentialID:(id)arg3 userHandle:(id)arg4 recordIdentifier:(id)arg5;
- (long long)rank;
- (id)recordIdentifier;
- (id)relyingPartyIdentifier;
- (id)serviceIdentifier;
- (void)setRank:(long long)arg1;
- (id)user;
- (id)userHandle;
- (id)userName;

@end
