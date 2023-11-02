
@interface FedStatsSQLiteDatabase : NSObject {
    struct sqlite3 { } * _database;
}

@property (readonly) struct sqlite3 { }*database;

+ (id)databaseWithURL:(id)arg1 mode:(BOOL)arg2 error:(id*)arg3;

- (struct sqlite3 { }*)database;
- (void)dealloc;
- (bool)execute:(id)arg1 error:(id*)arg2;
- (id)initWithDatabase:(struct sqlite3 { }*)arg1;
- (id)runQuery:(id)arg1 error:(id*)arg2;

@end
