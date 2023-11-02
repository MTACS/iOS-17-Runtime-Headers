
@interface ICPlayActivityTable : NSObject {
    ICSQLiteConnection * _databaseConnection;
    NSString * _databasePath;
    NSObject<OS_dispatch_queue> * _serialAccessQueue;
}

+ (id)_defaultDatabasePath;
+ (id)_eventsDatabaseTableName;
+ (void)_migrateDatabaseFiles;
+ (id)_propertiesDatabaseTableName;
+ (bool)_setupDatabase:(id)arg1;

- (void).cxx_destruct;
- (bool)_removeDatabaseReturningError:(id*)arg1;
- (bool)_setValue:(id)arg1 forDatabasePropertyKey:(id)arg2;
- (id)_valueForDatabasePropertyKey:(id)arg1;
- (id)eventsRevisionVersionToken;
- (bool)getPlayActivityEvents:(id*)arg1 storeAccountID:(long long)arg2 returningError:(id*)arg3;
- (bool)getStoreAccounts:(id*)arg1 returningError:(id*)arg2;
- (bool)hasPendingPlayActivityEvents:(bool*)arg1 returningError:(id*)arg2;
- (id)init;
- (id)initWithDatabasePath:(id)arg1;
- (bool)insertPlayActivityEvent:(id)arg1 returningError:(id*)arg2;
- (void)performTransactionWithBlock:(id /* block */)arg1;
- (bool)removePlayActivityEvents:(id)arg1 returningError:(id*)arg2;

@end
