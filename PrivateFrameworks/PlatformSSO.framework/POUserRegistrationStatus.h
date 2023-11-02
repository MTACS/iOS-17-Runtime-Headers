
@interface POUserRegistrationStatus : NSObject <NSSecureCoding> {
    long long  _actionButtonAction;
    bool  _actionButtonEnabled;
    bool  _authenticateButtonEnabled;
    long long  _authenticationMethod;
    NSString * _loginUserName;
    bool  _platformSSOEnabled;
    long long  _userRegistrationStatus;
    long long  _userTokenStatus;
}

@property (nonatomic) long long actionButtonAction;
@property (getter=isActionButtonEnabled, nonatomic) bool actionButtonEnabled;
@property (getter=isAuthenticateButtonEnabled, nonatomic) bool authenticateButtonEnabled;
@property (nonatomic) long long authenticationMethod;
@property (nonatomic, retain) NSString *loginUserName;
@property (getter=isPlatformSSOEnabled, nonatomic) bool platformSSOEnabled;
@property (nonatomic) long long userRegistrationStatus;
@property (nonatomic) long long userTokenStatus;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)actionButtonAction;
- (long long)authenticationMethod;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isActionButtonEnabled;
- (bool)isAuthenticateButtonEnabled;
- (bool)isPlatformSSOEnabled;
- (id)loginUserName;
- (void)setActionButtonAction:(long long)arg1;
- (void)setActionButtonEnabled:(bool)arg1;
- (void)setAuthenticateButtonEnabled:(bool)arg1;
- (void)setAuthenticationMethod:(long long)arg1;
- (void)setLoginUserName:(id)arg1;
- (void)setPlatformSSOEnabled:(bool)arg1;
- (void)setUserRegistrationStatus:(long long)arg1;
- (void)setUserTokenStatus:(long long)arg1;
- (long long)userRegistrationStatus;
- (long long)userTokenStatus;

@end
