
@interface WFAccount : MTLModel <NSSecureCoding> {
    NSString * _accountID;
    NSDate * _createdAt;
    NSDate * _updatedAt;
}

@property (nonatomic, readonly, copy) NSString *accountID;
@property (nonatomic, readonly, copy) NSDate *createdAt;
@property (nonatomic, readonly, copy) NSString *localizedName;
@property (nonatomic, readonly, copy) NSDate *updatedAt;
@property (getter=isValid, nonatomic, readonly) bool valid;

+ (id)_accounts;
+ (unsigned long long)_numberOfAccounts;
+ (id)accountCache;
+ (id)accounts;
+ (id)addAccountObserver:(id /* block */)arg1;
+ (void)addAccountObserver:(id /* block */)arg1 forService:(id)arg2;
+ (bool)allowsMultipleAccounts;
+ (bool)deleteAccount:(id)arg1;
+ (void)handleChangeForService:(id)arg1;
+ (id)localizedServiceName;
+ (id)migrate:(id)arg1;
+ (void)notifyAccountsChanged;
+ (unsigned long long)numberOfAccounts;
+ (id)pendingIgnoredNotifications;
+ (void)removeAccountObserver:(id)arg1;
+ (bool)saveAccount:(id)arg1;
+ (id)serviceID;
+ (id)serviceName;
+ (void)setShouldIgnoreNotificationForService:(id)arg1;
+ (bool)shouldIgnoreNotificationForService:(id)arg1;
+ (bool)supportsSecureCoding;
+ (void)useAccountObservers:(id /* block */)arg1;

- (void).cxx_destruct;
- (id)accountID;
- (id)createdAt;
- (id)init;
- (void)invalidateWithCompletionHandler:(id /* block */)arg1;
- (bool)isValid;
- (id)localizedName;
- (void)refreshWithCompletionHandler:(id /* block */)arg1;
- (id)updatedAt;

@end
