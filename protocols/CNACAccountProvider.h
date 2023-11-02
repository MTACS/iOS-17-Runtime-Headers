
@protocol CNACAccountProvider <NSObject>

@required

- (NSArray *)accountsWithAccountType:(ACAccountType *)arg1;
- (NSArray *)allAccountTypes;
- (NSArray *)childAccountsForAccount:(ACAccount *)arg1;
- (bool)isAccountSyncable:(ACAccount *)arg1;
- (bool)isAnyAccountSyncableIgnoringAccount:(ACAccount *)arg1;

@end
