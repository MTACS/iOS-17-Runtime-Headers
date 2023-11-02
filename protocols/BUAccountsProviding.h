
@protocol BUAccountsProviding <NSObject>

@required

- (ACAccount *)activeStoreAccount;
- (void)addObserver:(id <BUAccountsObserving>)arg1 accountTypes:(unsigned long long)arg2;
- (void)clearLastUsedStoreAccountID;
- (NSString *)currentStorefront;
- (bool)detectedUserSwitchWithId:(NSNumber *)arg1 outSignedIn:(bool*)arg2 outSignedOut:(bool*)arg3 outAccountNumberChanged:(bool*)arg4;
- (bool)hasRecommendationsEnabled;
- (NSString *)iCloudAccountName;
- (NSString *)iCloudIdentity;
- (bool)isGlobalICloudDriveSyncOptedIn;
- (bool)isPrimaryAccountManagedAppleID;
- (bool)isStoreAccountManagedAppleID;
- (bool)isUserSignedInToiCloud;
- (bool)isUserSignedInToiTunes;
- (NSNumber *)lastUsedStoreAccountID;
- (ACAccount *)localStoreAccount;
- (void)observeTCCAccessChangeNotificationIfNeeded;
- (ACAccount *)primaryAppleAccount;
- (void)removeObserver:(id <BUAccountsObserving>)arg1 accountTypes:(unsigned long long)arg2;
- (void)updateLastUsedStoreAccountID;

@end
