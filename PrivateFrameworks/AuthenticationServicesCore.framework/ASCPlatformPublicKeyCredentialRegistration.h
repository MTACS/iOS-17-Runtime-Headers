
@interface ASCPlatformPublicKeyCredentialRegistration : NSObject <ASCCredentialProtocol> {
    NSString * _attachment;
    NSData * _attestationObject;
    NSData * _credentialID;
    NSData * _extensionOutputsCBOR;
    NSData * _rawClientDataJSON;
    NSString * _relyingPartyIdentifier;
    NSArray * _transports;
}

@property (nonatomic, readonly, copy) NSString *attachment;
@property (nonatomic, readonly, copy) NSData *attestationObject;
@property (nonatomic, readonly, copy) NSData *credentialID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSData *extensionOutputsCBOR;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSData *rawClientDataJSON;
@property (nonatomic, readonly, copy) NSString *relyingPartyIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *transports;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attachment;
- (id)attestationObject;
- (id)credentialID;
- (void)encodeWithCoder:(id)arg1;
- (id)extensionOutputsCBOR;
- (id)initWithCoder:(id)arg1;
- (id)initWithRelyingPartyIdentifier:(id)arg1 attestationObject:(id)arg2 rawClientDataJSON:(id)arg3 credentialID:(id)arg4 transports:(id)arg5 extensionOutputsCBOR:(id)arg6 attachment:(id)arg7;
- (id)rawClientDataJSON;
- (id)relyingPartyIdentifier;
- (void)setExtensionOutputsCBOR:(id)arg1;
- (void)setTransports:(id)arg1;
- (id)transports;

@end
