
@interface VSJSResponsePayload : IKJSObject <NSCopying, VSJSResponsePayload> {
    NSString * _appBundleIdentifier;
    NSString * _authN;
    NSString * _authenticationScheme;
    NSArray * _clearSubscriptions;
    NSNumber * _expectedAction;
    NSDate * _expirationDate;
    NSString * _logout;
    NSString * _statusCode;
    NSArray * _subscriptions;
    bool  _synchronizable;
    NSArray * _userAccounts;
    NSArray * _userChannelList;
    NSString * _userMetadata;
    NSString * _username;
}

@property (nonatomic, copy) NSString *appBundleIdentifier;
@property (nonatomic, copy) NSString *authN;
@property (nonatomic, copy) NSString *authenticationScheme;
@property (nonatomic, copy) NSArray *clearSubscriptions;
@property (nonatomic, copy) NSNumber *expectedAction;
@property (nonatomic, copy) NSDate *expirationDate;
@property (nonatomic, copy) NSString *logout;
@property (nonatomic, copy) NSString *statusCode;
@property (nonatomic, copy) NSArray *subscriptions;
@property (getter=isSynchronizable, nonatomic) bool synchronizable;
@property (nonatomic, copy) NSArray *userAccounts;
@property (nonatomic, copy) NSArray *userChannelList;
@property (nonatomic, copy) NSString *userMetadata;
@property (nonatomic, copy) NSString *username;

- (void).cxx_destruct;
- (id)appBundleIdentifier;
- (id)authN;
- (id)authenticationScheme;
- (id)clearSubscriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)expectedAction;
- (id)expirationDate;
- (id)init;
- (bool)isSynchronizable;
- (id)logout;
- (void)setAppBundleIdentifier:(id)arg1;
- (void)setAuthN:(id)arg1;
- (void)setAuthenticationScheme:(id)arg1;
- (void)setClearSubscriptions:(id)arg1;
- (void)setExpectedAction:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setLogout:(id)arg1;
- (void)setStatusCode:(id)arg1;
- (void)setSubscriptions:(id)arg1;
- (void)setSynchronizable:(bool)arg1;
- (void)setUserAccounts:(id)arg1;
- (void)setUserChannelList:(id)arg1;
- (void)setUserMetadata:(id)arg1;
- (void)setUsername:(id)arg1;
- (id)statusCode;
- (id)subscriptions;
- (id)userAccounts;
- (id)userChannelList;
- (id)userMetadata;
- (id)username;

@end
