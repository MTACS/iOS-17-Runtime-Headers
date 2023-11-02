
@interface FedStatSQLiteDatabaseQueryResult : NSObject {
    struct sqlite3_stmt { } * _queryStatement;
}

@property struct sqlite3_stmt { }*queryStatement;

- (void)dealloc;
- (id)initWithQueryStatement:(struct sqlite3_stmt { }*)arg1;
- (id)next;
- (struct sqlite3_stmt { }*)queryStatement;
- (void)setQueryStatement:(struct sqlite3_stmt { }*)arg1;

@end
