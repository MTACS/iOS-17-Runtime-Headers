
@protocol VSJSResponsePayload <JSExport>

@required

- (NSString *)appBundleIdentifier;
- (NSString *)authN;
- (NSString *)authenticationScheme;
- (NSArray *)clearSubscriptions;
- (NSNumber *)expectedAction;
- (NSDate *)expirationDate;
- (id)init;
- (bool)isSynchronizable;
- (NSString *)logout;
- (void)setAppBundleIdentifier:(NSString *)arg1;
- (void)setAuthN:(NSString *)arg1;
- (void)setAuthenticationScheme:(NSString *)arg1;
- (void)setClearSubscriptions:(NSArray *)arg1;
- (void)setExpectedAction:(NSNumber *)arg1;
- (void)setExpirationDate:(NSDate *)arg1;
- (void)setLogout:(NSString *)arg1;
- (void)setStatusCode:(NSString *)arg1;
- (void)setSubscriptions:(NSArray *)arg1;
- (void)setSynchronizable:(bool)arg1;
- (void)setUserAccounts:(NSArray *)arg1;
- (void)setUserChannelList:(NSArray *)arg1;
- (void)setUserMetadata:(NSString *)arg1;
- (void)setUsername:(NSString *)arg1;
- (NSString *)statusCode;
- (NSArray *)subscriptions;
- (NSArray *)userAccounts;
- (NSArray *)userChannelList;
- (NSString *)userMetadata;
- (NSString *)username;

@end
