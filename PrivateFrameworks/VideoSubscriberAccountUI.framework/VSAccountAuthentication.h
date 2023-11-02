
@interface VSAccountAuthentication : NSObject {
    NSString * _appBundleIdentifier;
    VSOptional * _authenticationToken;
    bool  _synchronizable;
    NSString * _username;
}

@property (nonatomic, copy) NSString *appBundleIdentifier;
@property (nonatomic, retain) VSOptional *authenticationToken;
@property (getter=isSynchronizable, nonatomic) bool synchronizable;
@property (nonatomic, copy) NSString *username;

- (void).cxx_destruct;
- (id)appBundleIdentifier;
- (id)authenticationToken;
- (id)description;
- (id)init;
- (bool)isSynchronizable;
- (void)setAppBundleIdentifier:(id)arg1;
- (void)setAuthenticationToken:(id)arg1;
- (void)setSynchronizable:(bool)arg1;
- (void)setUsername:(id)arg1;
- (id)username;

@end
