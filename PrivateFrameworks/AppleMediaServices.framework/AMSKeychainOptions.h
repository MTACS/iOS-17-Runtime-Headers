
@interface AMSKeychainOptions : NSObject <NSCopying, NSSecureCoding> {
    bool  _authenticationFallbackVisible;
    NSString * _clientCertLabel;
    bool  _displayAuthenticationReason;
    NSString * _intermediateCertLabel;
    NSString * _label;
    NSString * _prompt;
    unsigned long long  _purpose;
    bool  _regenerateKeys;
    unsigned long long  _style;
}

@property (nonatomic) bool authenticationFallbackVisible;
@property (nonatomic, copy) NSString *clientCertLabel;
@property (nonatomic) bool displayAuthenticationReason;
@property (nonatomic, copy) NSString *intermediateCertLabel;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) NSString *prompt;
@property (nonatomic) unsigned long long purpose;
@property (nonatomic) bool regenerateKeys;
@property (nonatomic) unsigned long long style;

+ (unsigned long long)preferredAttestationStyle;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_compareString:(id)arg1 withString:(id)arg2;
- (bool)authenticationFallbackVisible;
- (id)clientCertLabel;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)displayAuthenticationReason;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithOptionsDictionary:(id)arg1;
- (id)intermediateCertLabel;
- (bool)isEqual:(id)arg1;
- (id)label;
- (id)optionsDictionary;
- (id)prompt;
- (unsigned long long)purpose;
- (bool)regenerateKeys;
- (void)setAuthenticationFallbackVisible:(bool)arg1;
- (void)setClientCertLabel:(id)arg1;
- (void)setDisplayAuthenticationReason:(bool)arg1;
- (void)setIntermediateCertLabel:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setPrompt:(id)arg1;
- (void)setPurpose:(unsigned long long)arg1;
- (void)setRegenerateKeys:(bool)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (unsigned long long)style;

@end
