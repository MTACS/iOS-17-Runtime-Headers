
@interface AKFidoRegistrationResponse : NSObject <AKFidoResponse, NSCopying, NSSecureCoding> {
    NSString * _attestationsData;
    NSString * _challenge;
    NSString * _clientData;
    NSString * _credentialID;
    NSString * _credentialName;
    NSString * _relyingPartyIdentifier;
    NSString * _userIdentifier;
}

@property (nonatomic, readonly) NSString *attestationsData;
@property (nonatomic, readonly) NSString *challenge;
@property (nonatomic, readonly) NSString *clientData;
@property (nonatomic, readonly) NSString *credentialID;
@property (nonatomic, readonly) NSString *credentialName;
@property (nonatomic, readonly) NSString *relyingPartyIdentifier;
@property (nonatomic, readonly) NSString *userIdentifier;

+ (id)_sanitizeCredentialIDString:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attestationsData;
- (id)challenge;
- (id)clientData;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)credentialID;
- (id)credentialName;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithChallengeString:(id)arg1 attestationsData:(id)arg2 credentialID:(id)arg3 clientData:(id)arg4 relyingPartyIdentifier:(id)arg5 credentialName:(id)arg6 userIdentifier:(id)arg7;
- (id)initWithChallengeString:(id)arg1 attestationsDataString:(id)arg2 credentialIDString:(id)arg3 clientDataString:(id)arg4 relyingPartyIdentifier:(id)arg5 credentialName:(id)arg6 userIdentifier:(id)arg7;
- (id)initWithCoder:(id)arg1;
- (id)relyingPartyIdentifier;
- (id)userIdentifier;

@end
