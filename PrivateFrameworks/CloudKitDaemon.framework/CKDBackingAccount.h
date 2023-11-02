
@interface CKDBackingAccount : NSObject {
    ACAccount * _appleAccount;
}

@property (nonatomic, readonly) long long accountType;
@property (nonatomic, readonly) NSString *altDSID;
@property (nonatomic, readonly) ACAccount *appleAccount;
@property (nonatomic, readonly) bool canSuspendedAccountRenewCredentials;
@property (nonatomic, readonly) ACAccount *ckAccount;
@property (nonatomic, readonly) NSString *displayedHostname;
@property (nonatomic, readonly) NSString *dsid;
@property (nonatomic, readonly) NSPersonNameComponents *fullName;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) bool isAccountSuspended;
@property (nonatomic, readonly) bool isPrimaryAccount;
@property (nonatomic, readonly) bool isPrimaryEmailVerified;
@property (nonatomic, readonly) NSString *personaIdentifier;
@property (nonatomic, readonly) NSString *primaryEmail;
@property (nonatomic, readonly) NSURL *privateCloudDBURL;
@property (nonatomic, readonly) NSURL *privateCodeServiceURL;
@property (nonatomic, readonly) NSURL *privateDeviceServiceURL;
@property (nonatomic, readonly) NSURL *privateMetricsServiceURL;
@property (nonatomic, readonly) NSURL *privateShareServiceURL;
@property (nonatomic, readonly) NSString *serverPreferredPushEnvironment;
@property (nonatomic, readonly) NSString *sharingURLHostname;
@property (nonatomic, readonly) NSString *username;

+ (id)accountWithAltDSID:(id)arg1;
+ (id)accountWithIdentifier:(id)arg1;
+ (id)credentialRenewalDatesBySuspendedAccountID;
+ (void)deviceCountForAccount:(id)arg1 ignoreCache:(bool)arg2 completionHandler:(id /* block */)arg3;
+ (id)deviceCountQueue;
+ (id)explicitCredentialsAccountWithEmail:(id)arg1 password:(id)arg2 recoveryKey:(id)arg3 propertyOverrides:(id)arg4 overridesByDataclass:(id)arg5;
+ (void)fetchDeviceCountForAccount:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)mockAccountWithTestAccount:(id)arg1 testDevice:(id)arg2;
+ (id)primaryAccount;
+ (void)registerDeviceCountRefreshActivity;

- (void).cxx_destruct;
- (id)_accountCredentialForAccount:(id)arg1 withError:(id*)arg2;
- (void)_setOverridesOnVettingContext:(id)arg1;
- (id)accountPropertiesForDataclass:(id)arg1;
- (long long)accountType;
- (id)altDSID;
- (id)appleAccount;
- (bool)canSuspendedAccountRenewCredentials;
- (id)ckAccount;
- (id)cloudKitAuthTokenWithError:(id*)arg1;
- (id)displayedHostname;
- (id)dsid;
- (id)fullName;
- (id)iCloudAuthTokenWithError:(id*)arg1;
- (id)identifier;
- (id)init;
- (id)initWithAppleAccount:(id)arg1;
- (bool)isAccountSuspended;
- (bool)isDataclassEnabled:(id)arg1;
- (bool)isDataclassEnabledForCellular:(id)arg1;
- (bool)isPrimaryAccount;
- (bool)isPrimaryEmailVerified;
- (long long)lastKnownDeviceCount;
- (void)noteSuspendedAccountRenewalDate;
- (id)personaIdentifier;
- (id)primaryEmail;
- (id)privateCloudDBURL;
- (id)privateCodeServiceURL;
- (id)privateCodeServiceURLPreferringGateway:(bool)arg1;
- (id)privateDeviceServiceURL;
- (id)privateMetricsServiceURL;
- (id)privateShareServiceURL;
- (void)renewAuthTokenWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)serverPreferredPushEnvironment;
- (id)sharingURLHostname;
- (void)updateAccountPropertiesAndSaveAccount:(id /* block */)arg1;
- (id)urlForDataclass:(id)arg1;
- (id)urlForDataclass:(id)arg1 preferringGateway:(bool)arg2;
- (id)username;
- (void)validateVettingToken:(id)arg1 vettingEmail:(id)arg2 vettingPhone:(id)arg3 completionHandler:(id /* block */)arg4;

@end
