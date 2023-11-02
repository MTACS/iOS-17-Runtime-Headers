
@interface CalAccountsDatabaseMigrationReadOnlyAccountStore : NSObject <CalMigrationReadOnlyAccountStore> {
    struct sqlite3 { } * _database;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (int)_calendarDataClassIdentifier:(struct sqlite3 { }*)arg1;
+ (id)_unarchiveData:(id)arg1;

- (id)accountWithIdentifier:(id)arg1;
- (id)childAccountsForAccount:(id)arg1 withTypeIdentifier:(id)arg2;
- (void)dealloc;
- (id)initWithDatabaseURL:(id)arg1;
- (id)topLevelAccountsWithAccountTypeIdentifier:(id)arg1 error:(id*)arg2;

@end
