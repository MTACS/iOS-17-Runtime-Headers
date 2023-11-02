
@interface VSApplicationControllerResponse : NSObject {
    VSAccountAuthentication * _accountAuthentication;
    NSSet * _accountChannelIDs;
    NSString * _authenticationScheme;
    NSNumber * _expectedAction;
    NSString * _responseStatusCode;
    NSString * _responseString;
    NSArray * _subscriptionsToAdd;
    NSArray * _subscriptionsToRemoveByBundleID;
    NSArray * _userAccounts;
}

@property (nonatomic, retain) VSAccountAuthentication *accountAuthentication;
@property (nonatomic, copy) NSSet *accountChannelIDs;
@property (nonatomic, copy) NSString *authenticationScheme;
@property (nonatomic, copy) NSNumber *expectedAction;
@property (nonatomic, copy) NSString *responseStatusCode;
@property (nonatomic, copy) NSString *responseString;
@property (nonatomic, copy) NSArray *subscriptionsToAdd;
@property (nonatomic, copy) NSArray *subscriptionsToRemoveByBundleID;
@property (nonatomic, copy) NSArray *userAccounts;

- (void).cxx_destruct;
- (id)accountAuthentication;
- (id)accountChannelIDs;
- (id)authenticationScheme;
- (id)description;
- (id)expectedAction;
- (id)responseStatusCode;
- (id)responseString;
- (void)setAccountAuthentication:(id)arg1;
- (void)setAccountChannelIDs:(id)arg1;
- (void)setAuthenticationScheme:(id)arg1;
- (void)setExpectedAction:(id)arg1;
- (void)setResponseStatusCode:(id)arg1;
- (void)setResponseString:(id)arg1;
- (void)setSubscriptionsToAdd:(id)arg1;
- (void)setSubscriptionsToRemoveByBundleID:(id)arg1;
- (void)setUserAccounts:(id)arg1;
- (id)subscriptionsToAdd;
- (id)subscriptionsToRemoveByBundleID;
- (id)userAccounts;

@end
