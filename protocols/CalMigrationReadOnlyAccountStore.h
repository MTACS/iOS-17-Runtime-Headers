
@protocol CalMigrationReadOnlyAccountStore <NSObject>

@required

- (<CalMigrationReadOnlyAccount> *)accountWithIdentifier:(NSString *)arg1;
- (NSArray *)childAccountsForAccount:(id <CalMigrationReadOnlyAccount>)arg1 withTypeIdentifier:(NSString *)arg2;
- (NSArray *)topLevelAccountsWithAccountTypeIdentifier:(NSString *)arg1 error:(id*)arg2;

@end
