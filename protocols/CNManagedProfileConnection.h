
@protocol CNManagedProfileConnection <NSObject>

@required

- (NSArray *)filteredOpenInAccounts:(NSArray *)arg1 originatingAppBundleID:(NSString *)arg2 sourceAccountManagement:(long long)arg3;
- (NSArray *)filteredOpenInOriginatingAccounts:(NSArray *)arg1 targetAppBundleID:(NSString *)arg2 targetAccountManagement:(long long)arg3;
- (bool)isOpenInRestrictionInEffect;
- (bool)mayShowLocalContactsAccountsForBundleID:(NSString *)arg1 sourceAccountManagement:(long long)arg2;
- (bool)mayShowLocalContactsAccountsForTargetBundleID:(NSString *)arg1 targetAccountManagement:(long long)arg2;

@end
