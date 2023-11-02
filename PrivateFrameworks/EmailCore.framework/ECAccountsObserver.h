
@interface ECAccountsObserver : NSObject <EFLoggable> {
    ACAccountStore * _accountStore;
}

@property (nonatomic, retain) ACAccountStore *accountStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)log;
+ (id)observedAccountTypes;

- (void).cxx_destruct;
- (void)_accountStoreDidChange:(id)arg1;
- (void)_credentialsDidChange:(id)arg1;
- (void)_mailAccountsChanged:(id)arg1;
- (bool)_shouldNotifyOnAccountChangeForNotification:(id)arg1;
- (id)accountStore;
- (void)handleAccountStoreChangeForAccountIdentifier:(id)arg1;
- (void)handleCredentialChangeForAccountIdentifier:(id)arg1;
- (void)handleMailAccountsHaveChanged:(id)arg1 accountsNeedInitialization:(bool)arg2;
- (id)initWithAccountStore:(id)arg1;
- (void)setAccountStore:(id)arg1;

@end
