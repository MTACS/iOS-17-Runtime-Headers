
@interface CKVSQLiteCachedStatement : NSObject {
    struct sqlite3_stmt { } * _stmt;
}

- (void)dealloc;
- (id)init;
- (id)initWithStmt:(struct sqlite3_stmt { }*)arg1;
- (struct sqlite3_stmt { }*)stmt;

@end
