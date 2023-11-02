
@interface ASCPlatformPublicKeyCredentialAssertion : NSObject <ASCCredentialProtocol> {
    NSString * _attachment;
    NSData * _authenticatorData;
    NSData * _credentialID;
    NSData * _extensionOutputsCBOR;
    NSData * _rawClientDataJSON;
    NSString * _relyingPartyIdentifier;
    NSData * _signature;
    NSData * _userHandle;
}

@property (nonatomic, readonly, copy) NSString *attachment;
@property (nonatomic, readonly, copy) NSData *authenticatorData;
@property (nonatomic, readonly, copy) NSData *credentialID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSData *extensionOutputsCBOR;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSData *rawClientDataJSON;
@property (nonatomic, readonly, copy) NSString *relyingPartyIdentifier;
@property (nonatomic, readonly, copy) NSData *signature;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSData *userHandle;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attachment;
- (id)authenticatorData;
- (id)credentialID;
- (void)encodeWithCoder:(id)arg1;
- (id)extensionOutputsCBOR;
- (id)initWithCoder:(id)arg1;
- (id)initWithRelyingPartyIdentifier:(id)arg1 authenticatorData:(id)arg2 signature:(id)arg3 userHandle:(id)arg4 rawClientDataJSON:(id)arg5 credentialID:(id)arg6 extensionOutputsCBOR:(id)arg7 attachment:(id)arg8;
- (id)rawClientDataJSON;
- (id)relyingPartyIdentifier;
- (void)setRawClientDataJSON:(id)arg1;
- (id)signature;
- (id)userHandle;

@end
