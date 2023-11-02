
@interface BMTableStore : NSObject {
    NSArray * _classArray;
    _bmFMDatabase * _db;
    NSURL * _dbURL;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _sqlReplace;
    NSString * _tableName;
}

@property (nonatomic, readonly) NSArray *classArray;
@property (nonatomic, readonly) _bmFMDatabase *db;
@property (nonatomic, readonly) NSURL *dbURL;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } lock;
@property (nonatomic, readonly) NSString *sqlReplace;
@property (nonatomic, readonly) NSString *tableName;

- (void).cxx_destruct;
- (bool)addTable:(id)arg1 named:(id)arg2 error:(id*)arg3;
- (id)classArray;
- (bool)closeDB;
- (id)db;
- (id)dbURL;
- (id)initWithURL:(id)arg1;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (bool)openDB;
- (id)selectTableNamed:(id)arg1 error:(id*)arg2;
- (bool)setupClassArray:(id)arg1 table:(id)arg2 named:(id)arg3 error:(id*)arg4;
- (id)sqlReplace;
- (id)tableName;
- (bool)upsertRows:(id)arg1 error:(id*)arg2;

@end
