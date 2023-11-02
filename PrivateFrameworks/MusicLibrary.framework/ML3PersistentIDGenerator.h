
@interface ML3PersistentIDGenerator : NSObject {
    ML3DatabaseConnection * _connection;
    long long  _currentPersistentID;
    long long  _nextUsedPersistentID;
    NSString * _nextUsedPersistentIdSQL;
    NSString * _tableName;
    NSString * _validateStartingPersistentIdSQL;
}

- (void).cxx_destruct;
- (void)_calculateNewRun;
- (id)initWithDatabaseConnection:(id)arg1 tableName:(id)arg2;
- (long long)nextPersistentID;

@end
