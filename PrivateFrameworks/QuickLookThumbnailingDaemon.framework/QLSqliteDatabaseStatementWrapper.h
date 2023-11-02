
@interface QLSqliteDatabaseStatementWrapper : NSObject {
    NSMapTable * _inUseTable;
    NSString * _key;
    struct sqlite3_stmt { } * _stmt;
}

@property (getter=isInUse, nonatomic) bool inUse;
@property (nonatomic, copy) NSString *key;
@property (nonatomic) struct sqlite3_stmt { }*stmt;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithStatement:(struct sqlite3_stmt { }*)arg1 key:(id)arg2 inUseTable:(id)arg3;
- (bool)isInUse;
- (id)key;
- (void)setInUse:(bool)arg1;
- (void)setKey:(id)arg1;
- (void)setStmt:(struct sqlite3_stmt { }*)arg1;
- (struct sqlite3_stmt { }*)stmt;

@end
