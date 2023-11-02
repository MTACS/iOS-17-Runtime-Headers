
@interface BMSQLResultSet : NSObject {
    NSArray * _columns;
    unsigned long long  _cursor;
    BMSQLDatabase * _database;
    NSError * _error;
    bool  _finished;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _query;
    NSDictionary * _row;
    struct sqlite3_stmt { } * _stmt;
}

@property (nonatomic, readonly) NSArray *columns;
@property (nonatomic, readonly) BMSQLDatabase *database;
@property (nonatomic, readonly, copy) NSError *error;
@property (nonatomic, readonly, copy) NSString *query;
@property (nonatomic, readonly) NSDictionary *row;
@property (nonatomic, readonly) struct sqlite3_stmt { }*stmt;

+ (id)new;

- (void).cxx_destruct;
- (bool)_next;
- (id)columns;
- (id)database;
- (void)dealloc;
- (id)description;
- (id)error;
- (id)init;
- (id)initWithQuery:(id)arg1 error:(id)arg2 database:(id)arg3;
- (id)initWithStatement:(struct sqlite3_stmt { }*)arg1 database:(id)arg2;
- (bool)next;
- (id)query;
- (id)row;
- (struct sqlite3_stmt { }*)stmt;

@end
