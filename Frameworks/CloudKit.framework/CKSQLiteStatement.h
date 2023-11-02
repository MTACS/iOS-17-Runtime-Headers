
@interface CKSQLiteStatement : NSObject {
    NSString * _SQL;
    CKSQLite * _SQLite;
    NSError * _error;
    struct sqlite3_stmt { } * _handle;
    bool  _reset;
    NSMutableArray * _temporaryBoundObjects;
}

- (void).cxx_destruct;
- (void)bindText:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)invalidate:(id)arg1;

@end
