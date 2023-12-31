
@interface WBSSQLiteStatementCache : NSObject {
    WBSSQLiteDatabase * _database;
    NSMutableDictionary * _statements;
}

- (void).cxx_destruct;
- (id)_createStatementForQuery:(id)arg1 error:(id*)arg2;
- (id)cachedStatementForQuery:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithDatabase:(id)arg1;
- (void)invalidate;
- (void)setCachedStatement:(id)arg1 forQuery:(id)arg2;
- (id)statementForQuery:(id)arg1 error:(id*)arg2;

@end
