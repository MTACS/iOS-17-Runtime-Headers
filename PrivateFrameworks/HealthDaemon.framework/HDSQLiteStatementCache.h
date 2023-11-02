
@interface HDSQLiteStatementCache : NSObject {
    struct __CFSet { } * _activeStatements;
    struct sqlite3 { } * _db;
    _HDSQLiteStatementCacheStorage * _defaultStatementStorage;
    long long  _faultCount;
    bool  _inTransaction;
    _HDSQLiteStatementCacheStorage * _transactionStatementStorage;
    struct __CFSet { } * _uncachedActiveStatements;
}

@property (nonatomic, readonly, copy) NSSet *allStatmentSQLStrings;
@property (nonatomic, readonly) long long count;
@property (nonatomic, readonly) long long faultCount;

- (void).cxx_destruct;
- (id)allStatmentSQLStrings;
- (void)beginTransaction;
- (void)checkInStatement:(struct sqlite3_stmt { }*)arg1;
- (struct sqlite3_stmt { }*)checkOutCachedStatementForKey:(const char *)arg1 SQLGenerator:(id /* block */)arg2 error:(id*)arg3;
- (struct sqlite3_stmt { }*)checkOutStatementForSQL:(id)arg1 shouldCache:(bool)arg2 error:(id*)arg3;
- (void)clearCachedStatements;
- (long long)count;
- (void)dealloc;
- (void)endTransaction;
- (long long)faultCount;
- (id)init;
- (id)initWithDatabase:(struct sqlite3 { }*)arg1;

@end
