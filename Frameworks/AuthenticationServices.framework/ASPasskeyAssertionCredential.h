
@interface ASPasskeyAssertionCredential : NSObject <ASAuthorizationCredential> {
    NSData * _authenticatorData;
    NSData * _clientDataHash;
    NSData * _credentialID;
    NSString * _relyingParty;
    NSData * _signature;
    NSData * _userHandle;
}

@property (nonatomic, readonly, copy) NSData *authenticatorData;
@property (nonatomic, readonly, copy) NSData *clientDataHash;
@property (nonatomic, readonly, copy) NSData *credentialID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *relyingParty;
@property (nonatomic, readonly, copy) NSData *signature;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSData *userHandle;

+ (id)credentialWithUserHandle:(id)arg1 relyingParty:(id)arg2 signature:(id)arg3 clientDataHash:(id)arg4 authenticatorData:(id)arg5 credentialID:(id)arg6;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_validateWithError:(id*)arg1;
- (id)authenticatorData;
- (id)clientDataHash;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)credentialID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUserHandle:(id)arg1 relyingParty:(id)arg2 signature:(id)arg3 clientDataHash:(id)arg4 authenticatorData:(id)arg5 credentialID:(id)arg6;
- (id)relyingParty;
- (id)signature;
- (id)userHandle;

@end
