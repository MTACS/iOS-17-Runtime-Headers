
@interface AVTSideCoreDataStoreMigratableSource : NSObject <AVTStoreBackendMigratableSource> {
    <AVTCoreDataPersistentStoreLocalConfiguration> * _configuration;
    AVTCoreEnvironment * _environment;
}

@property (nonatomic, readonly) <AVTCoreDataPersistentStoreLocalConfiguration> *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) AVTCoreEnvironment *environment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)configuration;
- (id)createSourceBackend;
- (id)environment;
- (bool)finalizeMigration:(id*)arg1;
- (id)initWithConfiguration:(id)arg1 environment:(id)arg2;
- (id)migratedRecordFromRecord:(id)arg1 index:(unsigned long long)arg2 totalCount:(unsigned long long)arg3;
- (bool)migrationNeeded;

@end