
@protocol CalMigrationAccountStore <CalMigrationReadOnlyAccountStore>

@required

- (<CalMigrationAccount> *)accountWithIdentifier:(NSString *)arg1;
- (NSArray *)childAccountsForAccount:(id <CalMigrationAccount>)arg1 withTypeIdentifier:(NSString *)arg2;
- (<CalMigrationAccount> *)createAccountWithAccountTypeIdentifier:(NSString *)arg1 error:(id*)arg2;
- (<CalMigrationAccount> *)createChildAccountOfParent:(id <CalMigrationAccount>)arg1 withAccountTypeIdentifier:(NSString *)arg2 error:(id*)arg3;
- (bool)removeAccount:(id <CalMigrationAccount>)arg1 error:(id*)arg2;
- (bool)saveAccount:(id <CalMigrationAccount>)arg1 withError:(id*)arg2;
- (NSArray *)topLevelAccountsWithAccountTypeIdentifier:(NSString *)arg1 error:(id*)arg2;

@end
