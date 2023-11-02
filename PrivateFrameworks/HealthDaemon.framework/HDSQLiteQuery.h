
@interface HDSQLiteQuery : NSObject {
    HDSQLiteDatabase * _database;
    HDSQLiteQueryDescriptor * _descriptor;
    NSString * _lastSQLStatement;
}

@property (readonly) HDSQLiteDatabase *database;
@property (readonly, copy) NSString *lastSQLStatement;
@property (readonly) HDSQLiteQueryDescriptor *queryDescriptor;

- (void).cxx_destruct;
- (id)database;
- (bool)deleteAllEntitiesWithError:(id*)arg1;
- (bool)enumeratePersistentIDsAndProperties:(id)arg1 error:(id*)arg2 enumerationHandler:(id /* block */)arg3;
- (bool)enumerateProperties:(id)arg1 error:(id*)arg2 enumerationHandler:(id /* block */)arg3;
- (id)initWithDatabase:(id)arg1 descriptor:(id)arg2;
- (id)lastSQLStatement;
- (id)queryDescriptor;

@end
