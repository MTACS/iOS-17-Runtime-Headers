
@interface ASCSecurityKeyPublicKeyCredentialLoginChoice : NSObject <ASCLoginChoiceProtocol> {
    long long  _credentialKind;
    NSString * _displayName;
    WBSPublicKeyCredentialIdentifier * _identifier;
    NSString * _name;
    NSUUID * _publicKeyCredentialOperationUUID;
}

@property (nonatomic, readonly) long long credentialKind;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) WBSPublicKeyCredentialIdentifier *identifier;
@property (nonatomic, readonly) bool isSharedCredential;
@property (nonatomic, readonly) unsigned long long loginChoiceKind;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, copy) NSUUID *publicKeyCredentialOperationUUID;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithKind:(long long)arg1 name:(id)arg2 displayName:(id)arg3 identifier:(id)arg4 publicKeyCredentialOperationUUID:(id)arg5;
- (long long)credentialKind;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initAssertionPlaceholderChoice;
- (id)initRegistrationChoiceWithOptions:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 displayName:(id)arg2 identifier:(id)arg3 publicKeyCredentialOperationUUID:(id)arg4;
- (bool)isEqual:(id)arg1;
- (unsigned long long)loginChoiceKind;
- (id)name;
- (id)publicKeyCredentialOperationUUID;
- (void)setPublicKeyCredentialOperationUUID:(id)arg1;

@end
