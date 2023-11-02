
@interface TPPeerStableInfo : NSObject {
    TPTypedSignedData * _tsd;
}

@property (nonatomic, readonly) unsigned long long clock;
@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) NSString *deviceName;
@property (readonly) TPPolicyVersion *flexiblePolicyVersion;
@property (readonly) TPPolicyVersion *frozenPolicyVersion;
@property (nonatomic, readonly) bool isInheritedAccount;
@property (nonatomic, readonly) NSString *osVersion;
@property (nonatomic, readonly) NSDictionary *policySecrets;
@property (nonatomic, readonly) NSData *recoveryEncryptionPublicKey;
@property (nonatomic, readonly) NSData *recoverySigningPublicKey;
@property (nonatomic, readonly) TPPBSecureElementIdentity *secureElementIdentity;
@property (nonatomic, readonly) NSString *serialNumber;
@property (nonatomic, readonly) NSData *sig;
@property (nonatomic, readonly) int syncUserControllableViews;
@property (nonatomic, retain) TPTypedSignedData *tsd;
@property (nonatomic, readonly) TPPBPeerStableInfoSetting *walrusSetting;
@property (nonatomic, readonly) TPPBPeerStableInfoSetting *webAccess;

+ (id)flexiblePolicyVersionFromPb:(id)arg1;
+ (id)policySecretsFromPb:(id)arg1;

- (void).cxx_destruct;
- (id)bestPolicyVersion;
- (bool)checkSignatureWithKey:(id)arg1;
- (unsigned long long)clock;
- (id)data;
- (id)description;
- (id)deviceName;
- (id)dictionaryRepresentation;
- (id)flexiblePolicyVersion;
- (id)frozenPolicyVersion;
- (id)initWithClock:(unsigned long long)arg1 frozenPolicyVersion:(id)arg2 flexiblePolicyVersion:(id)arg3 policySecrets:(id)arg4 syncUserControllableViews:(int)arg5 secureElementIdentity:(id)arg6 walrusSetting:(id)arg7 webAccess:(id)arg8 deviceName:(id)arg9 serialNumber:(id)arg10 osVersion:(id)arg11 signingKeyPair:(id)arg12 recoverySigningPubKey:(id)arg13 recoveryEncryptionPubKey:(id)arg14 isInheritedAccount:(bool)arg15 error:(id*)arg16;
- (id)initWithData:(id)arg1 sig:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPeerStableInfo:(id)arg1;
- (bool)isInheritedAccount;
- (id)osVersion;
- (id)pb;
- (id)policySecrets;
- (id)recoveryEncryptionPublicKey;
- (id)recoverySigningPublicKey;
- (id)secureElementIdentity;
- (id)serialNumber;
- (void)setTsd:(id)arg1;
- (id)sig;
- (int)syncUserControllableViews;
- (id)tsd;
- (id)walrusSetting;
- (id)webAccess;

@end
