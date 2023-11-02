
@interface SGQuickResponsesDatabase : NSObject <_PASDatabaseMigrationProtocol> {
    _PASSqliteDatabase * _db;
}

@property (nonatomic, readonly) _PASSqliteDatabase *db;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_openAnotherHandleForPath:(id)arg1;
+ (id)_openFreshHandleForPath:(id)arg1 inMemory:(bool)arg2;

- (void).cxx_destruct;
- (bool)_handleCorruptionWithCheck:(bool)arg1 path:(id)arg2 inMemory:(bool)arg3;
- (bool)_performMigrationsWithPath:(id)arg1 inMemory:(bool)arg2 attemptIteration:(int)arg3;
- (id)databaseHandle;
- (id)db;
- (id)initInDirectory:(id)arg1 inMemory:(bool)arg2 withMigration:(bool)arg3;
- (id)initInDirectory:(id)arg1 inMemory:(bool)arg2 withMigration:(bool)arg3 forTools:(bool)arg4;
- (id)migrations;
- (id)queriesToSkipFromEmptyToVersion:(unsigned int*)arg1;

@end
