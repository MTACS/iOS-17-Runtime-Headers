
@interface ASPasskeyRegistrationCredential : NSObject <ASAuthorizationCredential> {
    NSData * _attestationObject;
    NSData * _clientDataHash;
    NSData * _credentialID;
    NSString * _relyingParty;
}

@property (nonatomic, readonly) NSData *attestationObject;
@property (nonatomic, readonly) NSData *clientDataHash;
@property (nonatomic, readonly) NSData *credentialID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *relyingParty;
@property (readonly) Class superclass;

+ (id)_defaultTransports;
+ (id)credentialWithRelyingParty:(id)arg1 clientDataHash:(id)arg2 credentialID:(id)arg3 attestationObject:(id)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_validateWithError:(id*)arg1;
- (id)attestationObject;
- (id)clientDataHash;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)credentialID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRelyingParty:(id)arg1 clientDataHash:(id)arg2 credentialID:(id)arg3 attestationObject:(id)arg4;
- (id)relyingParty;

@end
