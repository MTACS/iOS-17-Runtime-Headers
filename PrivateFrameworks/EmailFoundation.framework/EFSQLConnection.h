
@interface EFSQLConnection : NSObject <EFLoggable> {
    NSHashTable * _preparedStatements;
    struct sqlite3 { } * _sqlDB;
    NSURL * _url;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isOpen;
@property (nonatomic, readonly) struct sqlite3 { }*sqlDB;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSURL *url;

+ (bool)isSuccessResultCode:(int)arg1 forStep:(bool)arg2 error:(id*)arg3;
+ (id)log;
+ (bool)setFileProtection:(id)arg1 forDatabaseAtURL:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (bool)_isSuccessResultCode:(int)arg1 sqlDB:(struct sqlite3 { }*)arg2 error:(id*)arg3;
- (bool)beginTransaction:(long long)arg1 error:(id*)arg2;
- (void)close;
- (bool)commitTransactionWithError:(id*)arg1;
- (id)description;
- (bool)executeStatementString:(id)arg1 error:(id*)arg2;
- (bool)finalizeStatementsWithError:(id*)arg1;
- (void)flush;
- (id)init;
- (id)initWithInMemoryDatabase;
- (id)initWithSQLDB:(struct sqlite3 { }*)arg1;
- (id)initWithURL:(id)arg1;
- (bool)isOpen;
- (bool)openWithError:(id*)arg1;
- (bool)openWithFlags:(int)arg1 error:(id*)arg2;
- (id)preparedStatementForQueryString:(id)arg1;
- (id)resultsForQueryString:(id)arg1;
- (bool)rollbackTransactionWithError:(id*)arg1;
- (struct sqlite3 { }*)sqlDB;
- (id)url;

@end
