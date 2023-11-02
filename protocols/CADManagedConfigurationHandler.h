
@protocol CADManagedConfigurationHandler

@required

- (NSArray *)filteredOpenInAccounts:(NSArray *)arg1 originatingAppBundleID:(NSString *)arg2 sourceAccountManagement:(int)arg3;
- (NSArray *)filteredOpenInOriginatingAccounts:(NSArray *)arg1 targetAppBundleID:(NSString *)arg2 targetAccountManagement:(int)arg3;
- (bool)isOpenInRestrictionInEffect;
- (bool)mayShowLocalAccountsForBundleID:(NSString *)arg1 sourceAccountManagement:(int)arg2;
- (bool)mayShowLocalAccountsForTargetBundleID:(NSString *)arg1 targetAccountManagement:(int)arg2;

@end
