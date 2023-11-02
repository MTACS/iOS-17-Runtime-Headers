
@interface CKSQLiteDatabase : NSObject <CKSQLiteDatabaseKeyValueProperties> {
    NSString * _databaseDirectory;
    NSObject<OS_dispatch_group> * _databaseGroup;
    NSObject * _databaseManagerData;
    bool  _databaseWasCreated;
    struct sqlite3 { } * _db;
    bool  _isEmpty;
    unsigned long long  _options;
    CKSQLiteDatabase * _registryDatabase;
    bool  _removeWhenClosed;
    unsigned int  _savepointNestCount;
    struct { 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } lock; 
        struct _opaque_pthread_cond_t { 
            long long __sig; 
            BOOL __opaque[40]; 
        } waitCond; 
        _Atomic unsigned long long accessThread; 
    }  _serializer;
    NSMapTable * _tableGroupCache;
    CKSQLiteTOCTableGroup * _tocTableGroup;
    NSMutableArray * _transactionCompletionHandlers;
    NSData * _uniquingKey;
    NSMutableSet * _validatedTableGroups;
}

@property (nonatomic, readonly, copy) NSString *databaseDirectory;
@property (nonatomic, retain) NSObject *databaseManagerData;
@property (nonatomic, readonly) bool databaseWasCreated;
@property (nonatomic) bool isEmpty;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic) bool removeWhenClosed;
@property (nonatomic, readonly) NSMapTable *tableGroupCache;
@property (nonatomic, readonly) NSData *uniquingKey;

+ (id)databaseArchiveWithObject:(id)arg1;
+ (bool)databaseDidDealloc:(id)arg1 timeout:(double)arg2;
+ (id)databaseFilePathInDirectory:(id)arg1;
+ (id)databaseInDirectory:(id)arg1 registryDatabase:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4;
+ (void)initialize;
+ (id)newInMemoryDatabase:(id*)arg1;
+ (void)removeLegacyDatabaseAtPath:(id)arg1;
+ (void)resetValidatedDatabases;
+ (id)temporaryDatabaseDirectory;
+ (id)unarchivedObjectFromDatabaseArchive:(id)arg1;
+ (id)uniquingKeyForDatabaseDirectory:(id)arg1;

- (void).cxx_destruct;
- (id)UUIDValueForKey:(id)arg1 error:(id*)arg2;
- (id)_pruneTables;
- (id)_validateVersionNumbers;
- (void)addTransactionCompletionHandler:(id /* block */)arg1;
- (id)allTableNames:(id*)arg1;
- (void)assertDbNotSerialized;
- (void)assertDbSerialized;
- (void)assertInTransaction;
- (id)bootstrap;
- (unsigned long long)changeCount;
- (void)closeDatabase;
- (void*)compiledStatementWithSQL:(id)arg1 error:(id*)arg2;
- (id)createNewDatabase;
- (id)dataValueForKey:(id)arg1 error:(id*)arg2;
- (id)databaseDirectory;
- (id)databaseFilePath;
- (id)databaseManager:(id*)arg1;
- (id)databaseManagerData;
- (bool)databaseWasCreated;
- (id)dateValueForKey:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (id)deallocToken;
- (id)description;
- (id)dropTable:(id)arg1;
- (id)executeSQL:(id)arg1;
- (void)finalizeHandle:(void*)arg1;
- (id)initWithDatabaseDirectory:(id)arg1 registryDatabase:(id)arg2 options:(unsigned long long)arg3;
- (bool)isEmpty;
- (long long)lastInsertRowID;
- (id)managerForRegistryDatabase:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (id)numberValueForKey:(id)arg1 error:(id*)arg2;
- (id)objectValueForKey:(id)arg1 error:(id*)arg2;
- (id)openExistingDatabase:(bool)arg1;
- (unsigned long long)options;
- (id)performDatabaseTransaction:(id /* block */)arg1;
- (id)performInDatabaseTransaction:(id /* block */)arg1;
- (id)removeDatabaseDirectory;
- (void)removeValidatedTableGroup:(id)arg1;
- (bool)removeWhenClosed;
- (void*)serializer;
- (id)setDataValue:(id)arg1 forKey:(id)arg2;
- (void)setDatabaseManagerData:(id)arg1;
- (id)setDateValue:(id)arg1 forKey:(id)arg2;
- (void)setIsEmpty:(bool)arg1;
- (id)setNumberValue:(id)arg1 forKey:(id)arg2;
- (id)setObjectValue:(id)arg1 forKey:(id)arg2;
- (void)setRemoveWhenClosed:(bool)arg1;
- (id)setStringValue:(id)arg1 forKey:(id)arg2;
- (id)setUUIDValue:(id)arg1 forKey:(id)arg2;
- (void)setupDatabaseConnection;
- (id)sqlErrorWithMessage:(id)arg1;
- (id)stringValueForKey:(id)arg1 error:(id*)arg2;
- (id)tableGroupCache;
- (void)tableGroupPassedValidation:(id)arg1;
- (bool)tableGroupWasPreviouslyValidated:(id)arg1;
- (id)tocTableGroup;
- (void)traceSQL;
- (id)uniquingKey;
- (void)usingTableGroupCachePerformBlock:(id /* block */)arg1;
- (id)validateOpenDatabase;

@end
