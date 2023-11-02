
@interface EDPersistenceDatabase : NSObject <EDPersistenceDatabaseConnectionDelegate, EDPersistenceDatabaseConnectionPoolDelegate, EFLoggable> {
    NSString * _basePath;
    EMForceBlankCellsController * _blankCellsController;
    EDPersistenceDatabaseConnectionPool * _connectionPool;
    NSString * _databaseName;
    NSString * _fullPath;
    EFSQLPropertyMapper * _propertyMapper;
    EDProtectedDatabasePersistence * _protectedDatabasePersistence;
    EFSQLSchema * _protectedSchema;
    EFSQLSchema * _schema;
    bool  _setupIsComplete;
}

@property (nonatomic, readonly) NSString *basePath;
@property (nonatomic, readonly) bool databaseIsCorrupt;
@property (nonatomic, readonly) NSString *databaseName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool enforceDataProtection;
@property (nonatomic, readonly) NSString *fullPath;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isNestedDatabaseCall;
@property (nonatomic, readonly) EFSQLPropertyMapper *propertyMapper;
@property (nonatomic, readonly) EDProtectedDatabasePersistence *protectedDatabasePersistence;
@property (nonatomic, readonly) EFSQLSchema *protectedSchema;
@property (nonatomic, readonly) EFSQLSchema *schema;
@property bool setupIsComplete;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool writersAreWaiting;

+ (id)log;

- (void).cxx_destruct;
- (id)basePath;
- (void)checkInConnection:(id)arg1;
- (id)checkOutConnectionIsWriter:(bool)arg1;
- (void)closeAllConnections;
- (bool)databaseIsCorrupt;
- (id)databaseName;
- (bool)enforceDataProtection;
- (id)fileProtectionForDatabaseType:(long long)arg1;
- (id)fullPath;
- (void)handleExceptionCreatingConnection:(id)arg1;
- (id)init;
- (id)initWithBasePath:(id)arg1 databaseName:(id)arg2 maxConcurrentReaders:(unsigned long long)arg3 schema:(id)arg4 protectedSchema:(id)arg5 propertyMapper:(id)arg6 protectedDatabasePersistence:(id)arg7;
- (bool)isNestedDatabaseCall;
- (id)openConnectionIsWriter:(bool)arg1;
- (bool)performDatabaseSetupUsingTransaction:(bool)arg1 block:(id /* block */)arg2;
- (void)performDatabaseWorkInBlockWithHighPriority:(id /* block */)arg1;
- (bool)performReadBlock:(id /* block */)arg1;
- (bool)performWithOptions:(unsigned long long)arg1 block:(id /* block */)arg2;
- (bool)performWriteBlock:(id /* block */)arg1;
- (id)propertyMapper;
- (id)protectedDatabasePersistence;
- (id)protectedSchema;
- (void)reconcileJournalWithCompletionBlock:(id /* block */)arg1;
- (void)scheduleRecurringActivity;
- (id)schema;
- (void)setSetupIsComplete:(bool)arg1;
- (bool)setupIsComplete;
- (id)urlForDatabasePath:(id)arg1 type:(long long)arg2;
- (id)urlForDatabasePath:(id)arg1 type:(long long)arg2 fileProtection:(id)arg3;
- (bool)writersAreWaiting;

@end
