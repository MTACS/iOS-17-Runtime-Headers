
@interface HMBSQLContext : HMFObject <HMFLogging> {
    struct sqlite3_stmt { } * _begin;
    struct sqlite3_stmt { } * _commit;
    struct sqlite3 { } * _context;
    bool  _finalized;
    HMFUnfairLock * _lock;
    NSString * _logIdentifier;
    unsigned long long  _mutation;
    NSOperationQueue * _queue;
    bool  _readOnly;
    struct sqlite3_stmt { } * _rollback;
    NSURL * _url;
}

@property (nonatomic) struct sqlite3 { }*context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool finalized;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMFUnfairLock *lock;
@property (nonatomic, retain) NSString *logIdentifier;
@property (nonatomic) unsigned long long mutation;
@property (nonatomic, readonly) NSOperationQueue *queue;
@property (nonatomic, readonly) bool readOnly;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSURL *url;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_finalize;
- (id)_prepareFrom:(id)arg1;
- (id)attributeDescriptions;
- (id)begin;
- (void)close;
- (id)commit;
- (struct sqlite3 { }*)context;
- (void)dealloc;
- (id)execSQLite3:(struct sqlite3_stmt { }*)arg1;
- (unsigned long long)execSQLite3:(struct sqlite3_stmt { }*)arg1 error:(id*)arg2;
- (bool)fetchSQLite3:(struct sqlite3_stmt { }*)arg1 error:(id*)arg2 block:(id /* block */)arg3;
- (bool)fetchSQLite3:(struct sqlite3_stmt { }*)arg1 limit:(unsigned long long)arg2 error:(id*)arg3 block:(id /* block */)arg4;
- (bool)fetchSQLite3One:(struct sqlite3_stmt { }*)arg1 error:(id*)arg2 block:(id /* block */)arg3;
- (void)finalize;
- (bool)finalized;
- (id)initWithURL:(id)arg1 readOnly:(bool)arg2;
- (id)initialize;
- (unsigned long long)insertSQLite3:(struct sqlite3_stmt { }*)arg1 error:(id*)arg2;
- (id)lock;
- (id)logIdentifier;
- (long long)migrateFromSchemaVersion:(long long)arg1 error:(id*)arg2;
- (unsigned long long)mutation;
- (id)prepare;
- (id)queue;
- (bool)readOnly;
- (void)rollback;
- (id)runSQLite3:(const char *)arg1;
- (bool)runSQLite3:(const char *)arg1 error:(id*)arg2;
- (void)setContext:(struct sqlite3 { }*)arg1;
- (void)setFinalized:(bool)arg1;
- (void)setLock:(id)arg1;
- (void)setLogIdentifier:(id)arg1;
- (void)setMutation:(unsigned long long)arg1;
- (id)sqlBlock:(id /* block */)arg1;
- (id)sqlBlockWithActivity:(id)arg1 block:(id /* block */)arg2;
- (id)sqlTransaction:(id /* block */)arg1;
- (id)sqlTransactionWithActivity:(id)arg1 block:(id /* block */)arg2;
- (bool)updateSchemaVersionTo:(long long)arg1 error:(id*)arg2;
- (id)url;

@end
