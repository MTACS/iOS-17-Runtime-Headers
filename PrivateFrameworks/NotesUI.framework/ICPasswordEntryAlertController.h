
@interface ICPasswordEntryAlertController : NSObject {
    bool  _authenticating;
    UIWindow * _displayWindow;
    NSString * _divergedAccountPassword;
    unsigned long long  _numberOfFailedAttempts;
    bool  _passwordDiverged;
    NSString * _wrongAccountName;
}

@property (getter=isAuthenticating, nonatomic) bool authenticating;
@property (nonatomic, readonly) UIWindow *displayWindow;
@property (nonatomic, copy) NSString *divergedAccountPassword;
@property (nonatomic) unsigned long long numberOfFailedAttempts;
@property (getter=isPasswordDiverged, nonatomic) bool passwordDiverged;
@property (nonatomic, copy) NSString *wrongAccountName;

- (void).cxx_destruct;
- (void)authenticateWithPrompt:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)didAuthenticateWithPassword:(id)arg1 prompt:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)displayWindow;
- (id)divergedAccountPassword;
- (id)initWithDisplayWindow:(id)arg1;
- (bool)isAuthenticating;
- (bool)isPasswordDiverged;
- (unsigned long long)numberOfFailedAttempts;
- (id)passwordAlertControllerWithPrompt:(id)arg1 passwordHandler:(id /* block */)arg2 forgotHandler:(id /* block */)arg3 cancelHandler:(id /* block */)arg4;
- (void)setAuthenticating:(bool)arg1;
- (void)setDivergedAccountPassword:(id)arg1;
- (void)setNumberOfFailedAttempts:(unsigned long long)arg1;
- (void)setPasswordDiverged:(bool)arg1;
- (void)setWrongAccountName:(id)arg1;
- (id)wrongAccountName;

@end
