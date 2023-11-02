
@protocol VSApplicationUserAccount <JSExport>

@required

- (long long)accountType;
- (NSString *)authenticationData;
- (NSString *)billingIdentifier;
- (NSString *)bundleId;
- (long long)deviceCategory;
- (NSString *)identifier;
- (id)init;
- (id)initWithUserAcount:(VSUserAccount *)arg1;
- (bool)isSignedOut;
- (bool)requiresSystemTrust;
- (void)setAccountType:(long long)arg1;
- (void)setAuthenticationData:(NSString *)arg1;
- (void)setBillingIdentifier:(NSString *)arg1;
- (void)setBundleId:(NSString *)arg1;
- (void)setDeviceCategory:(long long)arg1;
- (void)setIdentifier:(NSString *)arg1;
- (void)setRequiresSystemTrust:(bool)arg1;
- (void)setSignedOut:(bool)arg1;
- (void)setSubscriptionBillingCycleEndDate:(NSDate *)arg1;
- (void)setTierIdentifiers:(NSArray *)arg1;
- (void)setUpdateURL:(NSString *)arg1;
- (NSDate *)subscriptionBillingCycleEndDate;
- (NSArray *)tierIdentifiers;
- (NSString *)updateURL;

@end
