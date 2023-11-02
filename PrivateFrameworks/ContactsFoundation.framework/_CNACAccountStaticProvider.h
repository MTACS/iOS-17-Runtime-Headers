
@interface _CNACAccountStaticProvider : CNACAccountProvider {
    NSArray * _accountChildAccountsPairs;
}

@property (nonatomic, readonly) NSArray *accountChildAccountsPairs;

- (void).cxx_destruct;
- (id)accountChildAccountsPairs;
- (id)accountsWithAccountType:(id)arg1;
- (id)allAccountTypes;
- (id)childAccountsForAccount:(id)arg1;
- (id)initWithAccounts:(id)arg1;
- (bool)isAccountSyncable:(id)arg1;

@end
