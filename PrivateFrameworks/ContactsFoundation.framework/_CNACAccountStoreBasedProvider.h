
@interface _CNACAccountStoreBasedProvider : CNACAccountProvider {
    ACAccountStore * _accountStore;
}

@property (nonatomic, readonly) ACAccountStore *accountStore;

- (void).cxx_destruct;
- (id)accountStore;
- (id)accountsWithAccountType:(id)arg1;
- (id)allAccountTypes;
- (id)childAccountsForAccount:(id)arg1;
- (id)initWithAccountStore:(id)arg1;
- (bool)isAccountSyncable:(id)arg1;
- (bool)isAnyAccountSyncableIgnoringAccount:(id)arg1;

@end
