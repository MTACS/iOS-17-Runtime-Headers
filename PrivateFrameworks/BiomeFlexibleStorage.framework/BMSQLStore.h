
@interface BMSQLStore : NSObject {
    _bmFMDatabase * _db;
    bool  _dbIsReady;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _dbLock;
    NSURL * _dbURL;
}

@property (nonatomic, readonly) _bmFMDatabase *db;
@property (nonatomic, readonly) bool dbIsReady;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } dbLock;
@property (nonatomic, readonly) NSURL *dbURL;
@property (nonatomic, readonly) void*sqliteHandle;

+ (id)migrations;

- (void).cxx_destruct;
- (id)db;
- (bool)dbIsReady;
- (struct os_unfair_lock_s { unsigned int x1; })dbLock;
- (id)dbURL;
- (id)initWithFMDBHandle:(id)arg1;
- (id)initWithURL:(id)arg1;
- (void*)sqliteHandle;

@end
