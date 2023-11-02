
@interface QLCacheIndexDatabaseGenericEnumerator : NSObject {
    QLSqliteDatabase * _sqliteDatabase;
    struct sqlite3_stmt { } * _stmt;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithSqliteDatabase:(id)arg1;

@end
