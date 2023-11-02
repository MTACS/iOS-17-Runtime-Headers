
@interface AKAppleIDPasskeyCredentialRequestContext : NSObject <NSCopying, NSSecureCoding> {
    NSData * _challenge;
    NSString * _credentialName;
    NSString * _originalChallenge;
    NSString * _relyingPartyIdentifier;
    NSData * _userID;
}

@property (nonatomic, copy) NSData *challenge;
@property (nonatomic, copy) NSString *credentialName;
@property (nonatomic, copy) NSString *originalChallenge;
@property (nonatomic, copy) NSString *relyingPartyIdentifier;
@property (nonatomic, copy) NSData *userID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_sanitizeBase64EncodedString:(id)arg1;
- (id)challenge;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)credentialName;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRelyingPartyIdentifier:(id)arg1 challenge:(id)arg2 originalChallenge:(id)arg3 userID:(id)arg4 credentialName:(id)arg5;
- (id)initWithRelyingPartyIdentifier:(id)arg1 challengeString:(id)arg2 userIDString:(id)arg3 credentialName:(id)arg4;
- (id)originalChallenge;
- (id)relyingPartyIdentifier;
- (void)setChallenge:(id)arg1;
- (void)setCredentialName:(id)arg1;
- (void)setOriginalChallenge:(id)arg1;
- (void)setRelyingPartyIdentifier:(id)arg1;
- (void)setUserID:(id)arg1;
- (id)userID;

@end
