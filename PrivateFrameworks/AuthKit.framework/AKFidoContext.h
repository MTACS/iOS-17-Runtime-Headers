
@interface AKFidoContext : NSObject <NSCopying, NSSecureCoding> {
    NSData * _challenge;
    NSString * _credentialName;
    NSArray * _credentials;
    NSString * _displayName;
    NSString * _incorrectKeyPresentedMessage;
    NSString * _originalChallenge;
    NSString * _promptBody;
    NSString * _promptHeader;
    NSString * _promptTitle;
    NSString * _relyingPartyIdentifier;
    bool  _useAlternativeKeysIcon;
    NSData * _userIdentifier;
}

@property (nonatomic, readonly) NSData *challenge;
@property (nonatomic, readonly) NSString *credentialName;
@property (nonatomic, readonly) NSArray *credentials;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, copy) NSString *incorrectKeyPresentedMessage;
@property (nonatomic, readonly) NSString *originalChallenge;
@property (nonatomic, copy) NSString *promptBody;
@property (nonatomic, copy) NSString *promptHeader;
@property (nonatomic, copy) NSString *promptTitle;
@property (nonatomic, readonly) NSString *relyingPartyIdentifier;
@property (nonatomic) bool useAlternativeKeysIcon;
@property (nonatomic, readonly) NSData *userIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)challenge;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)credentialName;
- (id)credentials;
- (id)debugDescription;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)incorrectKeyPresentedMessage;
- (id)initWithChallenge:(id)arg1 relyingPartyIdentifier:(id)arg2 userIdentifier:(id)arg3 displayName:(id)arg4 credentialName:(id)arg5 credentials:(id)arg6;
- (id)initWithChallengeString:(id)arg1 relyingPartyIdentifier:(id)arg2 userIdentifierString:(id)arg3 displayName:(id)arg4 credentialName:(id)arg5 credentials:(id)arg6;
- (id)initWithCoder:(id)arg1;
- (id)initWithParameters:(id)arg1;
- (id)originalChallenge;
- (id)promptBody;
- (id)promptHeader;
- (id)promptTitle;
- (id)relyingPartyIdentifier;
- (void)setIncorrectKeyPresentedMessage:(id)arg1;
- (void)setPromptBody:(id)arg1;
- (void)setPromptHeader:(id)arg1;
- (void)setPromptTitle:(id)arg1;
- (void)setUseAlternativeKeysIcon:(bool)arg1;
- (bool)useAlternativeKeysIcon;
- (id)userIdentifier;

@end
