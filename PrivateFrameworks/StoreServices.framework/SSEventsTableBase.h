
@interface SSEventsTableBase : NSObject {
    SSSQLiteDatabase * _database;
}

+ (id)databasePath;

- (void).cxx_destruct;
- (bool)_setupDatabase;
- (id)init;
- (void)performTransactionWithBlock:(id /* block */)arg1;

@end
