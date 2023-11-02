
@interface QLSqliteDatabase : NSObject {
    struct sqlite3 { } * _db;
    bool  _isCorrupted;
    NSString * _path;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _statementCache;
    NSMapTable * _statementsInUseTable;
    NSString * _tracingPrefix;
    long long  transactionCount;
}

@property bool isCorrupted;
@property (retain) NSString *tracingPrefix;

+ (void)toggleSqlLogging;

- (void).cxx_destruct;
- (id)_cacheStatement:(struct sqlite3_stmt { }*)arg1 forKey:(id)arg2;
- (id)_cachedStatementForKey:(id)arg1;
- (id)_crapPath;
- (void)_databaseCorrupted;
- (void)_dropStatementCache;
- (void)_finalizeStatement:(struct sqlite3_stmt {}**)arg1;
- (bool)beginTransaction;
- (void)bindBytes:(void*)arg1 length:(unsigned int)arg2 atIndex:(int)arg3 inStatement:(struct sqlite3_stmt { }*)arg4;
- (void)bindCFURL:(struct __CFURL { }*)arg1 atIndex:(int)arg2 inStatement:(struct sqlite3_stmt { }*)arg3;
- (void)bindDouble:(double)arg1 atIndex:(int)arg2 inStatement:(struct sqlite3_stmt { }*)arg3;
- (void)bindInt:(int)arg1 atIndex:(int)arg2 inStatement:(struct sqlite3_stmt { }*)arg3;
- (void)bindObject:(id)arg1 atIndex:(int)arg2 inStatement:(struct sqlite3_stmt { }*)arg3;
- (void)bindPath:(id)arg1 atIndex:(int)arg2 inStatement:(struct sqlite3_stmt { }*)arg3;
- (void)bindUnsignedLongLong:(unsigned long long)arg1 atIndex:(int)arg2 inStatement:(struct sqlite3_stmt { }*)arg3;
- (void)checkpoint;
- (void)closeDatabase;
- (long long)columnCount:(struct sqlite3_stmt { }*)arg1;
- (void)dealloc;
- (void)disableSqliteTracing;
- (void)do:(id /* block */)arg1;
- (double)doubleFromColumn:(int)arg1 inStatement:(struct sqlite3_stmt { }*)arg2;
- (void)enableSqliteTracing:(id)arg1;
- (void)endTransaction;
- (void)execute:(const char *)arg1;
- (void)executeSql:(const char *)arg1 withCallback:(int (*)arg2 context:(void*)arg3;
- (void)executeWithBlob:(const void*)arg1 length:(int)arg2 format:(const char *)arg3;
- (void)executeWithCallback:(int (*)arg1 context:(void*)arg2 rollbackOnError:(bool)arg3 sql:(const char *)arg4 arguments:(char *)arg5;
- (void)executeWithCallback:(int (*)arg1 context:(void*)arg2 sql:(const char *)arg3;
- (void)executeWithRollbackOnError:(const char *)arg1;
- (void)finalizeStatement:(struct sqlite3_stmt {}**)arg1;
- (float)floatFromColumn:(int)arg1 inStatement:(struct sqlite3_stmt { }*)arg2;
- (id)init;
- (int)intFromColumn:(int)arg1 inStatement:(struct sqlite3_stmt { }*)arg2;
- (bool)isCorrupted;
- (bool)isOpened;
- (id)lastCrapWithDate:(id*)arg1;
- (long long)lastInsertRowId;
- (void*)newBufferFromColumn:(int)arg1 inStatement:(struct sqlite3_stmt { }*)arg2 length:(unsigned int*)arg3;
- (struct __CFString { }*)newCFStringFromColumn:(int)arg1 inStatement:(struct sqlite3_stmt { }*)arg2 uniqueInStringTable:(id)arg3;
- (struct __CFURL { }*)newCFURLFromColumn:(int)arg1 inStatement:(struct sqlite3_stmt { }*)arg2;
- (id)newColumnName:(int)arg1 inStatement:(struct sqlite3_stmt { }*)arg2 uniqueInStringTable:(id)arg3;
- (id)newDataFromColumn:(int)arg1 inStatement:(struct sqlite3_stmt { }*)arg2 copyBytes:(bool)arg3;
- (id)newPathFromColumn:(int)arg1 inStatement:(struct sqlite3_stmt { }*)arg2 uniqueInStringTable:(id)arg3;
- (id)newStringFromColumn:(int)arg1 inStatement:(struct sqlite3_stmt { }*)arg2 uniqueInStringTable:(id)arg3;
- (void)openDatabaseAtPath:(id)arg1;
- (struct sqlite3_stmt { }*)prepareStatement:(const char *)arg1;
- (id)queue;
- (void)resetStatement:(struct sqlite3_stmt { }*)arg1 unbindValuesThroughIndex:(int)arg2;
- (void)runStatement:(struct sqlite3_stmt { }*)arg1 stepHandler:(id /* block */)arg2;
- (void)runStatement:(struct sqlite3_stmt { }*)arg1 withBoundNumbers:(id)arg2 startingAtIndex:(int)arg3 stepHandler:(id /* block */)arg4;
- (void)runStatement:(struct sqlite3_stmt { }*)arg1 withBoundObjects:(id)arg2 startingAtIndex:(int)arg3 stepHandler:(id /* block */)arg4;
- (void)runStatement:(struct sqlite3_stmt { }*)arg1 withBoundRowIds:(unsigned long long*)arg2 count:(unsigned long long)arg3 startingAtIndex:(int)arg4 stepHandler:(id /* block */)arg5;
- (void)runStatement:(struct sqlite3_stmt { }*)arg1 withBoundRowIds:(id)arg2 startingAtIndex:(int)arg3 stepHandler:(id /* block */)arg4;
- (void)setIsCorrupted:(bool)arg1;
- (void)setSqliteCacheSize:(long long)arg1;
- (void)setTracingPrefix:(id)arg1;
- (void)sqliteCrappedOut:(int)arg1 message:(id)arg2;
- (bool)stepStatement:(struct sqlite3_stmt { }*)arg1;
- (bool)stepStatement:(struct sqlite3_stmt { }*)arg1 didReturnData:(bool*)arg2;
- (id)tracingPrefix;
- (unsigned long long)unsignedLongLongFromColumn:(int)arg1 inStatement:(struct sqlite3_stmt { }*)arg2;
- (void)vacuum;

@end
