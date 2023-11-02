
@interface _HDSQLiteStatementCacheStorage : NSObject {
    _HDSQLiteStatementCacheStorage * _parentStorage;
    struct __CFDictionary { } * _statementsByKey;
    struct __CFDictionary { } * _statementsBySQL;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end
