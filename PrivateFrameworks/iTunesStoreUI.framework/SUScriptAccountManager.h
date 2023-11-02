
@interface SUScriptAccountManager : NSObject {
    NSMutableArray * _accounts;
    NSLock * _lock;
}

@property (readonly, retain) NSArray *accounts;

+ (id)beginAccountManagerSessionForObject:(id)arg1;
+ (void)endAccountManagerSessionForObject:(id)arg1;

- (void)_accountsChangedNotification:(id)arg1;
- (void)_dispatchEvent:(id)arg1 forName:(id)arg2;
- (void)_ntsReloadAccounts;
- (id)accountForDSID:(id)arg1;
- (id)accounts;
- (void)dealloc;
- (id)init;

@end
