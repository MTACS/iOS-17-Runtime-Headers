
@interface PPSSQLiteDatabase : NSObject {
    NSURL * _databaseURL;
    struct sqlite3 { } * _db;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    struct __CFDictionary { } * _statementCache;
}

@property (nonatomic, readonly, copy) NSURL *databaseURL;

+ (bool)_stepStatement:(struct sqlite3_stmt { }*)arg1 hasRow:(bool*)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (void)_accessDatabaseUsingBlock:(id /* block */)arg1;
- (bool)_prepareStatementForSQL:(id)arg1 shouldCache:(bool)arg2 error:(id*)arg3 usingBlock:(id /* block */)arg4;
- (struct sqlite3_stmt { }*)_statementForSQL:(id)arg1 shouldCache:(bool)arg2 error:(id*)arg3;
- (void)clearStatementCache;
- (void)close;
- (id)columnNamesForTable:(id)arg1;
- (id)databaseURL;
- (void)dealloc;
- (bool)executeSQL:(id)arg1 error:(id*)arg2;
- (bool)executeSQL:(id)arg1 shouldCache:(bool)arg2 error:(id*)arg3 bindingHandler:(id /* block */)arg4 enumerationHandler:(id /* block */)arg5;
- (id)initWithDatabaseURL:(id)arg1;
- (int)openForReadingWithError:(id*)arg1;
- (id)tableNames;
- (bool)tableWithName:(id)arg1 containsColumnWithName:(id)arg2;
- (id)typeForColumn:(id)arg1 inTable:(id)arg2 error:(id*)arg3;

@end
