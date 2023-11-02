
@interface _PASSQLColumnMapping : NSObject {
    const struct _PASCompactStringArray { } * _columnAliases;
    struct sqlite3_stmt { } * _stmt;
    int  _stmtReprepareCounter;
    const struct _PASCompactStringArray { } * _tableColumnNamesFromSchema;
    const char * _uniqueTableName;
}

- (void)_deallocState;
- (void)_ensureColumnMappingExists;
- (void)dealloc;
- (int)indexForColumnAlias:(const char *)arg1;
- (int)indexForColumnName:(const char *)arg1 table:(const char *)arg2;
- (id)initWithStatementPtr:(struct sqlite3_stmt { }*)arg1;
- (void)invalidate;
- (void)invalidateIfNeeded;
- (void)resetSearchHint;

@end
