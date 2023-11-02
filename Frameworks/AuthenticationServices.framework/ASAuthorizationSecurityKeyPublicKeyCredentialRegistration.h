
@interface ASAuthorizationSecurityKeyPublicKeyCredentialRegistration : NSObject <ASAuthorizationPublicKeyCredentialRegistration> {
    ASPublicKeyCredentialBase * _baseCredential;
    NSData * _rawAttestationObject;
}

@property (nonatomic, readonly, copy) NSData *credentialID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSData *rawAttestationObject;
@property (nonatomic, readonly, copy) NSData *rawClientDataJSON;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithBaseCredential:(id)arg1 rawAttestationObject:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)credentialID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCoreCredential:(id)arg1;
- (id)rawAttestationObject;
- (id)rawClientDataJSON;

@end
