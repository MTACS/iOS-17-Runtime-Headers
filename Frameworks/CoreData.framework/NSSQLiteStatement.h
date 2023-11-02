
@interface NSSQLiteStatement : NSObject {
    NSMutableArray * _bindIntarrays;
    NSMutableArray * _bindVariables;
    struct sqlite3_stmt { } * _cachedSQLiteStatement;
    NSCachedFetchRequestInfo * _cachedStatementInfo;
    NSSQLEntity * _entity;
    NSSQLEntity * _fakeEntityForFetch;
    bool  _isImpossibleCondition;
    void * _owner;
    NSString * _sqlString;
    bool  _trackChangedRowCount;
}

- (id)bindIntarrays;
- (id)bindVariables;
- (void)dealloc;
- (id)description;
- (id)entity;
- (id)initWithEntity:(id)arg1;
- (id)initWithEntity:(id)arg1 sqlString:(id)arg2;
- (id)sqlString;

@end
