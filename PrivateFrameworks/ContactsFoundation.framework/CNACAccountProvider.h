
@interface CNACAccountProvider : NSObject <CNACAccountProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)providerWithAccounts:(id)arg1;
+ (id)providerWithStore:(id)arg1;

- (id)accountsWithAccountType:(id)arg1;
- (id)allAccountTypes;
- (id)childAccountsForAccount:(id)arg1;
- (bool)isAccountSyncable:(id)arg1;
- (bool)isAnyAccountSyncableIgnoringAccount:(id)arg1;

@end
