
@interface ASAuthorizationPlatformPublicKeyCredentialAssertion : NSObject <ASAuthorizationPublicKeyCredentialAssertion> {
    ASPublicKeyCredentialBase * _baseCredential;
    ASAuthorizationPublicKeyCredentialLargeBlobAssertionOutput * _largeBlob;
    NSData * _rawAuthenticatorData;
    NSData * _signature;
    NSData * _userID;
}

@property (nonatomic, readonly) long long attachment;
@property (nonatomic, readonly, copy) NSData *credentialID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) ASAuthorizationPublicKeyCredentialLargeBlobAssertionOutput *largeBlob;
@property (nonatomic, readonly, copy) NSData *rawAuthenticatorData;
@property (nonatomic, readonly, copy) NSData *rawClientDataJSON;
@property (nonatomic, readonly, copy) NSData *signature;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSData *userID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithBaseCredential:(id)arg1 userID:(id)arg2 signature:(id)arg3 rawAuthenticatorData:(id)arg4 largeBlob:(id)arg5;
- (long long)attachment;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)credentialID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCoreCredential:(id)arg1;
- (id)largeBlob;
- (void)populateExtensionsIfNeededFromCBOR:(id)arg1 largeBlob:(id*)arg2;
- (id)rawAuthenticatorData;
- (id)rawClientDataJSON;
- (id)signature;
- (id)userID;

@end
