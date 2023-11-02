
@interface PLDatabaseReader : NSObject {
    struct sqlite3 { } * _dbConnection;
}

@property struct sqlite3 { }*dbConnection;

- (struct sqlite3 { }*)dbConnection;
- (void)dealloc;
- (id)initWithDatabaseFile:(id)arg1;
- (struct sqlite3 { }*)openDatabaseFile:(id)arg1;
- (id)performStatement:(struct sqlite3_stmt { }*)arg1;
- (id)prepareStatementAndPerformWithString:(id)arg1;
- (void)setDbConnection:(struct sqlite3 { }*)arg1;
- (id)stringValueOfTable:(id)arg1;
- (id)tableNamesFromDatabase;

@end
