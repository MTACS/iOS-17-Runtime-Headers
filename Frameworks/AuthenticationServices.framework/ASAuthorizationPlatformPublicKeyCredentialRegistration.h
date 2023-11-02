
@interface ASAuthorizationPlatformPublicKeyCredentialRegistration : NSObject <ASAuthorizationPublicKeyCredentialRegistration> {
    ASPublicKeyCredentialBase * _baseCredential;
    ASAuthorizationPublicKeyCredentialLargeBlobRegistrationOutput * _largeBlob;
    NSData * _rawAttestationObject;
}

@property (nonatomic, readonly) long long attachment;
@property (nonatomic, readonly, copy) NSData *credentialID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) ASAuthorizationPublicKeyCredentialLargeBlobRegistrationOutput *largeBlob;
@property (nonatomic, readonly, copy) NSData *rawAttestationObject;
@property (nonatomic, readonly, copy) NSData *rawClientDataJSON;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithBaseCredential:(id)arg1 rawAttestationObject:(id)arg2 largeBlob:(id)arg3;
- (long long)attachment;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)credentialID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCoreCredential:(id)arg1;
- (id)largeBlob;
- (void)populateExtensionsIfNeededFromCBOR:(id)arg1 largeBlob:(id*)arg2;
- (id)rawAttestationObject;
- (id)rawClientDataJSON;

@end
