
@interface AKFidoAuthenticationResponse : NSObject <AKFidoResponse, NSCopying, NSSecureCoding> {
    NSString * _authenticatorData;
    NSString * _challenge;
    NSString * _clientData;
    NSString * _credentialID;
    NSString * _relyingPartyIdentifier;
    NSString * _signature;
    NSString * _userIdentifier;
}

@property (nonatomic, readonly) NSString *authenticatorData;
@property (nonatomic, readonly) NSString *challenge;
@property (nonatomic, readonly) NSString *clientData;
@property (nonatomic, readonly) NSString *credentialID;
@property (nonatomic, readonly) NSString *relyingPartyIdentifier;
@property (nonatomic, readonly) NSString *signature;
@property (nonatomic, readonly) NSString *userIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)authenticatorData;
- (id)challenge;
- (id)clientData;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)credentialID;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAuthenticatorData:(id)arg1 challengeString:(id)arg2 relyingPartyIdentifier:(id)arg3 signature:(id)arg4 clientData:(id)arg5 credentialID:(id)arg6 userIdentifier:(id)arg7;
- (id)initWithAuthenticatorDataString:(id)arg1 challengeString:(id)arg2 relyingPartyIdentifier:(id)arg3 signature:(id)arg4 clientDataString:(id)arg5 credentialID:(id)arg6 userIdentifier:(id)arg7;
- (id)initWithCoder:(id)arg1;
- (id)relyingPartyIdentifier;
- (id)signature;
- (id)userIdentifier;

@end
