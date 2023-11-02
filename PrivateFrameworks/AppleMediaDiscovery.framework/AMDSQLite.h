
@interface AMDSQLite : NSObject {
    AMDSQLiteSchema * __biomeSchema;
    AMDSQLiteSchema * __bootstrapSchema;
    struct sqlite3 { } * __db;
    NSError * __error;
    NSObject<OS_dispatch_queue> * __executorQueue;
    bool  __isEnabled;
    AMDSQLiteSchema * __megadomeSchema;
    AMDSQLiteSchema * __schema;
}

@property (nonatomic, retain) AMDSQLiteSchema *_biomeSchema;
@property (nonatomic, retain) AMDSQLiteSchema *_bootstrapSchema;
@property (nonatomic) struct sqlite3 { }*_db;
@property (nonatomic, retain) NSError *_error;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *_executorQueue;
@property (nonatomic) bool _isEnabled;
@property (nonatomic, retain) AMDSQLiteSchema *_megadomeSchema;
@property (nonatomic, retain) AMDSQLiteSchema *_schema;

+ (id)clearUserData:(id)arg1;
+ (id)deleteEventsOlderThan:(unsigned int)arg1;
+ (id)deleteEventsWithPredicate:(id)arg1 forStreams:(id)arg2;
+ (id)getBootstrapSchemaDict;
+ (id)getDomainsFrom:(id)arg1;
+ (id)getFeatureValueWithName:(id)arg1 inDomain:(id)arg2 withColumnName:(id)arg3 skipRowset:(bool)arg4 error:(id*)arg5;
+ (id)getSharedInstance;
+ (id)getSharedInstanceWithOption:(bool)arg1;
+ (id)loadNewData:(id)arg1;
+ (struct sqlite3_stmt { }*)prepare:(id)arg1 usingDb:(struct sqlite3 { }*)arg2 error:(id*)arg3;
+ (id)refreshEntityTableForDomain:(id)arg1 error:(id*)arg2;
+ (id)refreshODTPForDomain:(id)arg1 error:(id*)arg2;
+ (id)saveEvents:(id)arg1 error:(id*)arg2;
+ (id)trimEventsForStreams:(id)arg1 error:(id*)arg2;
+ (id)truncateEvents:(id*)arg1;
+ (id)updateData:(id)arg1;

- (void).cxx_destruct;
- (id)_biomeSchema;
- (id)_bootstrapSchema;
- (struct sqlite3 { }*)_db;
- (id)_error;
- (id)_executorQueue;
- (bool)_isEnabled;
- (id)_megadomeSchema;
- (id)_schema;
- (id)applySchema:(id)arg1 error:(id*)arg2;
- (id)bootstrapDb;
- (id)connectionState;
- (id)createTable:(id)arg1 usingSchema:(id)arg2 error:(id*)arg3;
- (id)deleteRows:(id)arg1 error:(id*)arg2;
- (id)deleteRowsInternal:(id)arg1 error:(id*)arg2;
- (id)fetchRows:(id)arg1 andPersist:(bool)arg2 error:(id*)arg3;
- (id)fetchRowsFrom:(struct sqlite3 { }*)arg1 usingDescriptor:(id)arg2 andSchema:(id)arg3 columnMajorOutput:(bool)arg4 rowMajorOutput:(bool)arg5 andPersist:(bool)arg6 error:(id*)arg7;
- (id)fetchRowsUsingSchema:(id)arg1 andDescriptor:(id)arg2 andPersist:(bool)arg3 error:(id*)arg4;
- (id)getBiomeSchema;
- (id)getBootSchema;
- (id)getDataSchema;
- (struct sqlite3 { }*)getDb;
- (id)getError;
- (id)getMegadomeSchema;
- (id)insertRows:(id)arg1 usingSchema:(id)arg2 error:(id*)arg3;
- (bool)isUsable;
- (id)loadBiomeSchema;
- (id)loadDataSchema;
- (id)loadDb;
- (id)loadMegadomeSchema;
- (struct sqlite3_stmt { }*)prepare:(id)arg1 error:(id*)arg2;
- (id)prepareBootstrapSchema;
- (id)refreshAppsTable:(id*)arg1;
- (id)saveSchema:(id)arg1 error:(id*)arg2;
- (void)setEnable:(bool)arg1;
- (void)set_biomeSchema:(id)arg1;
- (void)set_bootstrapSchema:(id)arg1;
- (void)set_db:(struct sqlite3 { }*)arg1;
- (void)set_error:(id)arg1;
- (void)set_executorQueue:(id)arg1;
- (void)set_isEnabled:(bool)arg1;
- (void)set_megadomeSchema:(id)arg1;
- (void)set_schema:(id)arg1;
- (id)updateSchema:(id)arg1 error:(id*)arg2;
- (id)validateRowsData:(id)arg1 tableSchema:(id)arg2 error:(id*)arg3;

@end
