
@interface CKSQLiteTableGroup : CKSQLiteTableGroupEntry <CKSQLiteDatabaseKeyValueProperties> {
    CKSQLiteDatabase * _activityPersistenceDatabase;
    NSError * _addTableError;
    CKSQLiteDatabaseManager * _databaseManager;
    NSObject * _databaseManagerData;
    CKSQLiteDatabase * _db;
    bool  _deleteTablesOnDealloc;
    bool  _isFirstInstance;
    bool  _isNew;
    unsigned long long  _options;
    NSMutableDictionary * _pendingTables;
    struct { struct _opaque_pthread_mutex_t { long long x_1_1_1; BOOL x_1_1_2[56]; } x1; struct _opaque_pthread_cond_t { long long x_2_1_1; BOOL x_2_1_2[40]; } x2; _Atomic unsigned long long x3; } * _serializer;
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
    }  _serializerBacking;
    NSMutableDictionary * _tablesByName;
    CKSQLiteTOCTableGroup * _tocTableGroup;
    bool  _valid;
}

@property (nonatomic, retain) CKSQLiteDatabase *activityPersistenceDatabase;
@property (nonatomic, retain) NSObject *databaseManagerData;
@property (nonatomic, readonly) CKSQLiteDatabase *db;
@property (nonatomic, readonly) bool isFirstInstance;
@property (nonatomic, readonly) bool isNew;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) CKSQLiteTOCTableGroup *tocTableGroup;

+ (id)createTableGroupInstanceInDatabase:(id)arg1 withName:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4;
+ (void)enumerateGroupsInDatabase:(id)arg1 block:(id /* block */)arg2;
+ (void)expireGroup:(id)arg1 reason:(id)arg2 database:(id)arg3;
+ (id)groupEntryInDatabase:(id)arg1 withGroupName:(id)arg2 error:(id*)arg3;
+ (id)groupNameWithDomain:(int)arg1 domainIdentifier:(id)arg2 groupName:(id)arg3;
+ (void)groupWillExpire:(id)arg1;
+ (id)lookupTableGroupInstanceInCache:(id)arg1 withName:(id)arg2 options:(unsigned long long)arg3;
+ (id)lookupTableGroupInstanceInDatabase:(id)arg1 withName:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4;
+ (void)purgeGroup:(id)arg1;
+ (void)purgeGroupWithName:(id)arg1 inDatabase:(id)arg2;
+ (bool)rebootShouldClearData;
+ (id)tableGroupInDatabase:(id)arg1 withID:(id)arg2 error:(id*)arg3;
+ (id)tableGroupInDatabase:(id)arg1 withName:(id)arg2 error:(id*)arg3;
+ (id)tableGroupInDatabase:(id)arg1 withName:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4;
+ (id)tableGroupWithEntry:(id)arg1 database:(id)arg2 options:(unsigned long long)arg3;

- (void).cxx_destruct;
- (id)UUIDValueForKey:(id)arg1 error:(id*)arg2;
- (void)_addExtraTablesForTable:(id)arg1;
- (void)_finishConstruction;
- (id)_purge;
- (void)_setupActivityEntry:(id)arg1;
- (id)activityPersistenceDatabase;
- (void)activityTriggerWasRolledBack;
- (void)activityTriggered:(id)arg1;
- (id)allTables;
- (void)assertNotSerialized;
- (void)assertSerialized;
- (id)createDBTable:(id)arg1;
- (id)createTables:(id*)arg1;
- (id)dataValueForKey:(id)arg1 error:(id*)arg2;
- (id)databaseManager:(id*)arg1;
- (id)databaseManagerData;
- (id)dateValueForKey:(id)arg1 error:(id*)arg2;
- (id)db;
- (id)dbTableNameForLogicalTableName:(id)arg1;
- (void)dealloc;
- (id)finishInitializing;
- (void)groupWillPurge;
- (id)init;
- (id)initWithName:(id)arg1 options:(unsigned long long)arg2 database:(id)arg3;
- (bool)isFirstInstance;
- (bool)isNew;
- (id)migrateDataFromGroup:(id)arg1;
- (id)numberValueForKey:(id)arg1 error:(id*)arg2;
- (id)objectValueForKey:(id)arg1 error:(id*)arg2;
- (unsigned long long)options;
- (id)performDataMigration:(id)arg1;
- (id)prepareExistingTables;
- (id)prepareNewTables;
- (id)prepareTables;
- (id)requestCallbackForTarget:(id)arg1 withDate:(id)arg2 coalescingInterval:(double)arg3 minimumSeparation:(double)arg4;
- (id)requestCallbackWithDate:(id)arg1 coalescingInterval:(double)arg2 minimumSeparation:(double)arg3;
- (void)serialize:(id /* block */)arg1;
- (void*)serializer;
- (void)setActivityPersistenceDatabase:(id)arg1;
- (id)setDataValue:(id)arg1 forKey:(id)arg2;
- (void)setDatabaseManagerData:(id)arg1;
- (id)setDateValue:(id)arg1 forKey:(id)arg2;
- (id)setNumberValue:(id)arg1 forKey:(id)arg2;
- (id)setObjectValue:(id)arg1 forKey:(id)arg2;
- (id)setStringValue:(id)arg1 forKey:(id)arg2;
- (id)setUUIDValue:(id)arg1 forKey:(id)arg2;
- (bool)shouldUseDBSerializer;
- (id)stringValueForKey:(id)arg1 error:(id*)arg2;
- (id)tableWithName:(id)arg1;
- (id)tocTable;
- (id)tocTableGroup;
- (id)tocTableGroupInitValue;
- (id)tocTableGroupTable;
- (id)updateGroupData:(id)arg1;
- (void)updateLastUsedDate;
- (long long)validateTableMatchesTOCEntry:(id)arg1;

@end
