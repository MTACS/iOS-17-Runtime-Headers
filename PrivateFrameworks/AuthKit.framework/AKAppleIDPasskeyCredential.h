
@interface AKAppleIDPasskeyCredential : NSObject <NSCopying, NSSecureCoding> {
    NSString * _attestationDataString;
    NSString * _clientDataString;
    NSString * _credentialIDString;
    NSString * _credentialName;
    NSString * _originalChallengeString;
    NSString * _relyingPartyIdentifier;
    NSString * _userIDString;
}

@property (nonatomic, copy) NSString *attestationDataString;
@property (nonatomic, copy) NSString *clientDataString;
@property (nonatomic, copy) NSString *credentialIDString;
@property (nonatomic, copy) NSString *credentialName;
@property (nonatomic, copy) NSString *originalChallengeString;
@property (nonatomic, copy) NSString *relyingPartyIdentifier;
@property (nonatomic, copy) NSString *userIDString;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attestationDataString;
- (id)clientDataString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)credentialIDString;
- (id)credentialName;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRelyingPartyIdentifier:(id)arg1 attestationData:(id)arg2 clientData:(id)arg3 credentialID:(id)arg4 originalChallenge:(id)arg5 userID:(id)arg6 credentialName:(id)arg7;
- (id)initWithRelyingPartyIdentifier:(id)arg1 attestationDataString:(id)arg2 clientDataString:(id)arg3 credentialIDString:(id)arg4 userIDString:(id)arg5 originalChallengeString:(id)arg6 credentialName:(id)arg7;
- (id)originalChallengeString;
- (id)relyingPartyIdentifier;
- (void)setAttestationDataString:(id)arg1;
- (void)setClientDataString:(id)arg1;
- (void)setCredentialIDString:(id)arg1;
- (void)setCredentialName:(id)arg1;
- (void)setOriginalChallengeString:(id)arg1;
- (void)setRelyingPartyIdentifier:(id)arg1;
- (void)setUserIDString:(id)arg1;
- (id)userIDString;

@end
