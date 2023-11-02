
@interface SBAccountStoreManager : NSObject {
    ACAccountStore * _accountStore;
    ACAccount * _primaryAppleAccount;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) ACAccountStore *accountStore;
@property (nonatomic, retain) ACAccount *primaryAppleAccount;

- (void).cxx_destruct;
- (void)_accountStoreDidChange:(id)arg1;
- (void)_queue_updatePrimaryAppleAccount;
- (void)_updatePrimaryAppleAccount;
- (id)accountStore;
- (id)init;
- (id)primaryAppleAccount;
- (void)setPrimaryAppleAccount:(id)arg1;

@end
