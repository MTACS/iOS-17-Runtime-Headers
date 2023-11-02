
@interface PKAuthNotification : PKNotification {
    NSURLCredential * _credential;
    NSString * _defaultUsername;
    NSString * _passwordField;
    NSString * _usernameField;
}

@property (readonly) NSURLCredential *credential;
@property (retain) NSString *defaultUsername;
@property (retain) NSString *passwordField;
@property (retain) NSString *usernameField;

- (void).cxx_destruct;
- (void)_interpretResult:(unsigned long long)arg1 responseDict:(id)arg2;
- (id)_makeDict;
- (unsigned long long)_makeFlags;
- (id)credential;
- (id)defaultUsername;
- (id)passwordField;
- (void)setDefaultUsername:(id)arg1;
- (void)setPasswordField:(id)arg1;
- (void)setUsernameField:(id)arg1;
- (id)usernameField;

@end
