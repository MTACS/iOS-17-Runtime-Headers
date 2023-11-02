
@interface ASCPlatformPublicKeyCredentialLoginChoice : NSObject <ASCLoginChoiceProtocol> {
    NSData * _clientDataHash;
    SFPasskeyCredentialIdentity * _credentialIdentity;
    NSString * _customTitle;
    NSString * _displayName;
    NSString * _externalCredentialProviderBundleID;
    NSString * _externalCredentialProviderName;
    NSString * _groupID;
    WBSPublicKeyCredentialIdentifier * _identifier;
    bool  _isRegistrationRequest;
    NSString * _name;
    NSUUID * _publicKeyCredentialOperationUUID;
    NSString * _relyingPartyIdentifier;
    NSArray * _supportedAlgorithms;
    NSString * _userHandle;
    NSString * _userVerificationPreference;
}

@property (nonatomic, readonly, copy) NSData *clientDataHash;
@property (nonatomic, readonly, copy) SFPasskeyCredentialIdentity *credentialIdentity;
@property (nonatomic, readonly, copy) NSString *customTitle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (nonatomic, readonly, copy) NSString *externalCredentialProviderBundleID;
@property (nonatomic, readonly, copy) NSString *externalCredentialProviderName;
@property (nonatomic, readonly, copy) NSString *groupID;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) WBSPublicKeyCredentialIdentifier *identifier;
@property (nonatomic, readonly) bool isRegistrationRequest;
@property (nonatomic, readonly) bool isSharedCredential;
@property (nonatomic, readonly) unsigned long long loginChoiceKind;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSUUID *publicKeyCredentialOperationUUID;
@property (nonatomic, readonly, copy) NSString *relyingPartyIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSArray *supportedAlgorithms;
@property (nonatomic, readonly, copy) NSString *userHandle;
@property (nonatomic, readonly, copy) NSString *userVerificationPreference;
@property (nonatomic, readonly, copy) NSString *userVisibleName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initAsRegistrationChoice:(bool)arg1 withName:(id)arg2 displayName:(id)arg3 customTitle:(id)arg4 identifier:(id)arg5 userHandle:(id)arg6 relyingPartyIdentifier:(id)arg7 publicKeyCredentialOperationUUID:(id)arg8 externalCredentialProviderName:(id)arg9 externalCredentialProviderBundleID:(id)arg10 supportedAlgorithms:(id)arg11 groupID:(id)arg12;
- (id)clientDataHash;
- (id)credentialIdentity;
- (id)customTitle;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)externalCredentialProviderBundleID;
- (id)externalCredentialProviderName;
- (id)groupID;
- (id)identifier;
- (id)initRegistrationChoiceWithOptions:(id)arg1;
- (id)initRegistrationChoiceWithOptions:(id)arg1 externalCredentialProviderName:(id)arg2 externalCredentialProviderBundleID:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithCredentialIdentity:(id)arg1 publicKeyCredentialOperationUUID:(id)arg2 clientDataHash:(id)arg3 userVerificationPreference:(id)arg4 supportedAlgorithms:(id)arg5;
- (id)initWithName:(id)arg1 displayName:(id)arg2 customTitle:(id)arg3 identifier:(id)arg4 userHandle:(id)arg5 relyingPartyIdentifier:(id)arg6 publicKeyCredentialOperationUUID:(id)arg7 groupID:(id)arg8;
- (bool)isEqual:(id)arg1;
- (bool)isRegistrationRequest;
- (bool)isSharedCredential;
- (unsigned long long)loginChoiceKind;
- (id)name;
- (id)publicKeyCredentialOperationUUID;
- (id)relyingPartyIdentifier;
- (id)supportedAlgorithms;
- (id)userHandle;
- (id)userVerificationPreference;
- (id)userVisibleName;

@end
