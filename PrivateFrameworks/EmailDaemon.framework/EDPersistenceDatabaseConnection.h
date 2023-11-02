
@interface EDPersistenceDatabaseConnection : NSObject <EFLoggable> {
    NSString * _basePath;
    <EDPersistenceDatabaseConnectionDelegate> * _delegate;
    bool  _isWriter;
    EDPersistenceDatabaseJournal * _journal;
    NSString * _journalDatabaseName;
    NSString * _protectedDatabaseName;
    EFSQLConnection * _sqlConnection;
}

@property (nonatomic, readonly) NSString *basePath;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *fullPath;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isValid;
@property (nonatomic, readonly) bool isWriter;
@property (nonatomic, readonly) bool journalDatabaseAttached;
@property (nonatomic, readonly) long long lastInsertedDatabaseID;
@property (nonatomic, readonly) bool protectedDatabaseAttached;
@property (nonatomic, readonly, copy) NSString *protectedDatabasePath;
@property (nonatomic, readonly) EFSQLConnection *sqlConnection;
@property (nonatomic, readonly) struct sqlite3 { }*sqlDB;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long transactionGeneration;

+ (id)log;

- (void).cxx_destruct;
- (bool)attachJournalDatabase:(id)arg1 withName:(id)arg2;
- (bool)attachJournalDatabase:(id)arg1 withName:(id)arg2 error:(id*)arg3;
- (bool)attachProtectedDatabaseWithName:(id)arg1;
- (bool)attachProtectedDatabaseWithName:(id)arg1 error:(id*)arg2;
- (bool)attachProtectedDatabaseWithName:(id)arg1 url:(id)arg2 error:(id*)arg3;
- (id)basePath;
- (bool)checkForConnectionErrorWithMessage:(id)arg1;
- (void)clearLastInsertedDatabaseID;
- (void)close;
- (bool)columnExists:(id)arg1 inTable:(id)arg2 database:(id)arg3 type:(unsigned long long*)arg4;
- (bool)columnExists:(id)arg1 inTable:(id)arg2 type:(unsigned long long*)arg3;
- (int)configureSQLConnection;
- (unsigned long long)countForSelectStatement:(id)arg1;
- (id)databaseIDsForSelectStatement:(id)arg1;
- (bool)databaseIsAttached:(id)arg1;
- (void)dealloc;
- (id)description;
- (bool)detachJournalDatabase;
- (bool)detachProtectedDatabase;
- (bool)executeDeleteStatement:(id)arg1 error:(id*)arg2;
- (bool)executeDeleteStatement:(id)arg1 rowsChanged:(unsigned long long*)arg2;
- (bool)executeInsertStatement:(id)arg1 error:(id*)arg2;
- (bool)executeInsertStatement:(id)arg1 rowsChanged:(unsigned long long*)arg2;
- (bool)executeSelectStatement:(id)arg1 withBlock:(id /* block */)arg2 error:(id*)arg3;
- (bool)executeStatementString:(id)arg1 errorMessage:(id)arg2;
- (bool)executeUpdateStatement:(id)arg1 error:(id*)arg2;
- (bool)executeUpdateStatement:(id)arg1 rowsChanged:(unsigned long long*)arg2;
- (bool)executeUpsertStatement:(id)arg1 error:(id*)arg2;
- (bool)executeUpsertStatement:(id)arg1 rowsChanged:(unsigned long long*)arg2;
- (id)fullPath;
- (void)handleError:(id)arg1 message:(id)arg2;
- (void)handleSQLResult:(int)arg1 message:(id)arg2;
- (id)init;
- (id)initForInMemoryDatabaseIsWriter:(bool)arg1 delegate:(id)arg2;
- (id)initWithBasePath:(id)arg1 databaseName:(id)arg2 isWriter:(bool)arg3 delegate:(id)arg4;
- (id)initWithSQLDB:(struct sqlite3 { }*)arg1 isWriter:(bool)arg2 delegate:(id)arg3;
- (bool)isValid;
- (bool)isWriter;
- (bool)journalDatabaseAttached;
- (long long)lastInsertedDatabaseID;
- (void)open;
- (bool)performWithOptions:(unsigned long long)arg1 transactionError:(id*)arg2 block:(id /* block */)arg3;
- (id)preparedStatementForQueryString:(id)arg1;
- (bool)protectedDatabaseAttached;
- (id)protectedDatabasePath;
- (void)setIsWriter:(bool)arg1;
- (id)sqlConnection;
- (struct sqlite3 { }*)sqlDB;
- (bool)tableExists:(id)arg1;
- (bool)tableExists:(id)arg1 inDatabase:(id)arg2;
- (long long)transactionGeneration;
- (long long)transactionTypeForWriting;

@end
