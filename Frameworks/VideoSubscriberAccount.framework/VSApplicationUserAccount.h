
@interface VSApplicationUserAccount : NSObject <VSApplicationUserAccount> {
    long long  _accountType;
    NSString * _authenticationData;
    NSString * _billingIdentifier;
    NSString * _bundleId;
    long long  _deviceCategory;
    NSString * _identifier;
    VSUserAccount * _originatingUserAccount;
    bool  _requiresSystemTrust;
    bool  _signedOut;
    NSDate * _subscriptionBillingCycleEndDate;
    NSArray * _tierIdentifiers;
    NSString * _updateURL;
}

@property (nonatomic) long long accountType;
@property (nonatomic, copy) NSString *authenticationData;
@property (nonatomic, copy) NSString *billingIdentifier;
@property (nonatomic, copy) NSString *bundleId;
@property (nonatomic) long long deviceCategory;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) VSUserAccount *originatingUserAccount;
@property (nonatomic) bool requiresSystemTrust;
@property (getter=isSignedOut, nonatomic) bool signedOut;
@property (nonatomic, copy) NSDate *subscriptionBillingCycleEndDate;
@property (nonatomic, copy) NSArray *tierIdentifiers;
@property (nonatomic, copy) NSString *updateURL;

+ (id)nativeUserAccountsForJSUserAccounts:(id)arg1 ForProviderID:(id)arg2 allowedBundleIDs:(id)arg3;
+ (id)userAccountsWithNativeUserAccounts:(id)arg1;

- (void).cxx_destruct;
- (long long)accountType;
- (id)authenticationData;
- (id)billingIdentifier;
- (id)bundleId;
- (long long)deviceCategory;
- (id)identifier;
- (id)initWithUserAcount:(id)arg1;
- (bool)isSignedOut;
- (id)nativeUserAccountForProviderID:(id)arg1 allowedBundleIDs:(id)arg2;
- (id)originatingUserAccount;
- (bool)requiresSystemTrust;
- (void)setAccountType:(long long)arg1;
- (void)setAuthenticationData:(id)arg1;
- (void)setBillingIdentifier:(id)arg1;
- (void)setBundleId:(id)arg1;
- (void)setDeviceCategory:(long long)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setOriginatingUserAccount:(id)arg1;
- (void)setRequiresSystemTrust:(bool)arg1;
- (void)setSignedOut:(bool)arg1;
- (void)setSubscriptionBillingCycleEndDate:(id)arg1;
- (void)setTierIdentifiers:(id)arg1;
- (void)setUpdateURL:(id)arg1;
- (id)subscriptionBillingCycleEndDate;
- (id)tierIdentifiers;
- (id)updateURL;

@end
