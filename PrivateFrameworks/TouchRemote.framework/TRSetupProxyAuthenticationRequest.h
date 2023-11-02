
@interface TRSetupProxyAuthenticationRequest : TRRequestMessage {
    ACAccount * _account;
    NSString * _rawPassword;
    bool  _shouldUseAIDA;
    NSSet * _targetedAccountServices;
}

@property (nonatomic, retain) ACAccount *account;
@property (nonatomic, retain) NSString *rawPassword;
@property (nonatomic) bool shouldUseAIDA;
@property (nonatomic, retain) NSSet *targetedAccountServices;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)account;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)rawPassword;
- (void)setAccount:(id)arg1;
- (void)setRawPassword:(id)arg1;
- (void)setShouldUseAIDA:(bool)arg1;
- (void)setTargetedAccountServices:(id)arg1;
- (bool)shouldUseAIDA;
- (id)targetedAccountServices;

@end
